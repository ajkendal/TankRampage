#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1525278010;

#include "Il2CppObject.h"
#include "t3611510553.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3815611317  : public Il2CppObject
{
public:
	int32_t f0;
	int32_t f1;
	t3611510553  f2;
	t1525278010 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3815611317, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3815611317, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3815611317, f2)); }
	inline t3611510553  fg2() const { return f2; }
	inline t3611510553 * fag2() { return &f2; }
	inline void fs2(t3611510553  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3815611317, f3)); }
	inline t1525278010 * fg3() const { return f3; }
	inline t1525278010 ** fag3() { return &f3; }
	inline void fs3(t1525278010 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
