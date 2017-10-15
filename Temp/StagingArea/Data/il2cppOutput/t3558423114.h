#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4028081426.h"
#include "t2078935215.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3558423114 
{
public:
	t2078935215  f0;
	IntPtr_t f1;
	IntPtr_t f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3558423114, f0)); }
	inline t2078935215  fg0() const { return f0; }
	inline t2078935215 * fag0() { return &f0; }
	inline void fs0(t2078935215  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3558423114, f1)); }
	inline IntPtr_t fg1() const { return f1; }
	inline IntPtr_t* fag1() { return &f1; }
	inline void fs1(IntPtr_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3558423114, f2)); }
	inline IntPtr_t fg2() const { return f2; }
	inline IntPtr_t* fag2() { return &f2; }
	inline void fs2(IntPtr_t value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.TypedReference
struct t3558423114_marshaled
{
	t2078935215_marshaled f0;
	intptr_t f1;
	intptr_t f2;
};
