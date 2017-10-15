#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct MethodInfo_t;
struct t1847988475;
struct t3479607665;

#include "t1739457092.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t815874195  : public t1739457092
{
public:
	Il2CppObject * f7;
	bool f8;
	t3479607665 * f9;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t815874195, f7)); }
	inline Il2CppObject * fg7() const { return f7; }
	inline Il2CppObject ** fag7() { return &f7; }
	inline void fs7(Il2CppObject * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t815874195, f8)); }
	inline bool fg8() const { return f8; }
	inline bool* fag8() { return &f8; }
	inline void fs8(bool value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t815874195, f9)); }
	inline t3479607665 * fg9() const { return f9; }
	inline t3479607665 ** fag9() { return &f9; }
	inline void fs9(t3479607665 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

struct t815874195_SFs
{
public:
	MethodInfo_t * f5;
	MethodInfo_t * f6;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t815874195_SFs, f5)); }
	inline MethodInfo_t * fg5() const { return f5; }
	inline MethodInfo_t ** fag5() { return &f5; }
	inline void fs5(MethodInfo_t * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t815874195_SFs, f6)); }
	inline MethodInfo_t * fg6() const { return f6; }
	inline MethodInfo_t ** fag6() { return &f6; }
	inline void fs6(MethodInfo_t * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
