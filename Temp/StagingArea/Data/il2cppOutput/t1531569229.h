#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2777156203;
struct t3752677216;
struct t4260152181;

#include "t2957792450.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1531569229  : public t2957792450
{
public:
	t2777156203 * f0;
	t3752677216 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1531569229, f0)); }
	inline t2777156203 * fg0() const { return f0; }
	inline t2777156203 ** fag0() { return &f0; }
	inline void fs0(t2777156203 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1531569229, f1)); }
	inline t3752677216 * fg1() const { return f1; }
	inline t3752677216 ** fag1() { return &f1; }
	inline void fs1(t3752677216 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

struct t1531569229_SFs
{
public:
	t4260152181 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1531569229_SFs, f2)); }
	inline t4260152181 * fg2() const { return f2; }
	inline t4260152181 ** fag2() { return &f2; }
	inline void fs2(t4260152181 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
