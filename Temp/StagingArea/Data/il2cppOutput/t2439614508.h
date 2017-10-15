#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct t1312997718;
struct String_t;
struct t272817006;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2439614508  : public Il2CppObject
{
public:
	String_t* f2;
	int32_t f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2439614508, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2439614508, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

struct t2439614508_SFs
{
public:
	Il2CppObject * f0;
	t1312997718 * f1;
	t272817006 * f4;
	t272817006 * f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2439614508_SFs, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2439614508_SFs, f1)); }
	inline t1312997718 * fg1() const { return f1; }
	inline t1312997718 ** fag1() { return &f1; }
	inline void fs1(t1312997718 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2439614508_SFs, f4)); }
	inline t272817006 * fg4() const { return f4; }
	inline t272817006 ** fag4() { return &f4; }
	inline void fs4(t272817006 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2439614508_SFs, f5)); }
	inline t272817006 * fg5() const { return f5; }
	inline t272817006 ** fag5() { return &f5; }
	inline void fs5(t272817006 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
