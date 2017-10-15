#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1201586142;
struct t123803762;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1524601930  : public Il2CppObject
{
public:
	t1201586142 * f0;
	t123803762 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1524601930, f0)); }
	inline t1201586142 * fg0() const { return f0; }
	inline t1201586142 ** fag0() { return &f0; }
	inline void fs0(t1201586142 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1524601930, f1)); }
	inline t123803762 * fg1() const { return f1; }
	inline t123803762 ** fag1() { return &f1; }
	inline void fs1(t123803762 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
