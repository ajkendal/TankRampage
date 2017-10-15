#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct MemberInfo_t;

#include "t4028081426.h"
#include "t4043223540.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3611510553 
{
public:
	t4043223540  f0;
	MemberInfo_t * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3611510553, f0)); }
	inline t4043223540  fg0() const { return f0; }
	inline t4043223540 * fag0() { return &f0; }
	inline void fs0(t4043223540  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3611510553, f1)); }
	inline MemberInfo_t * fg1() const { return f1; }
	inline MemberInfo_t ** fag1() { return &f1; }
	inline void fs1(MemberInfo_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
