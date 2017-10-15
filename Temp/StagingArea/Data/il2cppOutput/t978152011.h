#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4028081426.h"
#include "t465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t978152011 
{
public:
	t465617798  f0;
	float f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t978152011, f0)); }
	inline t465617798  fg0() const { return f0; }
	inline t465617798 * fag0() { return &f0; }
	inline void fs0(t465617798  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t978152011, f1)); }
	inline float fg1() const { return f1; }
	inline float* fag1() { return &f1; }
	inline void fs1(float value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.UICharInfo
struct t978152011_marshaled
{
	t465617798_marshaled f0;
	float f1;
};
