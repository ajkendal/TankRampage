#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct Type_t;
struct Il2CppObject;

#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3032987079 
{
public:
	String_t* f0;
	Type_t * f1;
	Il2CppObject * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3032987079, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3032987079, f1)); }
	inline Type_t * fg1() const { return f1; }
	inline Type_t ** fag1() { return &f1; }
	inline void fs1(Type_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3032987079, f2)); }
	inline Il2CppObject * fg2() const { return f2; }
	inline Il2CppObject ** fag2() { return &f2; }
	inline void fs2(Il2CppObject * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
