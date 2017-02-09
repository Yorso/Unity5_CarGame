using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Este script va a ser el disparador de que se inicie el juego
public class CuentaAtras : MonoBehaviour {

	public GameObject motorCarreterasGO;
	public MotorCarreteras motorCarreterasScript;

	//Almacenamos los números de cuenta atrás en un array de Sprites
	public Sprite[] numeros; //Le asignamos el tamaño del aray y las imágenes de los números desde el Inspector arrastrando

	//Ésto es para que haga la cuenta atrás de los sprites de los números
	public GameObject contadorNumerosGO;
	public SpriteRenderer contadorNumerosComp;

	//Ésto es para activar los sonidos de arranque del coche
	public GameObject controladorCocheGO;
	public GameObject cocheGO;

	// Use this for initialization
	void Start () {
		InicioComponentes ();
	}

	void InicioComponentes(){
		motorCarreterasGO = GameObject.Find ("MotorCarreteras");
		motorCarreterasScript = motorCarreterasGO.GetComponent<MotorCarreteras> ();

		contadorNumerosGO = GameObject.Find ("ContadorNumeros");
		contadorNumerosComp = contadorNumerosGO.GetComponent<SpriteRenderer> ();

		cocheGO = GameObject.Find ("Coche");
		controladorCocheGO = GameObject.Find ("ControladorCoche");

		//Empezamos la cuenta atrás
		InicioCuentaAtras();
	}

	void InicioCuentaAtras(){
		StartCoroutine(Contando ());
	}

	IEnumerator Contando(){
		//Muestra el 3 y suena el arranque del coche
		controladorCocheGO.GetComponent<AudioSource> ().Play();
		yield return new WaitForSeconds (2);//Espera 2 segundos

		//Muestra el 2
		contadorNumerosComp.sprite = numeros [1];
		this.gameObject.GetComponent<AudioSource> ().Play();
		yield return new WaitForSeconds (1);//Espera 1 segundo

		//Muestra el 1
		contadorNumerosComp.sprite = numeros [2];
		this.gameObject.GetComponent<AudioSource> ().Play();
		yield return new WaitForSeconds (1);//Espera 1 segundo

		//Muestra "Go" e inicia el juego y suena el sonido de motor funcionando del coche
		contadorNumerosComp.sprite = numeros [3];
		motorCarreterasScript.inicioJuego = true;
		//this.gameObject.GetComponent<AudioSource> ().Play();
		contadorNumerosComp.GetComponent<AudioSource> ().Play ();
		cocheGO.GetComponent<AudioSource> ().Play ();
		yield return new WaitForSeconds (2);//Espera 2 segundos y desaparecen todos los sprites correspondientes a la cuenta atrás (linea de abajo)

		contadorNumerosGO.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
