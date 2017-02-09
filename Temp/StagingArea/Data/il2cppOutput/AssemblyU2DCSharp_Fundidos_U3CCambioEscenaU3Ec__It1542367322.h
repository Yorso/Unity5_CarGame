#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fundidos/<CambioEscena>c__Iterator0
struct  U3CCambioEscenaU3Ec__Iterator0_t1542367322  : public Il2CppObject
{
public:
	// System.String Fundidos/<CambioEscena>c__Iterator0::escena
	String_t* ___escena_0;
	// System.Object Fundidos/<CambioEscena>c__Iterator0::$current
	Il2CppObject * ___U24current_1;
	// System.Boolean Fundidos/<CambioEscena>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 Fundidos/<CambioEscena>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_escena_0() { return static_cast<int32_t>(offsetof(U3CCambioEscenaU3Ec__Iterator0_t1542367322, ___escena_0)); }
	inline String_t* get_escena_0() const { return ___escena_0; }
	inline String_t** get_address_of_escena_0() { return &___escena_0; }
	inline void set_escena_0(String_t* value)
	{
		___escena_0 = value;
		Il2CppCodeGenWriteBarrier(&___escena_0, value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CCambioEscenaU3Ec__Iterator0_t1542367322, ___U24current_1)); }
	inline Il2CppObject * get_U24current_1() const { return ___U24current_1; }
	inline Il2CppObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(Il2CppObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_1, value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CCambioEscenaU3Ec__Iterator0_t1542367322, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CCambioEscenaU3Ec__Iterator0_t1542367322, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
