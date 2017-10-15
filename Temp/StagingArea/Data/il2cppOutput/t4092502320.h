#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct t889871978;
struct t1145979430;
struct t955467038;
struct t3378505055;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4092502320  : public Il2CppObject
{
public:
	Il2CppObject * f0;
	t889871978 * f1;
	Il2CppObject * f2;
	t1145979430 * f3;
	t955467038 * f4;
	t3378505055 * f5;
	bool f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4092502320, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4092502320, f1)); }
	inline t889871978 * fg1() const { return f1; }
	inline t889871978 ** fag1() { return &f1; }
	inline void fs1(t889871978 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4092502320, f2)); }
	inline Il2CppObject * fg2() const { return f2; }
	inline Il2CppObject ** fag2() { return &f2; }
	inline void fs2(Il2CppObject * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4092502320, f3)); }
	inline t1145979430 * fg3() const { return f3; }
	inline t1145979430 ** fag3() { return &f3; }
	inline void fs3(t1145979430 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4092502320, f4)); }
	inline t955467038 * fg4() const { return f4; }
	inline t955467038 ** fag4() { return &f4; }
	inline void fs4(t955467038 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t4092502320, f5)); }
	inline t3378505055 * fg5() const { return f5; }
	inline t3378505055 ** fag5() { return &f5; }
	inline void fs5(t3378505055 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t4092502320, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
