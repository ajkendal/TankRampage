#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;
struct Il2CppObject;
struct MemberInfo_t;
struct String_t;
struct t860478249;

#include "Il2CppObject.h"
#include "t2405942582.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1994030457  : public Il2CppObject
{
public:
	Type_t * f0;
	Il2CppObject * f1;
	MemberInfo_t * f2;
	String_t* f3;
	int32_t f4;
	int32_t f5;
	t860478249 * f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1994030457, f0)); }
	inline Type_t * fg0() const { return f0; }
	inline Type_t ** fag0() { return &f0; }
	inline void fs0(Type_t * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1994030457, f1)); }
	inline Il2CppObject * fg1() const { return f1; }
	inline Il2CppObject ** fag1() { return &f1; }
	inline void fs1(Il2CppObject * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1994030457, f2)); }
	inline MemberInfo_t * fg2() const { return f2; }
	inline MemberInfo_t ** fag2() { return &f2; }
	inline void fs2(MemberInfo_t * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1994030457, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1994030457, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1994030457, f5)); }
	inline int32_t fg5() const { return f5; }
	inline int32_t* fag5() { return &f5; }
	inline void fs5(int32_t value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1994030457, f6)); }
	inline t860478249 * fg6() const { return f6; }
	inline t860478249 ** fag6() { return &f6; }
	inline void fs6(t860478249 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
