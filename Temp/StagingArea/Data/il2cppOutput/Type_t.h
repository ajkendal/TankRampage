#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2442356668;
struct t1408901124;
struct Il2CppObject;

#include "MemberInfo_t.h"
#include "t3354691680.h"
#include "t2078935215.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  Type_t  : public MemberInfo_t
{
public:
	t2078935215  f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(Type_t, f1)); }
	inline t2078935215  fg1() const { return f1; }
	inline t2078935215 * fag1() { return &f1; }
	inline void fs1(t2078935215  value)
	{
		f1 = value;
	}
};

struct Type_t_SFs
{
public:
	uint16_t f2;
	t2442356668* f3;
	t1408901124 * f4;
	t1408901124 * f5;
	t1408901124 * f6;
	Il2CppObject * f7;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(Type_t_SFs, f2)); }
	inline uint16_t fg2() const { return f2; }
	inline uint16_t* fag2() { return &f2; }
	inline void fs2(uint16_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(Type_t_SFs, f3)); }
	inline t2442356668* fg3() const { return f3; }
	inline t2442356668** fag3() { return &f3; }
	inline void fs3(t2442356668* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(Type_t_SFs, f4)); }
	inline t1408901124 * fg4() const { return f4; }
	inline t1408901124 ** fag4() { return &f4; }
	inline void fs4(t1408901124 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(Type_t_SFs, f5)); }
	inline t1408901124 * fg5() const { return f5; }
	inline t1408901124 ** fag5() { return &f5; }
	inline void fs5(t1408901124 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(Type_t_SFs, f6)); }
	inline t1408901124 * fg6() const { return f6; }
	inline t1408901124 ** fag6() { return &f6; }
	inline void fs6(t1408901124 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(Type_t_SFs, f7)); }
	inline Il2CppObject * fg7() const { return f7; }
	inline Il2CppObject ** fag7() { return &f7; }
	inline void fs7(Il2CppObject * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
