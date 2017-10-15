#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4260152181;

#include "t4028081426.h"
#include "t2817472493.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1557480906 
{
public:
	t4260152181 * f0;
	int32_t f1;
	int32_t f2;
	t2817472493  f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1557480906, f0)); }
	inline t4260152181 * fg0() const { return f0; }
	inline t4260152181 ** fag0() { return &f0; }
	inline void fs0(t4260152181 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1557480906, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1557480906, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1557480906, f3)); }
	inline t2817472493  fg3() const { return f3; }
	inline t2817472493 * fag3() { return &f3; }
	inline void fs3(t2817472493  value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
