#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2560754878;
struct t3032567637;

#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2837263119 
{
public:
	t2560754878 * f0;
	t3032567637 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2837263119, f0)); }
	inline t2560754878 * fg0() const { return f0; }
	inline t2560754878 ** fag0() { return &f0; }
	inline void fs0(t2560754878 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2837263119, f1)); }
	inline t3032567637 * fg1() const { return f1; }
	inline t3032567637 ** fag1() { return &f1; }
	inline void fs1(t3032567637 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
