#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2262920707;
struct t559747203;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4254639482  : public Il2CppObject
{
public:
	t2262920707 * f0;
	t559747203 * f1;
	t559747203 * f2;
	int32_t f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4254639482, f0)); }
	inline t2262920707 * fg0() const { return f0; }
	inline t2262920707 ** fag0() { return &f0; }
	inline void fs0(t2262920707 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4254639482, f1)); }
	inline t559747203 * fg1() const { return f1; }
	inline t559747203 ** fag1() { return &f1; }
	inline void fs1(t559747203 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4254639482, f2)); }
	inline t559747203 * fg2() const { return f2; }
	inline t559747203 ** fag2() { return &f2; }
	inline void fs2(t559747203 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4254639482, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
