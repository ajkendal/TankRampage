#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3315407976;

#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t735098419 
{
public:
	t3315407976* f0;
	int32_t f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t735098419, f0)); }
	inline t3315407976* fg0() const { return f0; }
	inline t3315407976** fag0() { return &f0; }
	inline void fs0(t3315407976* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t735098419, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Text.RegularExpressions.Interpreter/IntStack
struct t735098419_marshaled
{
	int32_t* f0;
	int32_t f1;
};
