#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3254160853;
struct t26215507;
struct t428410856;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3254160853  : public Il2CppObject
{
public:
	bool f1;
	bool f2;
	t26215507 * f3;
	t26215507 * f4;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3254160853, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3254160853, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3254160853, f3)); }
	inline t26215507 * fg3() const { return f3; }
	inline t26215507 ** fag3() { return &f3; }
	inline void fs3(t26215507 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3254160853, f4)); }
	inline t26215507 * fg4() const { return f4; }
	inline t26215507 ** fag4() { return &f4; }
	inline void fs4(t26215507 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

struct t3254160853_SFs
{
public:
	t3254160853 * f0;
	t428410856 * f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3254160853_SFs, f0)); }
	inline t3254160853 * fg0() const { return f0; }
	inline t3254160853 ** fag0() { return &f0; }
	inline void fs0(t3254160853 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3254160853_SFs, f5)); }
	inline t428410856 * fg5() const { return f5; }
	inline t428410856 ** fag5() { return &f5; }
	inline void fs5(t428410856 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
