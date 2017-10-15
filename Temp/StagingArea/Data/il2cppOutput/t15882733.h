#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t445179443;

#include "t4028081426.h"
#include "t465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t15882733 
{
public:
	t465617798  f0;
	t465617798  f1;
	t445179443 * f2;
	t445179443 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t15882733, f0)); }
	inline t465617798  fg0() const { return f0; }
	inline t465617798 * fag0() { return &f0; }
	inline void fs0(t465617798  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t15882733, f1)); }
	inline t465617798  fg1() const { return f1; }
	inline t465617798 * fag1() { return &f1; }
	inline void fs1(t465617798  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t15882733, f2)); }
	inline t445179443 * fg2() const { return f2; }
	inline t445179443 ** fag2() { return &f2; }
	inline void fs2(t445179443 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t15882733, f3)); }
	inline t445179443 * fg3() const { return f3; }
	inline t445179443 ** fag3() { return &f3; }
	inline void fs3(t445179443 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
