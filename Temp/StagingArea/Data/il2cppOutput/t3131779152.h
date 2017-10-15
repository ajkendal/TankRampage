#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t400430593;
struct t321260052;

#include "Il2CppObject.h"
#include "t2277473179.h"
#include "t973511362.h"
#include "t1834055012.h"
#include "t275241831.h"
#include "t2933746480.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3131779152  : public Il2CppObject
{
public:
	t400430593 * f0;
	t400430593 * f1;
	t321260052 * f2;
	int32_t f3;
	int32_t f4;
	t1834055012  f5;
	int32_t f6;
	t2933746480  f7;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3131779152, f0)); }
	inline t400430593 * fg0() const { return f0; }
	inline t400430593 ** fag0() { return &f0; }
	inline void fs0(t400430593 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3131779152, f1)); }
	inline t400430593 * fg1() const { return f1; }
	inline t400430593 ** fag1() { return &f1; }
	inline void fs1(t400430593 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3131779152, f2)); }
	inline t321260052 * fg2() const { return f2; }
	inline t321260052 ** fag2() { return &f2; }
	inline void fs2(t321260052 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3131779152, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3131779152, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3131779152, f5)); }
	inline t1834055012  fg5() const { return f5; }
	inline t1834055012 * fag5() { return &f5; }
	inline void fs5(t1834055012  value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3131779152, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3131779152, f7)); }
	inline t2933746480  fg7() const { return f7; }
	inline t2933746480 * fag7() { return &f7; }
	inline void fs7(t2933746480  value)
	{
		f7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
