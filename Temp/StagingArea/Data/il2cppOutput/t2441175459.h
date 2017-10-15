#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t2821278614;
struct t1429855556;
struct t2731230151;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2441175459  : public Il2CppObject
{
public:
	String_t* f0;
	t2821278614 * f1;
	t1429855556 * f2;
	t2731230151 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2441175459, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2441175459, f1)); }
	inline t2821278614 * fg1() const { return f1; }
	inline t2821278614 ** fag1() { return &f1; }
	inline void fs1(t2821278614 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2441175459, f2)); }
	inline t1429855556 * fg2() const { return f2; }
	inline t1429855556 ** fag2() { return &f2; }
	inline void fs2(t1429855556 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2441175459, f3)); }
	inline t2731230151 * fg3() const { return f3; }
	inline t2731230151 ** fag3() { return &f3; }
	inline void fs3(t2731230151 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
