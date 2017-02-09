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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CuentaAtras
struct  CuentaAtras_t422928499  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CuentaAtras::motorCarreterasGO
	GameObject_t1756533147 * ___motorCarreterasGO_2;
	// MotorCarreteras CuentaAtras::motorCarreterasScript
	MotorCarreteras_t2963044731 * ___motorCarreterasScript_3;
	// UnityEngine.Sprite[] CuentaAtras::numeros
	SpriteU5BU5D_t3359083662* ___numeros_4;
	// UnityEngine.GameObject CuentaAtras::contadorNumerosGO
	GameObject_t1756533147 * ___contadorNumerosGO_5;
	// UnityEngine.SpriteRenderer CuentaAtras::contadorNumerosComp
	SpriteRenderer_t1209076198 * ___contadorNumerosComp_6;
	// UnityEngine.GameObject CuentaAtras::controladorCocheGO
	GameObject_t1756533147 * ___controladorCocheGO_7;
	// UnityEngine.GameObject CuentaAtras::cocheGO
	GameObject_t1756533147 * ___cocheGO_8;

public:
	inline static int32_t get_offset_of_motorCarreterasGO_2() { return static_cast<int32_t>(offsetof(CuentaAtras_t422928499, ___motorCarreterasGO_2)); }
	inline GameObject_t1756533147 * get_motorCarreterasGO_2() const { return ___motorCarreterasGO_2; }
	inline GameObject_t1756533147 ** get_address_of_motorCarreterasGO_2() { return &___motorCarreterasGO_2; }
	inline void set_motorCarreterasGO_2(GameObject_t1756533147 * value)
	{
		___motorCarreterasGO_2 = value;
		Il2CppCodeGenWriteBarrier(&___motorCarreterasGO_2, value);
	}

	inline static int32_t get_offset_of_motorCarreterasScript_3() { return static_cast<int32_t>(offsetof(CuentaAtras_t422928499, ___motorCarreterasScript_3)); }
	inline MotorCarreteras_t2963044731 * get_motorCarreterasScript_3() const { return ___motorCarreterasScript_3; }
	inline MotorCarreteras_t2963044731 ** get_address_of_motorCarreterasScript_3() { return &___motorCarreterasScript_3; }
	inline void set_motorCarreterasScript_3(MotorCarreteras_t2963044731 * value)
	{
		___motorCarreterasScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___motorCarreterasScript_3, value);
	}

	inline static int32_t get_offset_of_numeros_4() { return static_cast<int32_t>(offsetof(CuentaAtras_t422928499, ___numeros_4)); }
	inline SpriteU5BU5D_t3359083662* get_numeros_4() const { return ___numeros_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_numeros_4() { return &___numeros_4; }
	inline void set_numeros_4(SpriteU5BU5D_t3359083662* value)
	{
		___numeros_4 = value;
		Il2CppCodeGenWriteBarrier(&___numeros_4, value);
	}

	inline static int32_t get_offset_of_contadorNumerosGO_5() { return static_cast<int32_t>(offsetof(CuentaAtras_t422928499, ___contadorNumerosGO_5)); }
	inline GameObject_t1756533147 * get_contadorNumerosGO_5() const { return ___contadorNumerosGO_5; }
	inline GameObject_t1756533147 ** get_address_of_contadorNumerosGO_5() { return &___contadorNumerosGO_5; }
	inline void set_contadorNumerosGO_5(GameObject_t1756533147 * value)
	{
		___contadorNumerosGO_5 = value;
		Il2CppCodeGenWriteBarrier(&___contadorNumerosGO_5, value);
	}

	inline static int32_t get_offset_of_contadorNumerosComp_6() { return static_cast<int32_t>(offsetof(CuentaAtras_t422928499, ___contadorNumerosComp_6)); }
	inline SpriteRenderer_t1209076198 * get_contadorNumerosComp_6() const { return ___contadorNumerosComp_6; }
	inline SpriteRenderer_t1209076198 ** get_address_of_contadorNumerosComp_6() { return &___contadorNumerosComp_6; }
	inline void set_contadorNumerosComp_6(SpriteRenderer_t1209076198 * value)
	{
		___contadorNumerosComp_6 = value;
		Il2CppCodeGenWriteBarrier(&___contadorNumerosComp_6, value);
	}

	inline static int32_t get_offset_of_controladorCocheGO_7() { return static_cast<int32_t>(offsetof(CuentaAtras_t422928499, ___controladorCocheGO_7)); }
	inline GameObject_t1756533147 * get_controladorCocheGO_7() const { return ___controladorCocheGO_7; }
	inline GameObject_t1756533147 ** get_address_of_controladorCocheGO_7() { return &___controladorCocheGO_7; }
	inline void set_controladorCocheGO_7(GameObject_t1756533147 * value)
	{
		___controladorCocheGO_7 = value;
		Il2CppCodeGenWriteBarrier(&___controladorCocheGO_7, value);
	}

	inline static int32_t get_offset_of_cocheGO_8() { return static_cast<int32_t>(offsetof(CuentaAtras_t422928499, ___cocheGO_8)); }
	inline GameObject_t1756533147 * get_cocheGO_8() const { return ___cocheGO_8; }
	inline GameObject_t1756533147 ** get_address_of_cocheGO_8() { return &___cocheGO_8; }
	inline void set_cocheGO_8(GameObject_t1756533147 * value)
	{
		___cocheGO_8 = value;
		Il2CppCodeGenWriteBarrier(&___cocheGO_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
