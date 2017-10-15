#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t955467038;
struct t2768948945;
struct t2535388339;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t178237055  : public Il2CppObject
{
public:
	t2768948945 * f1;
	t2535388339 * f2;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t178237055, f1)); }
	inline t2768948945 * fg1() const { return f1; }
	inline t2768948945 ** fag1() { return &f1; }
	inline void fs1(t2768948945 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t178237055, f2)); }
	inline t2535388339 * fg2() const { return f2; }
	inline t2535388339 ** fag2() { return &f2; }
	inline void fs2(t2535388339 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t178237055_SFs
{
public:
	t955467038 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t178237055_SFs, f0)); }
	inline t955467038 * fg0() const { return f0; }
	inline t955467038 ** fag0() { return &f0; }
	inline void fs0(t955467038 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
