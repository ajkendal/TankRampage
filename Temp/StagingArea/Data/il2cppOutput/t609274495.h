#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1468494371;
struct t1312997718;
struct Il2CppObject;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t609274495  : public Il2CppObject
{
public:
	t1468494371 * f0;
	t1468494371 * f1;
	t1468494371 * f2;
	t1468494371 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t609274495, f0)); }
	inline t1468494371 * fg0() const { return f0; }
	inline t1468494371 ** fag0() { return &f0; }
	inline void fs0(t1468494371 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t609274495, f1)); }
	inline t1468494371 * fg1() const { return f1; }
	inline t1468494371 ** fag1() { return &f1; }
	inline void fs1(t1468494371 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t609274495, f2)); }
	inline t1468494371 * fg2() const { return f2; }
	inline t1468494371 ** fag2() { return &f2; }
	inline void fs2(t1468494371 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t609274495, f3)); }
	inline t1468494371 * fg3() const { return f3; }
	inline t1468494371 ** fag3() { return &f3; }
	inline void fs3(t1468494371 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t609274495_SFs
{
public:
	t1312997718 * f4;
	Il2CppObject * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t609274495_SFs, f4)); }
	inline t1312997718 * fg4() const { return f4; }
	inline t1312997718 ** fag4() { return &f4; }
	inline void fs4(t1312997718 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t609274495_SFs, f5)); }
	inline Il2CppObject * fg5() const { return f5; }
	inline Il2CppObject ** fag5() { return &f5; }
	inline void fs5(Il2CppObject * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
