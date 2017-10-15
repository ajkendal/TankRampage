#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2387210216;
struct t4235512629;
struct t1426139793;
struct t4260152181;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2758255917  : public Il2CppObject
{
public:
	t2387210216 * f0;
	t4235512629 * f1;
	t4235512629 * f2;
	t1426139793 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2758255917, f0)); }
	inline t2387210216 * fg0() const { return f0; }
	inline t2387210216 ** fag0() { return &f0; }
	inline void fs0(t2387210216 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2758255917, f1)); }
	inline t4235512629 * fg1() const { return f1; }
	inline t4235512629 ** fag1() { return &f1; }
	inline void fs1(t4235512629 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2758255917, f2)); }
	inline t4235512629 * fg2() const { return f2; }
	inline t4235512629 ** fag2() { return &f2; }
	inline void fs2(t4235512629 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2758255917, f3)); }
	inline t1426139793 * fg3() const { return f3; }
	inline t1426139793 ** fag3() { return &f3; }
	inline void fs3(t1426139793 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t2758255917_SFs
{
public:
	t4260152181 * f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2758255917_SFs, f4)); }
	inline t4260152181 * fg4() const { return f4; }
	inline t4260152181 ** fag4() { return &f4; }
	inline void fs4(t4260152181 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
