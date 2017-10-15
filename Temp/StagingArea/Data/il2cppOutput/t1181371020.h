#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Il2CppObject.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1181371020  : public Il2CppObject
{
public:
	int32_t f0;
	IntPtr_t f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1181371020, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1181371020, f1)); }
	inline IntPtr_t fg1() const { return f1; }
	inline IntPtr_t* fag1() { return &f1; }
	inline void fs1(IntPtr_t value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Object
struct t1181371020_marshaled
{
	int32_t f0;
	intptr_t f1;
};
