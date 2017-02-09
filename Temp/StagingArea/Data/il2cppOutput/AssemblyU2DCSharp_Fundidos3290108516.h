#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fundidos
struct  Fundidos_t3290108516  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image Fundidos::fundido
	Image_t2042527209 * ___fundido_2;
	// System.String[] Fundidos::escenas
	StringU5BU5D_t1642385972* ___escenas_3;

public:
	inline static int32_t get_offset_of_fundido_2() { return static_cast<int32_t>(offsetof(Fundidos_t3290108516, ___fundido_2)); }
	inline Image_t2042527209 * get_fundido_2() const { return ___fundido_2; }
	inline Image_t2042527209 ** get_address_of_fundido_2() { return &___fundido_2; }
	inline void set_fundido_2(Image_t2042527209 * value)
	{
		___fundido_2 = value;
		Il2CppCodeGenWriteBarrier(&___fundido_2, value);
	}

	inline static int32_t get_offset_of_escenas_3() { return static_cast<int32_t>(offsetof(Fundidos_t3290108516, ___escenas_3)); }
	inline StringU5BU5D_t1642385972* get_escenas_3() const { return ___escenas_3; }
	inline StringU5BU5D_t1642385972** get_address_of_escenas_3() { return &___escenas_3; }
	inline void set_escenas_3(StringU5BU5D_t1642385972* value)
	{
		___escenas_3 = value;
		Il2CppCodeGenWriteBarrier(&___escenas_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
