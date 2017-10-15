#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t822669679;
struct t1711298336;

#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1083667799 
{
public:
	t822669679 * f0;
	int32_t f1;
	int32_t f2;
	t1711298336 * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1083667799, f0)); }
	inline t822669679 * fg0() const { return f0; }
	inline t822669679 ** fag0() { return &f0; }
	inline void fs0(t822669679 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1083667799, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1083667799, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1083667799, f3)); }
	inline t1711298336 * fg3() const { return f3; }
	inline t1711298336 ** fag3() { return &f3; }
	inline void fs3(t1711298336 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
