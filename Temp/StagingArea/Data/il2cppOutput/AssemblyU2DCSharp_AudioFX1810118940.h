#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioFX
struct  AudioFX_t1810118940  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip[] AudioFX::fxs
	AudioClipU5BU5D_t2203355011* ___fxs_2;
	// UnityEngine.AudioSource AudioFX::audioS
	AudioSource_t1135106623 * ___audioS_3;

public:
	inline static int32_t get_offset_of_fxs_2() { return static_cast<int32_t>(offsetof(AudioFX_t1810118940, ___fxs_2)); }
	inline AudioClipU5BU5D_t2203355011* get_fxs_2() const { return ___fxs_2; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_fxs_2() { return &___fxs_2; }
	inline void set_fxs_2(AudioClipU5BU5D_t2203355011* value)
	{
		___fxs_2 = value;
		Il2CppCodeGenWriteBarrier(&___fxs_2, value);
	}

	inline static int32_t get_offset_of_audioS_3() { return static_cast<int32_t>(offsetof(AudioFX_t1810118940, ___audioS_3)); }
	inline AudioSource_t1135106623 * get_audioS_3() const { return ___audioS_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioS_3() { return &___audioS_3; }
	inline void set_audioS_3(AudioSource_t1135106623 * value)
	{
		___audioS_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioS_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
