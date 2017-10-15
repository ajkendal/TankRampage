#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3545875401;
struct t3575456220;

#include "Il2CppObject.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t859974202  : public Il2CppObject
{
public:
	IntPtr_t f0;
	t3545875401 * f1;
	t3575456220 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t859974202, f0)); }
	inline IntPtr_t fg0() const { return f0; }
	inline IntPtr_t* fag0() { return &f0; }
	inline void fs0(IntPtr_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t859974202, f1)); }
	inline t3545875401 * fg1() const { return f1; }
	inline t3545875401 ** fag1() { return &f1; }
	inline void fs1(t3545875401 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t859974202, f2)); }
	inline t3575456220 * fg2() const { return f2; }
	inline t3575456220 ** fag2() { return &f2; }
	inline void fs2(t3575456220 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
