#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct Type_t;

#include "Il2CppObject.h"
#include "t1038128100.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t860478249  : public Il2CppObject
{
public:
	int32_t f0;
	int32_t f1;
	int32_t f2;
	String_t* f3;
	String_t* f4;
	String_t* f5;
	Type_t * f6;
	int32_t f7;
	bool f8;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t860478249, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t860478249, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t860478249, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t860478249, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t860478249, f4)); }
	inline String_t* fg4() const { return f4; }
	inline String_t** fag4() { return &f4; }
	inline void fs4(String_t* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t860478249, f5)); }
	inline String_t* fg5() const { return f5; }
	inline String_t** fag5() { return &f5; }
	inline void fs5(String_t* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t860478249, f6)); }
	inline Type_t * fg6() const { return f6; }
	inline Type_t ** fag6() { return &f6; }
	inline void fs6(Type_t * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t860478249, f7)); }
	inline int32_t fg7() const { return f7; }
	inline int32_t* fag7() { return &f7; }
	inline void fs7(int32_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t860478249, f8)); }
	inline bool fg8() const { return f8; }
	inline bool* fag8() { return &f8; }
	inline void fs8(bool value)
	{
		f8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
