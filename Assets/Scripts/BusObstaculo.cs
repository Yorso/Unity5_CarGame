using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BusObstaculo : MonoBehaviour {
	public GameObject cronometroGO;
	public Cronometro cronometroScript;

	public GameObject audioFXGO;
	public AudioFX audioFXScript;

	void Start(){
		//Buscamos los componentes por búsqueda de componentes y nopor string
		cronometroGO = GameObject.FindObjectOfType<Cronometro>().gameObject;
		cronometroScript = cronometroGO.GetComponent<Cronometro> ();

		audioFXGO = GameObject.FindObjectOfType<AudioFX>().gameObject;
		audioFXScript = audioFXGO.GetComponent<AudioFX> ();

	}

	void OnTriggerEnter2D(Collider2D other){
		if(other.GetComponent<Coche>() != null){
			audioFXScript.FXSonidoChoque (); //Si el coche choca contra el autobús, llamamos ala función que reproduce el sonido del choque
			cronometroScript.tiempo = cronometroScript.tiempo - 20; //Si el coche choca contra el bus, le restamos 20 segundos al tiempo como penalización
			Destroy (this.gameObject); //Si el coche se choca con el bus, hacemos desaparecer el bus
		}
	}
}
