using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Alamcenamos todos los efectos (chocques contra obstáculos, música del final, etc...)
public class AudioFX : MonoBehaviour {

	//Para eso usamos un array de AudioClip
	public AudioClip[] fxs; //Setear el tamaño a 2 y los efectos en el Inspector

	AudioSource audioS;

	void Start(){
		audioS = GetComponent<AudioSource> ();
	}

	//En la posición 0 del array tengo el sonido del chocque del coche
	public void FXSonidoChoque(){
		audioS.clip = fxs [0];
		audioS.Play ();
	}

	//En la posición 1 del array tengo la música de Game Over
	public void FXGameOver(){
		audioS.clip = fxs [1];
		audioS.Play ();
		audioS.loop = true;
	}
}
