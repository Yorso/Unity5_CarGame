using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Para que el coche y los límites laterales no se vayan con la velocidad de la carretera hacia abajo debemos
//acordarnos que en sus respectivos componentes RigidBody2D hay que poner la gravedad a cero ===>>> OJOOOOOOOOO que nos volvemos locos luego
public class MotorCarreteras : MonoBehaviour {
	//Ésto se usa para colocar una calle detrás de otra
	public GameObject contenedorCallesGO;
	public GameObject[] contenedorCallesArray;

	public float velocidad;
	public bool inicioJuego;
	public bool juegoTerminado;

	//Usado para la creación de calles
	int contadorCalles = 0;
	int numeroSelectorCalles; //Es apra hacer un random, para sacar un trozo de calle aleatoriamente y que no siempre salga la misma

	//Necesario para posicionar las calles
	public GameObject calleAnterior;
	public GameObject calleNueva;

	//Lo necesitamos para saber el tamaño de las calles para situar la nueva calle
	public float tamanoCalle;

	//Ésto lo usamos para destruir la anterior calle
	public Vector3 medidaLimitePantalla;
	public bool salioDePantalla;
	public GameObject mCamGO;
	public Camera mCamComp;

	//Ésto lo usamos para la finalización del juego (parar el motor, cartel de Game Over, panel de resultados y jugar otra vez...)
	public GameObject cocheGO;
	public GameObject audioFXGO;
	public AudioFX audioFXScript;
	public GameObject bgFinalGO;
	public GameObject controladorCocheGO;

	// Use this for initialization
	void Start () {
		InicioJuego ();
	}

	//En este método vamos a inicializar todos los parámetros
	void InicioJuego(){
		contenedorCallesGO = GameObject.Find ("ContenedorCalles");
		controladorCocheGO = GameObject.Find ("ControladorCoche");

		//Preguntamos cuánto mide "y", lo necesitaremos en la función de MedirPantalla() para el borrado de calles antiguas
		mCamGO = GameObject.Find ("MainCamera"); //Los nombres de los Game Object mejor que no tengan espacio entre palabras: Main Camera => MainCamera. No olvides cambiar el 
		                                         //nombre del GO en el Unity!!!
		mCamComp = mCamGO.GetComponent<Camera> ();

		//Búsqueda por string
		bgFinalGO = GameObject.Find("PanelGameOver");
		bgFinalGO.SetActive (false);
		//Búsqueda por string
		audioFXGO = GameObject.Find ("AudioFX");
		audioFXScript = audioFXGO.GetComponent<AudioFX>();
		//Búsqueda por componente
		cocheGO = GameObject.FindObjectOfType<Coche> ().gameObject;

		VelocidadMotorCarretera ();
		BuscoCalles ();
	}

	//Aquí controlamos todo lo que va a pasar cuando el juego termina
	public void JuegoTerminadoEstados(){//public porque a esta función la vamos a llamar desde el script Cronometro.cs, si no no la veríamos desde ese script
		cocheGO.GetComponent<AudioSource>().Stop();//Apagamos el sonido del coche
		audioFXScript.FXGameOver(); //Llamamos a la función que reproduce la musiquilla de Game Over
		bgFinalGO.SetActive(true);//Mostramos el panel de Game Over con la distancia recorrida y botón de Juega otra vez
	}

	void VelocidadMotorCarretera(){
		velocidad = 15;
	}

	//Busca las calles, las mete en el contenedor de carreteras, las desactiva y las renombra
	void BuscoCalles(){
		contenedorCallesArray = GameObject.FindGameObjectsWithTag ("Calle");//Acuérdate de crear el tag "Calle" y ponérselo a las Calles (a la Calle dentro de MotorCarreteras realmente no haría falta ponerle el Tag "Calle")!!!

		for (int i = 0; i < contenedorCallesArray.Length; i++) {
			contenedorCallesArray [i].gameObject.transform.parent = contenedorCallesGO.transform; //Le decimos que ese Game Object Calle que acaba de encontrar lo haga hijo de "ContenedorCarreteras"
			contenedorCallesArray [i].gameObject.SetActive (false); //Aquí le decimos queapague esa calle que hemos encontrado
			contenedorCallesArray [i].gameObject.name = "CalleOFF_"+i; //aquíle decimos que le cambie el nombre a CalleOFF_nºi
		}

		//Creamos las calles
		CrearCalles ();
	}

