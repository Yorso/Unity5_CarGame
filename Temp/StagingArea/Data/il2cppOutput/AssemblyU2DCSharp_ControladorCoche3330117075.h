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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ControladorCoche
struct  ControladorCoche_t3330117075  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ControladorCoche::cocheGO
	GameObject_t1756533147 * ___cocheGO_2;
	// System.Single ControladorCoche::anguloDeGiro
	float ___anguloDeGiro_3;
	// System.Single ControladorCoche::velocidad
	float ___velocidad_4;
	// UnityEngine.GameObject ControladorCoche::motorCarreterasGO
	GameObject_t1756533147 * ___motorCarreterasGO_5;
	// MotorCarreteras ControladorCoche::motorCarreterasScript
	MotorCarreteras_t2963044731 * ___motorCarreterasScript_6;

public:
	inline static int32_t get_offset_of_cocheGO_2() { return static_cast<int32_t>(offsetof(ControladorCoche_t3330117075, ___cocheGO_2)); }
	inline GameObject_t1756533147 * get_cocheGO_2() const { return ___cocheGO_2; }
	inline GameObject_t1756533147 ** get_address_of_cocheGO_2() { return &___cocheGO_2; }
	inline void set_cocheGO_2(GameObject_t1756533147 * value)
	{
		___cocheGO_2 = value;
		Il2CppCodeGenWriteBarrier(&___cocheGO_2, value);
	}

	inline static int32_t get_offset_of_anguloDeGiro_3() { return static_cast<int32_t>(offsetof(ControladorCoche_t3330117075, ___anguloDeGiro_3)); }
	inline float get_anguloDeGiro_3() const { return ___anguloDeGiro_3; }
	inline float* get_address_of_anguloDeGiro_3() { return &___anguloDeGiro_3; }
	inline void set_anguloDeGiro_3(float value)
	{
		___anguloDeGiro_3 = value;
	}

	inline static int32_t get_offset_of_velocidad_4() { return static_cast<int32_t>(offsetof(ControladorCoche_t3330117075, ___velocidad_4)); }
	inline float get_velocidad_4() const { return ___velocidad_4; }
	inline float* get_address_of_velocidad_4() { return &___velocidad_4; }
	inline void set_velocidad_4(float value)
	{
		___velocidad_4 = value;
	}

	inline static int32_t get_offset_of_motorCarreterasGO_5() { return static_cast<int32_t>(offsetof(ControladorCoche_t3330117075, ___motorCarreterasGO_5)); }
	inline GameObject_t1756533147 * get_motorCarreterasGO_5() const { return ___motorCarreterasGO_5; }
	inline GameObject_t1756533147 ** get_address_of_motorCarreterasGO_5() { return &___motorCarreterasGO_5; }
	inline void set_motorCarreterasGO_5(GameObject_t1756533147 * value)
	{
		___motorCarreterasGO_5 = value;
		Il2CppCodeGenWriteBarrier(&___motorCarreterasGO_5, value);
	}

	inline static int32_t get_offset_of_motorCarreterasScript_6() { return static_cast<int32_t>(offsetof(ControladorCoche_t3330117075, ___motorCarreterasScript_6)); }
	inline MotorCarreteras_t2963044731 * get_motorCarreterasScript_6() const { return ___motorCarreterasScript_6; }
	inline MotorCarreteras_t2963044731 ** get_address_of_motorCarreterasScript_6() { return &___motorCarreterasScript_6; }
	inline void set_motorCarreterasScript_6(MotorCarreteras_t2963044731 * value)
	{
		___motorCarreterasScript_6 = value;
		Il2CppCodeGenWriteBarrier(&___motorCarreterasScript_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
