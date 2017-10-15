#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t272817006;
struct t1421636219;
struct t909422662;
struct t2000248932;

#include "t2901181876.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2000248932  : public t2901181876
{
public:
	t272817006 * f6;
	Il2CppObject * f7;
	int32_t f8;
	t909422662 * f9;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2000248932, f6)); }
	inline t272817006 * fg6() const { return f6; }
	inline t272817006 ** fag6() { return &f6; }
	inline void fs6(t272817006 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2000248932, f7)); }
	inline Il2CppObject * fg7() const { return f7; }
	inline Il2CppObject ** fag7() { return &f7; }
	inline void fs7(Il2CppObject * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2000248932, f8)); }
	inline int32_t fg8() const { return f8; }
	inline int32_t* fag8() { return &f8; }
	inline void fs8(int32_t value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t2000248932, f9)); }
	inline t909422662 * fg9() const { return f9; }
	inline t909422662 ** fag9() { return &f9; }
	inline void fs9(t909422662 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

struct t2000248932_SFs
{
public:
	t2000248932 * f10;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t2000248932_SFs, f10)); }
	inline t2000248932 * fg10() const { return f10; }
	inline t2000248932 ** fag10() { return &f10; }
	inline void fs10(t2000248932 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
