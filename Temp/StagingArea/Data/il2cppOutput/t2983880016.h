#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2722881896;

#include "t4028081426.h"
#include "t3611510553.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2983880016 
{
public:
	t2722881896 * f0;
	int32_t f1;
	int32_t f2;
	t3611510553  f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2983880016, f0)); }
	inline t2722881896 * fg0() const { return f0; }
	inline t2722881896 ** fag0() { return &f0; }
	inline void fs0(t2722881896 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2983880016, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2983880016, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2983880016, f3)); }
	inline t3611510553  fg3() const { return f3; }
	inline t3611510553 * fag3() { return &f3; }
	inline void fs3(t3611510553  value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
