#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1126087112;
struct t1726162129;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4027413000  : public Il2CppObject
{
public:

public:
};

struct t4027413000_SFs
{
public:
	t1126087112 * f0;
	t1726162129 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4027413000_SFs, f0)); }
	inline t1126087112 * fg0() const { return f0; }
	inline t1126087112 ** fag0() { return &f0; }
	inline void fs0(t1126087112 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4027413000_SFs, f1)); }
	inline t1726162129 * fg1() const { return f1; }
	inline t1726162129 ** fag1() { return &f1; }
	inline void fs1(t1726162129 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
