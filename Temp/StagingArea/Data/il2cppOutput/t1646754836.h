#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;
struct t2167952316;
struct t3567443901;
struct t3185359341;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1646754836  : public Il2CppObject
{
public:
	Il2CppObject * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1646754836, f3)); }
	inline Il2CppObject * fg3() const { return f3; }
	inline Il2CppObject ** fag3() { return &f3; }
	inline void fs3(Il2CppObject * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t1646754836_SFs
{
public:
	Type_t * f0;
	t2167952316 * f1;
	t3567443901 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1646754836_SFs, f0)); }
	inline Type_t * fg0() const { return f0; }
	inline Type_t ** fag0() { return &f0; }
	inline void fs0(Type_t * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1646754836_SFs, f1)); }
	inline t2167952316 * fg1() const { return f1; }
	inline t2167952316 ** fag1() { return &f1; }
	inline void fs1(t2167952316 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1646754836_SFs, f2)); }
	inline t3567443901 * fg2() const { return f2; }
	inline t3567443901 ** fag2() { return &f2; }
	inline void fs2(t3567443901 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
