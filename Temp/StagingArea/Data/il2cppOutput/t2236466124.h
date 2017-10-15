#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;
struct String_t;
struct t3766580690;
struct t860478249;

#include "FieldInfo_t.h"
#include "t232801719.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2236466124  : public FieldInfo_t
{
public:
	int32_t f0;
	Type_t * f1;
	String_t* f2;
	t3766580690 * f3;
	t860478249 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2236466124, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2236466124, f1)); }
	inline Type_t * fg1() const { return f1; }
	inline Type_t ** fag1() { return &f1; }
	inline void fs1(Type_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2236466124, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2236466124, f3)); }
	inline t3766580690 * fg3() const { return f3; }
	inline t3766580690 ** fag3() { return &f3; }
	inline void fs3(t3766580690 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2236466124, f4)); }
	inline t860478249 * fg4() const { return f4; }
	inline t860478249 ** fag4() { return &f4; }
	inline void fs4(t860478249 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
