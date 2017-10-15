#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2631107245;
struct t1047566117;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2631107245  : public Il2CppObject
{
public:
	t1047566117 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2631107245, f1)); }
	inline t1047566117 * fg1() const { return f1; }
	inline t1047566117 ** fag1() { return &f1; }
	inline void fs1(t1047566117 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

struct t2631107245_SFs
{
public:
	t2631107245 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2631107245_SFs, f0)); }
	inline t2631107245 * fg0() const { return f0; }
	inline t2631107245 ** fag0() { return &f0; }
	inline void fs0(t2631107245 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
