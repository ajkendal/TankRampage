﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2235910900;

#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t873863414 
{
public:
	t2235910900* f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t873863414, f0)); }
	inline t2235910900* fg0() const { return f0; }
	inline t2235910900** fag0() { return &f0; }
	inline void fs0(t2235910900* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Reflection.ParameterModifier
struct t873863414_marshaled
{
	int32_t* f0;
};
