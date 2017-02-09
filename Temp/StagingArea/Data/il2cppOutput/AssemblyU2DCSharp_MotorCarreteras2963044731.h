#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Camera
struct Camera_t189460977;
// AudioFX
struct AudioFX_t1810118940;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MotorCarreteras
struct  MotorCarreteras_t2963044731  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MotorCarreteras::contenedorCallesGO
	GameObject_t1756533147 * ___contenedorCallesGO_2;
	// UnityEngine.GameObject[] MotorCarreteras::contenedorCallesArray
	GameObjectU5BU5D_t3057952154* ___contenedorCallesArray_3;
	// System.Single MotorCarreteras::velocidad
	float ___velocidad_4;
	// System.Boolean MotorCarreteras::inicioJuego
	bool ___inicioJuego_5;
	// System.Boolean MotorCarreteras::juegoTerminado
	bool ___juegoTerminado_6;
	// System.Int32 MotorCarreteras::contadorCalles
	int32_t ___contadorCalles_7;
	// System.Int32 MotorCarreteras::numeroSelectorCalles
	int32_t ___numeroSelectorCalles_8;
	// UnityEngine.GameObject MotorCarreteras::calleAnterior
	GameObject_t1756533147 * ___calleAnterior_9;
	// UnityEngine.GameObject MotorCarreteras::calleNueva
	GameObject_t1756533147 * ___calleNueva_10;
	// System.Single MotorCarreteras::tamanoCalle
	float ___tamanoCalle_11;
	// UnityEngine.Vector3 MotorCarreteras::medidaLimitePantalla
	Vector3_t2243707580  ___medidaLimitePantalla_12;
	// System.Boolean MotorCarreteras::salioDePantalla
	bool ___salioDePantalla_13;
	// UnityEngine.GameObject MotorCarreteras::mCamGO
	GameObject_t1756533147 * ___mCamGO_14;
	// UnityEngine.Camera MotorCarreteras::mCamComp
	Camera_t189460977 * ___mCamComp_15;
	// UnityEngine.GameObject MotorCarreteras::cocheGO
	GameObject_t1756533147 * ___cocheGO_16;
	// UnityEngine.GameObject MotorCarreteras::audioFXGO
	GameObject_t1756533147 * ___audioFXGO_17;
	// AudioFX MotorCarreteras::audioFXScript
	AudioFX_t1810118940 * ___audioFXScript_18;
	// UnityEngine.GameObject MotorCarreteras::bgFinalGO
	GameObject_t1756533147 * ___bgFinalGO_19;
	// UnityEngine.GameObject MotorCarreteras::controladorCocheGO
	GameObject_t1756533147 * ___controladorCocheGO_20;

