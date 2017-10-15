#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2178331696;
struct t475158192;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4170050471  : public Il2CppObject
{
public:
	t2178331696 * f0;
	t475158192 * f1;
	t475158192 * f2;
	int32_t f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4170050471, f0)); }
	inline t2178331696 * fg0() const { return f0; }
	inline t2178331696 ** fag0() { return &f0; }
	inline void fs0(t2178331696 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4170050471, f1)); }
	inline t475158192 * fg1() const { return f1; }
	inline t475158192 ** fag1() { return &f1; }
	inline void fs1(t475158192 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4170050471, f2)); }
	inline t475158192 * fg2() const { return f2; }
	inline t475158192 ** fag2() { return &f2; }
	inline void fs2(t475158192 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4170050471, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
