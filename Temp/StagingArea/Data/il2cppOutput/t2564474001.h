#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t346534971;

#include "t4028081426.h"
#include "t686167457.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2564474001 
{
public:
	int32_t f0;
	t346534971 * f1;
	t346534971 * f2;
	t346534971 * f3;
	t346534971 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2564474001, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2564474001, f1)); }
	inline t346534971 * fg1() const { return f1; }
	inline t346534971 ** fag1() { return &f1; }
	inline void fs1(t346534971 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2564474001, f2)); }
	inline t346534971 * fg2() const { return f2; }
	inline t346534971 ** fag2() { return &f2; }
	inline void fs2(t346534971 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2564474001, f3)); }
	inline t346534971 * fg3() const { return f3; }
	inline t346534971 ** fag3() { return &f3; }
	inline void fs3(t346534971 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2564474001, f4)); }
	inline t346534971 * fg4() const { return f4; }
	inline t346534971 ** fag4() { return &f4; }
	inline void fs4(t346534971 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