public:
	inline static int32_t get_offset_of_contenedorCallesGO_2() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___contenedorCallesGO_2)); }
	inline GameObject_t1756533147 * get_contenedorCallesGO_2() const { return ___contenedorCallesGO_2; }
	inline GameObject_t1756533147 ** get_address_of_contenedorCallesGO_2() { return &___contenedorCallesGO_2; }
	inline void set_contenedorCallesGO_2(GameObject_t1756533147 * value)
	{
		___contenedorCallesGO_2 = value;
		Il2CppCodeGenWriteBarrier(&___contenedorCallesGO_2, value);
	}

	inline static int32_t get_offset_of_contenedorCallesArray_3() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___contenedorCallesArray_3)); }
	inline GameObjectU5BU5D_t3057952154* get_contenedorCallesArray_3() const { return ___contenedorCallesArray_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_contenedorCallesArray_3() { return &___contenedorCallesArray_3; }
	inline void set_contenedorCallesArray_3(GameObjectU5BU5D_t3057952154* value)
	{
		___contenedorCallesArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___contenedorCallesArray_3, value);
	}

	inline static int32_t get_offset_of_velocidad_4() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___velocidad_4)); }
	inline float get_velocidad_4() const { return ___velocidad_4; }
	inline float* get_address_of_velocidad_4() { return &___velocidad_4; }
	inline void set_velocidad_4(float value)
	{
		___velocidad_4 = value;
	}

	inline static int32_t get_offset_of_inicioJuego_5() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___inicioJuego_5)); }
	inline bool get_inicioJuego_5() const { return ___inicioJuego_5; }
	inline bool* get_address_of_inicioJuego_5() { return &___inicioJuego_5; }
	inline void set_inicioJuego_5(bool value)
	{
		___inicioJuego_5 = value;
	}

	inline static int32_t get_offset_of_juegoTerminado_6() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___juegoTerminado_6)); }
	inline bool get_juegoTerminado_6() const { return ___juegoTerminado_6; }
	inline bool* get_address_of_juegoTerminado_6() { return &___juegoTerminado_6; }
	inline void set_juegoTerminado_6(bool value)
	{
		___juegoTerminado_6 = value;
	}

	inline static int32_t get_offset_of_contadorCalles_7() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___contadorCalles_7)); }
	inline int32_t get_contadorCalles_7() const { return ___contadorCalles_7; }
	inline int32_t* get_address_of_contadorCalles_7() { return &___contadorCalles_7; }
	inline void set_contadorCalles_7(int32_t value)
	{
		___contadorCalles_7 = value;
	}

	inline static int32_t get_offset_of_numeroSelectorCalles_8() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___numeroSelectorCalles_8)); }
	inline int32_t get_numeroSelectorCalles_8() const { return ___numeroSelectorCalles_8; }
	inline int32_t* get_address_of_numeroSelectorCalles_8() { return &___numeroSelectorCalles_8; }
	inline void set_numeroSelectorCalles_8(int32_t value)
	{
		___numeroSelectorCalles_8 = value;
	}

	inline static int32_t get_offset_of_calleAnterior_9() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___calleAnterior_9)); }
	inline GameObject_t1756533147 * get_calleAnterior_9() const { return ___calleAnterior_9; }
	inline GameObject_t1756533147 ** get_address_of_calleAnterior_9() { return &___calleAnterior_9; }
	inline void set_calleAnterior_9(GameObject_t1756533147 * value)
	{
		___calleAnterior_9 = value;
		Il2CppCodeGenWriteBarrier(&___calleAnterior_9, value);
	}

	inline static int32_t get_offset_of_calleNueva_10() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___calleNueva_10)); }
	inline GameObject_t1756533147 * get_calleNueva_10() const { return ___calleNueva_10; }
	inline GameObject_t1756533147 ** get_address_of_calleNueva_10() { return &___calleNueva_10; }
	inline void set_calleNueva_10(GameObject_t1756533147 * value)
	{
		___calleNueva_10 = value;
		Il2CppCodeGenWriteBarrier(&___calleNueva_10, value);
	}

	inline static int32_t get_offset_of_tamanoCalle_11() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___tamanoCalle_11)); }
	inline float get_tamanoCalle_11() const { return ___tamanoCalle_11; }
	inline float* get_address_of_tamanoCalle_11() { return &___tamanoCalle_11; }
	inline void set_tamanoCalle_11(float value)
	{
		___tamanoCalle_11 = value;
	}

	inline static int32_t get_offset_of_medidaLimitePantalla_12() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___medidaLimitePantalla_12)); }
	inline Vector3_t2243707580  get_medidaLimitePantalla_12() const { return ___medidaLimitePantalla_12; }
	inline Vector3_t2243707580 * get_address_of_medidaLimitePantalla_12() { return &___medidaLimitePantalla_12; }
	inline void set_medidaLimitePantalla_12(Vector3_t2243707580  value)
	{
		___medidaLimitePantalla_12 = value;
	}

	inline static int32_t get_offset_of_salioDePantalla_13() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___salioDePantalla_13)); }
	inline bool get_salioDePantalla_13() const { return ___salioDePantalla_13; }
	inline bool* get_address_of_salioDePantalla_13() { return &___salioDePantalla_13; }
	inline void set_salioDePantalla_13(bool value)
	{
		___salioDePantalla_13 = value;
	}

	inline static int32_t get_offset_of_mCamGO_14() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___mCamGO_14)); }
	inline GameObject_t1756533147 * get_mCamGO_14() const { return ___mCamGO_14; }
	inline GameObject_t1756533147 ** get_address_of_mCamGO_14() { return &___mCamGO_14; }
	inline void set_mCamGO_14(GameObject_t1756533147 * value)
	{
		___mCamGO_14 = value;
		Il2CppCodeGenWriteBarrier(&___mCamGO_14, value);
	}

	inline static int32_t get_offset_of_mCamComp_15() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___mCamComp_15)); }
	inline Camera_t189460977 * get_mCamComp_15() const { return ___mCamComp_15; }
	inline Camera_t189460977 ** get_address_of_mCamComp_15() { return &___mCamComp_15; }
	inline void set_mCamComp_15(Camera_t189460977 * value)
	{
		___mCamComp_15 = value;
		Il2CppCodeGenWriteBarrier(&___mCamComp_15, value);
	}

	inline static int32_t get_offset_of_cocheGO_16() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___cocheGO_16)); }
	inline GameObject_t1756533147 * get_cocheGO_16() const { return ___cocheGO_16; }
	inline GameObject_t1756533147 ** get_address_of_cocheGO_16() { return &___cocheGO_16; }
	inline void set_cocheGO_16(GameObject_t1756533147 * value)
	{
		___cocheGO_16 = value;
		Il2CppCodeGenWriteBarrier(&___cocheGO_16, value);
	}

	inline static int32_t get_offset_of_audioFXGO_17() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___audioFXGO_17)); }
	inline GameObject_t1756533147 * get_audioFXGO_17() const { return ___audioFXGO_17; }
	inline GameObject_t1756533147 ** get_address_of_audioFXGO_17() { return &___audioFXGO_17; }
	inline void set_audioFXGO_17(GameObject_t1756533147 * value)
	{
		___audioFXGO_17 = value;
		Il2CppCodeGenWriteBarrier(&___audioFXGO_17, value);
	}

	inline static int32_t get_offset_of_audioFXScript_18() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___audioFXScript_18)); }
	inline AudioFX_t1810118940 * get_audioFXScript_18() const { return ___audioFXScript_18; }
	inline AudioFX_t1810118940 ** get_address_of_audioFXScript_18() { return &___audioFXScript_18; }
	inline void set_audioFXScript_18(AudioFX_t1810118940 * value)
	{
		___audioFXScript_18 = value;
		Il2CppCodeGenWriteBarrier(&___audioFXScript_18, value);
	}

	inline static int32_t get_offset_of_bgFinalGO_19() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___bgFinalGO_19)); }
	inline GameObject_t1756533147 * get_bgFinalGO_19() const { return ___bgFinalGO_19; }
	inline GameObject_t1756533147 ** get_address_of_bgFinalGO_19() { return &___bgFinalGO_19; }
	inline void set_bgFinalGO_19(GameObject_t1756533147 * value)
	{
		___bgFinalGO_19 = value;
		Il2CppCodeGenWriteBarrier(&___bgFinalGO_19, value);
	}

	inline static int32_t get_offset_of_controladorCocheGO_20() { return static_cast<int32_t>(offsetof(MotorCarreteras_t2963044731, ___controladorCocheGO_20)); }
	inline GameObject_t1756533147 * get_controladorCocheGO_20() const { return ___controladorCocheGO_20; }
	inline GameObject_t1756533147 ** get_address_of_controladorCocheGO_20() { return &___controladorCocheGO_20; }
	inline void set_controladorCocheGO_20(GameObject_t1756533147 * value)
	{
		___controladorCocheGO_20 = value;
		Il2CppCodeGenWriteBarrier(&___controladorCocheGO_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
