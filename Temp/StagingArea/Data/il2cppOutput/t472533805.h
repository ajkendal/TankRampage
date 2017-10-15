#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t472533805;
struct t1524601930;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t472533805  : public Il2CppObject
{
public:
	t1524601930 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t472533805, f1)); }
	inline t1524601930 * fg1() const { return f1; }
	inline t1524601930 ** fag1() { return &f1; }
	inline void fs1(t1524601930 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

struct t472533805_SFs
{
public:
	t472533805 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t472533805_SFs, f0)); }
	inline t472533805 * fg0() const { return f0; }
	inline t472533805 ** fag0() { return &f0; }
	inline void fs0(t472533805 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
