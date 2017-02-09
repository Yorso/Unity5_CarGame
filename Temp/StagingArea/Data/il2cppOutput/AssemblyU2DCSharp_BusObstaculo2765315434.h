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
// Cronometro
struct Cronometro_t1382614310;
// AudioFX
struct AudioFX_t1810118940;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BusObstaculo
struct  BusObstaculo_t2765315434  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BusObstaculo::cronometroGO
	GameObject_t1756533147 * ___cronometroGO_2;
	// Cronometro BusObstaculo::cronometroScript
	Cronometro_t1382614310 * ___cronometroScript_3;
	// UnityEngine.GameObject BusObstaculo::audioFXGO
	GameObject_t1756533147 * ___audioFXGO_4;
	// AudioFX BusObstaculo::audioFXScript
	AudioFX_t1810118940 * ___audioFXScript_5;

public:
	inline static int32_t get_offset_of_cronometroGO_2() { return static_cast<int32_t>(offsetof(BusObstaculo_t2765315434, ___cronometroGO_2)); }
	inline GameObject_t1756533147 * get_cronometroGO_2() const { return ___cronometroGO_2; }
	inline GameObject_t1756533147 ** get_address_of_cronometroGO_2() { return &___cronometroGO_2; }
	inline void set_cronometroGO_2(GameObject_t1756533147 * value)
	{
		___cronometroGO_2 = value;
		Il2CppCodeGenWriteBarrier(&___cronometroGO_2, value);
	}

	inline static int32_t get_offset_of_cronometroScript_3() { return static_cast<int32_t>(offsetof(BusObstaculo_t2765315434, ___cronometroScript_3)); }
	inline Cronometro_t1382614310 * get_cronometroScript_3() const { return ___cronometroScript_3; }
	inline Cronometro_t1382614310 ** get_address_of_cronometroScript_3() { return &___cronometroScript_3; }
	inline void set_cronometroScript_3(Cronometro_t1382614310 * value)
	{
		___cronometroScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___cronometroScript_3, value);
	}

	inline static int32_t get_offset_of_audioFXGO_4() { return static_cast<int32_t>(offsetof(BusObstaculo_t2765315434, ___audioFXGO_4)); }
	inline GameObject_t1756533147 * get_audioFXGO_4() const { return ___audioFXGO_4; }
	inline GameObject_t1756533147 ** get_address_of_audioFXGO_4() { return &___audioFXGO_4; }
	inline void set_audioFXGO_4(GameObject_t1756533147 * value)
	{
		___audioFXGO_4 = value;
		Il2CppCodeGenWriteBarrier(&___audioFXGO_4, value);
	}

	inline static int32_t get_offset_of_audioFXScript_5() { return static_cast<int32_t>(offsetof(BusObstaculo_t2765315434, ___audioFXScript_5)); }
	inline AudioFX_t1810118940 * get_audioFXScript_5() const { return ___audioFXScript_5; }
	inline AudioFX_t1810118940 ** get_address_of_audioFXScript_5() { return &___audioFXScript_5; }
	inline void set_audioFXScript_5(AudioFX_t1810118940 * value)
	{
		___audioFXScript_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioFXScript_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
