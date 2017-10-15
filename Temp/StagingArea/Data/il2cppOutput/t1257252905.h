#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1076071497;
struct t1257252905;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1257252905  : public Il2CppObject
{
public:
	t1076071497* f0;
	int32_t f1;
	int64_t f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1257252905, f0)); }
	inline t1076071497* fg0() const { return f0; }
	inline t1076071497** fag0() { return &f0; }
	inline void fs0(t1076071497* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1257252905, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1257252905, f2)); }
	inline int64_t fg2() const { return f2; }
	inline int64_t* fag2() { return &f2; }
	inline void fs2(int64_t value)
	{
		f2 = value;
	}
};

struct t1257252905_SFs
{
public:
	t1257252905 * f3;
	t1257252905 * f4;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1257252905_SFs, f3)); }
	inline t1257252905 * fg3() const { return f3; }
	inline t1257252905 ** fag3() { return &f3; }
	inline void fs3(t1257252905 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1257252905_SFs, f4)); }
	inline t1257252905 * fg4() const { return f4; }
	inline t1257252905 ** fag4() { return &f4; }
	inline void fs4(t1257252905 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
