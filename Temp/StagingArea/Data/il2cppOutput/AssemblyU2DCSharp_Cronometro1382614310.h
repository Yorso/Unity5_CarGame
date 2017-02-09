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
// MotorCarreteras
struct MotorCarreteras_t2963044731;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cronometro
struct  Cronometro_t1382614310  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Cronometro::motorCarreterasGO
	GameObject_t1756533147 * ___motorCarreterasGO_2;
	// MotorCarreteras Cronometro::motorCarreterasScript
	MotorCarreteras_t2963044731 * ___motorCarreterasScript_3;
	// System.Single Cronometro::tiempo
	float ___tiempo_4;
	// System.Single Cronometro::distancia
	float ___distancia_5;
	// UnityEngine.UI.Text Cronometro::txtTiempo
	Text_t356221433 * ___txtTiempo_6;
	// UnityEngine.UI.Text Cronometro::txtDistancia
	Text_t356221433 * ___txtDistancia_7;
	// UnityEngine.UI.Text Cronometro::txtDistanciFinal
	Text_t356221433 * ___txtDistanciFinal_8;

public:
	inline static int32_t get_offset_of_motorCarreterasGO_2() { return static_cast<int32_t>(offsetof(Cronometro_t1382614310, ___motorCarreterasGO_2)); }
	inline GameObject_t1756533147 * get_motorCarreterasGO_2() const { return ___motorCarreterasGO_2; }
	inline GameObject_t1756533147 ** get_address_of_motorCarreterasGO_2() { return &___motorCarreterasGO_2; }
	inline void set_motorCarreterasGO_2(GameObject_t1756533147 * value)
	{
		___motorCarreterasGO_2 = value;
		Il2CppCodeGenWriteBarrier(&___motorCarreterasGO_2, value);
	}

	inline static int32_t get_offset_of_motorCarreterasScript_3() { return static_cast<int32_t>(offsetof(Cronometro_t1382614310, ___motorCarreterasScript_3)); }
	inline MotorCarreteras_t2963044731 * get_motorCarreterasScript_3() const { return ___motorCarreterasScript_3; }
	inline MotorCarreteras_t2963044731 ** get_address_of_motorCarreterasScript_3() { return &___motorCarreterasScript_3; }
	inline void set_motorCarreterasScript_3(MotorCarreteras_t2963044731 * value)
	{
		___motorCarreterasScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___motorCarreterasScript_3, value);
	}

	inline static int32_t get_offset_of_tiempo_4() { return static_cast<int32_t>(offsetof(Cronometro_t1382614310, ___tiempo_4)); }
	inline float get_tiempo_4() const { return ___tiempo_4; }
	inline float* get_address_of_tiempo_4() { return &___tiempo_4; }
	inline void set_tiempo_4(float value)
	{
		___tiempo_4 = value;
	}

	inline static int32_t get_offset_of_distancia_5() { return static_cast<int32_t>(offsetof(Cronometro_t1382614310, ___distancia_5)); }
	inline float get_distancia_5() const { return ___distancia_5; }
	inline float* get_address_of_distancia_5() { return &___distancia_5; }
	inline void set_distancia_5(float value)
	{
		___distancia_5 = value;
	}

	inline static int32_t get_offset_of_txtTiempo_6() { return static_cast<int32_t>(offsetof(Cronometro_t1382614310, ___txtTiempo_6)); }
	inline Text_t356221433 * get_txtTiempo_6() const { return ___txtTiempo_6; }
	inline Text_t356221433 ** get_address_of_txtTiempo_6() { return &___txtTiempo_6; }
	inline void set_txtTiempo_6(Text_t356221433 * value)
	{
		___txtTiempo_6 = value;
		Il2CppCodeGenWriteBarrier(&___txtTiempo_6, value);
	}

	inline static int32_t get_offset_of_txtDistancia_7() { return static_cast<int32_t>(offsetof(Cronometro_t1382614310, ___txtDistancia_7)); }
	inline Text_t356221433 * get_txtDistancia_7() const { return ___txtDistancia_7; }
	inline Text_t356221433 ** get_address_of_txtDistancia_7() { return &___txtDistancia_7; }
	inline void set_txtDistancia_7(Text_t356221433 * value)
	{
		___txtDistancia_7 = value;
		Il2CppCodeGenWriteBarrier(&___txtDistancia_7, value);
	}

	inline static int32_t get_offset_of_txtDistanciFinal_8() { return static_cast<int32_t>(offsetof(Cronometro_t1382614310, ___txtDistanciFinal_8)); }
	inline Text_t356221433 * get_txtDistanciFinal_8() const { return ___txtDistanciFinal_8; }
	inline Text_t356221433 ** get_address_of_txtDistanciFinal_8() { return &___txtDistanciFinal_8; }
	inline void set_txtDistanciFinal_8(Text_t356221433 * value)
	{
		___txtDistanciFinal_8 = value;
		Il2CppCodeGenWriteBarrier(&___txtDistanciFinal_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
