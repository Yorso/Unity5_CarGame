using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;//Se usa para cambiar entre escenas
using UnityEngine.UI;//Para poder trabajar con el fundido, ya que el fundido que hemos creado es una imagen de la UI

public class Fundidos : MonoBehaviour {
	public Image fundido; //setearlo desde el Inspector
	public string[] escenas; //Le pasamos por nombre la escena en una corrutina. Setear a mano desde el Inspector el tamaño del array (2) y pasarle las escenas (Inicio y Game)

	// Use this for initialization
	void Start () {
		fundido.CrossFadeAlpha (0, 0.5f, false); //0  para que transite a transparente (lo tenemos en negro y queremos que se convierta en transparente
									             //0.5f es la duración de tránsito en segundos
		                                         
	}

	public void FadeOut(int s){//s es el número de escena en el array escenas
		fundido.CrossFadeAlpha(1,0.5f,false);
		StartCoroutine (CambioEscena(escenas[s]));
	}

	IEnumerator CambioEscena(string escena){
		yield return new WaitForSeconds (1);
		SceneManager.LoadScene (escena);
	}

}
