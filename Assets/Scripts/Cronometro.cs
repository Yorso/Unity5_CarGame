using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; //Necesario para poder recoger los textos tiempo y distancia (entre otras muchas cosas)

public class Cronometro : MonoBehaviour {
	//Conectamos el cronómetro con el MotoCarreteras
	public GameObject motorCarreterasGO;
	public MotorCarreteras motorCarreterasScript;

	//Nos traemoslos textos (tiempo y distancia) para poder manipularlos
	public float tiempo;
	public float distancia;
	public Text txtTiempo; //Le asignamos tiempo a txtTiempo desde el Inspector arrastrando
	public Text txtDistancia;//Le asignamos distancia a txtDistancia desde el Inspector arrastrando
	public Text txtDistanciFinal; //Distancia total recorrida cuando el juego termina. Asignarlo a mano desde el inspector

	// Use this for initialization
	void Start () {
		motorCarreterasGO = GameObject.Find ("MotorCarreteras");
		motorCarreterasScript = motorCarreterasGO.GetComponent<MotorCarreteras>();

		//Inicializamos los valores de tiempo y distancia
		txtTiempo.text = "01:00";
		txtDistancia.text = "0";

		tiempo = 60; //60 segundos => txtTiempo.text = "01:00". Si tiempo cambia, cambiar también txtTiempo.text
	}
	
	// Update is called once per frame
	void Update () {
		//Hay que decirle que empiece a calcular el tiempo y la distancia cuando el juego se haya iniciado, si no la distancia empieza a sumar sin que 
		//haya empezado el juego
		if(motorCarreterasScript.inicioJuego && !motorCarreterasScript.juegoTerminado){
			CalculoTiempoYDistancia ();//Como el Update se llama por frame, estará todo el tiempo llamando a la función CalculoTiempoYDistancia() y ésta estará actualizando
		     				           //continuamente los valores de tiempo y distancia
		}

		//Cuando el cronómetro llegue a cero, terminamos el juego. Lo ponemos aquí en el Update
		//para que esté todo el rato comprobándolo
		if (tiempo <= 1 && !motorCarreterasScript.juegoTerminado) {//tiempo <= 1  => Realmente es cuando llegue a cero pero con 1 es mejor el efecto de terminación del juego
			                                                       //Ponlo a cero para ver la diferencia entre 1 y 0
			motorCarreterasScript.juegoTerminado = true;
			//LLamamos a la función JuegoTerminadoEstados que está en el script MotorCarreteras.cs
			motorCarreterasScript.JuegoTerminadoEstados();
			txtDistanciFinal.text = ((int)distancia).ToString () + " mts";
			txtTiempo.text = "00:00"; //Hacemos ésto para que no nos salga tiempos negativos al final del juego por haber chocado con buses
		}
	}

	void CalculoTiempoYDistancia(){
		//Cálculo de la distancia
		distancia += Time.deltaTime * motorCarreterasScript.velocidad;//Distancia = distancia anterior + (Tiempo * Velocidad recorrida)
		txtDistancia.text = ((int)distancia).ToString();

		//Cálculo del tiempo
		tiempo -= Time.deltaTime;//Le decimos que el tiempo empiece en forma regresiva (marcha atrás)
		int minutos = (int)tiempo / 60;// 120/60 = 2 minutos y lo pasamos a entero para quitar decimales
		int segundos = (int)tiempo % 60;
		txtTiempo.text = minutos.ToString () + ":" + segundos.ToString ().PadLeft (2,'0');// PadLeft (2,'0') es para decir que tenga 2 casilleros (00) y si no tiene con qué rellenar que lo rellene con 0 ('0')
	}
}
