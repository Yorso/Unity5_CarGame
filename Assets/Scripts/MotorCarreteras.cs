using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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


	// Use this for initialization
	void Start () {
		InicioJuego ();
	}

	//En este método vamos a inicializar todos los parámetros
	void InicioJuego(){
		contenedorCallesGO = GameObject.Find ("ContenedorCalles");
		VelocidadMotorCarretera ();
		BuscoCalles ();
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
	}

	//Sumamos el tamaño de las piezas que componen una calle para saber dónde posicionar la nueva calle
	void MedirCalle(){
		for(int i = 0; i < calleAnterior.transform.childCount; i++) { //calleAnterior.transform.childCount => Cuenta los hijos que tiene una Calle 
			//(no sólo las Piezas, cuenta todo lo que pueda tener)
			//Vamos a coger las piezas, lo buscamos por el componente Pieza (es un script asignado a las Piezas (ver Inspector))
			if(calleAnterior.transform.GetChild(i).gameObject.GetComponent<Pieza>() != null){
				float tamanoPieza = calleAnterior.transform.GetChild(i).gameObject.GetComponent<SpriteRenderer>().bounds.size.y;
				tamanoCalle = tamanoCalle + tamanoPieza;
			}
		}
	}

	// Update is called once per frame
	void Update () {
		if(inicioJuego && !juegoTerminado){
			transform.Translate(Vector3.down * velocidad * Time.deltaTime); //Vector3.down hace que la carretera vaya hacia abajo.
																			//Velocidad es para que vaya a esa velocidad la carretera
																			//Time.deltaTime es para que sea todopor segundo
																			//Todo esto hace una velocidad constante independientemente de la máquina que lo ejecute
		}
	}
}
