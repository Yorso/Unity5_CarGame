using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Script para controlar los movimientos del coche
public class ControladorCoche : MonoBehaviour {
	//Para ello necesitamos el coche obviamente
	public GameObject cocheGO;

	public float anguloDeGiro;//Ángulo de giro del morro del coche. Setearlo en el Inspector, por ejemplo a 45
	public float velocidad;//Velocidad con la que quiero que se desplace de un lado a otro el coche. Setearla en el Inspector, por ejemplo a 25

	//Lo usamos para que cuando finalice el juego o mientras está la cuenta atrás del principio no se pueda mover el coche
	public GameObject motorCarreterasGO;
	public MotorCarreteras motorCarreterasScript;

	//Lo usamos para control y el giro del morro del coche
	float giroEnZ;
	Vector2 playerPosScreen;
	Vector2 touchDeltaPosition;
	Vector2 touchDeltaPosition_ant;

	// Use this for initialization
	void Start () {
		touchDeltaPosition_ant = new Vector2 (0, 0);

		//Ahora en vez de buscar por string, buscamos por componente para ver cómo se hace y que hay otra forma de encontrar GO aparte de por string
		//Coche tiene el componente Coche (script "Coche" que hemos arrastrado en el Inspector al Game Object "Coche"), así que lo buscamos por ello
		cocheGO = GameObject.FindObjectOfType<Coche>().gameObject;

		motorCarreterasGO = GameObject.Find ("MotorCarreteras");
		motorCarreterasScript = motorCarreterasGO.GetComponent<MotorCarreteras>();
	}
	
	// Update is called once per frame
	void FixedUpdate () {//Importante!! OJOOOOO  Hay que poner FixedUpdate en vez de Update ya que estamos trabajando con RigidBody2D.. Si no, por ejemplo, puede pasarnos que
		                 //el coche no reconozca los límites laterales y se nos salga fuera de la pantalla

		//Con ésto evitamos que el coche se salga de la pantalla
		playerPosScreen = Camera.main.WorldToScreenPoint(transform.position);
		if (playerPosScreen.x > Screen.width -50){//Límite derecho de la pantalla
			transform.position = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width - 50, playerPosScreen.y, transform.position.z - Camera.main.transform.position.z));
		}
		else if (playerPosScreen.x < 50.0f){//Límite izquierdo de la pantalla
			transform.position = Camera.main.ScreenToWorldPoint(new Vector3(50.0f, playerPosScreen.y, transform.position.z - Camera.main.transform.position.z));
		}

		giroEnZ = 0;

		if(motorCarreterasScript.inicioJuego && !motorCarreterasScript.juegoTerminado){//Ésto es para que cuando finalice el juego o mientras está 
	                                                                                   //la cuenta atrás del principio no se pueda mover el coche
			//Movimiento para dispositivos móviles
			if (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Moved) {
				// Get movement of the finger since last frame
				touchDeltaPosition = Input.GetTouch (0).deltaPosition;

				// Move object across XY plane
				transform.Translate (Vector2.right * (-touchDeltaPosition.x) * velocidad * Time.deltaTime);
			} else if(Input.GetAxis("Horizontal") != 0){ //Movimiento para PC
				//Aquí le vamos a decir cómo mover el coche (izq y dcha)
				transform.Translate(Vector2.right * Input.GetAxis("Horizontal") * velocidad * Time.deltaTime);//Trabajamos con la clase Input que es la que lee todas las entradas externas, por ejemplo pulsaciones de teclado
				//Le decimos que coja los datos del canal "Horizontal"
				//Echar un ojo al menú Edit/Project Settings/Input, ahí se puede configurar todo los controles, hasta joysticks

				giroEnZ = Input.GetAxis("Horizontal") * (-anguloDeGiro); //Ésto es un valor en decimal, necesitamos convertirlo en ángulo para dar el efecto de giro del morro del coche. Lo hacemos en la linea de abajo
				                                                         //Ponemos el ángulo de giro a negativo porque gira el culo y no el morro... a saber el por qué...
				cocheGO.transform.rotation = Quaternion.Euler(0,0, giroEnZ);//Quaternion.Euler() => todo lo que le pase lo transforma en ángulo. en x e y no queremos que gire, por eso lo ponemos a cero
			}
		}
	}
}