	void CrearCalles(){
		contadorCalles++;//Aumenta el número de calles
		numeroSelectorCalles = Random.Range(0, contenedorCallesArray.Length);//Hace un random para seleccionar que calle mostrar aleatoriamente en el próximo tramo

		GameObject calle = Instantiate(contenedorCallesArray[numeroSelectorCalles]); //Instancio una copia de la calle que salió a mostrar en el random
		calle.SetActive (true); //Hacemos que aparezca esa calle seleccionada aleatoriamente
		calle.name = "Calle" + contadorCalles;//Lo renombramos
		calle.transform.parent = gameObject.transform;//Hacemos ala calle hija del motor de la carretera

		//Posicionamos las calles
		PosicionarCalles();
	}

	//Esta función le dice a la calle creada en qué coordenadas se debe de situar
	//Necesito saber la posición de la calle anterior para ello
	void PosicionarCalles(){
		calleAnterior = GameObject.Find("Calle" + (contadorCalles-1));//Buscamos la calle anterior por el nombre de ésta
		calleNueva = GameObject.Find("Calle" + contadorCalles);//Aquí asignamos la nueva calle

		//Ahora las posicionamos. Necesitamos saber cuánto mide la calle anerior para posicionar la nueva
		MedirCalle();
		calleNueva.transform.position = new Vector3 (calleAnterior.transform.position.x, calleAnterior.transform.position.y + tamanoCalle, 0);

		salioDePantalla = false;
	}

	//Sumamos el tamaño de las piezas que componen una calle para saber dónde posicionar la nueva calle
	void MedirCalle(){
		for(int i = 0; i < calleAnterior.transform.childCount; i++) { //calleAnterior.transform.childCount => Cuenta los hijos que tiene una Calle 
			//(no sólo las Piezas, cuenta todo lo que pueda tener)
			//Vamos a coger las piezas, lo buscamos por el componente Pieza (es un script asignado a las Piezas (ver Inspector))
			if(calleAnterior.transform.GetChild(i).gameObject.GetComponent<Pieza>() != null){
				float tamanoPieza = calleAnterior.transform.GetChild(i).gameObject.GetComponent<SpriteRenderer>().bounds.size.y;
				tamanoCalle += tamanoPieza;
			}
		}
	}

	//Nos dice cuánto mide la pantalla del dispositivo en el que estamos ejecutando el juego
	void MedirPantalla(){
		medidaLimitePantalla = new Vector3 (0, mCamComp.ScreenToWorldPoint(new Vector3(0,0,0)).y - 0.5f, 0);//Accedemos a la cámara y seteamos "y" (x y z no nos interesa saberlo, por eso las ponemos a cero)
																											//ScreenToWorldPoint(new Vector3(0,0,0) coge la medida en píxeles y la transforma en medida de vectores
																											//- 0.5f => ajustamiento de la nueva calle
	}

	// Update is called once per frame
	void Update () {
		//Ésto es porque si nos chocamos continuamente con uno de los límites, el coche se va bajando en su eje y poquito a poco y puede llegar a salirse de la pantalla
		//Con ésto nos aseguramos que el coche siempre permanecerá estático en su eje y
		cocheGO.transform.position = new Vector3 (cocheGO.transform.position.x, -1.9f, 0);

		if(inicioJuego && !juegoTerminado){
			transform.Translate(Vector3.down * velocidad * Time.deltaTime); //Vector3.down hace que la carretera vaya hacia abajo.
																			//Velocidad es para que vaya a esa velocidad la carretera
																			//Time.deltaTime es para que sea todo por segundo
																			//Todo esto hace una velocidad constante independientemente de la máquina que lo ejecute
		}

		//Hacemos desaparecer la calle anterior
		if (calleAnterior.transform.position.y + tamanoCalle < medidaLimitePantalla.y && !salioDePantalla) { //Comprobamos en el if que el cohce haya salido de la pantalla
			salioDePantalla = true;

			//Destruimos las calles
			DestruyoCalles();
		}
	}

	void DestruyoCalles(){
		Destroy (calleAnterior); //Destruye el GameO bject (calle vieja)
		tamanoCalle = 0 ;
		calleAnterior = null;

		//Creamos la calle nueva
		CrearCalles ();
	}
}
