#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1744924240;
struct t41750736;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3736643015  : public Il2CppObject
{
public:
	t1744924240 * f0;
	t41750736 * f1;
	t41750736 * f2;
	int32_t f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3736643015, f0)); }
	inline t1744924240 * fg0() const { return f0; }
	inline t1744924240 ** fag0() { return &f0; }
	inline void fs0(t1744924240 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3736643015, f1)); }
	inline t41750736 * fg1() const { return f1; }
	inline t41750736 ** fag1() { return &f1; }
	inline void fs1(t41750736 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3736643015, f2)); }
	inline t41750736 * fg2() const { return f2; }
	inline t41750736 ** fag2() { return &f2; }
	inline void fs2(t41750736 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3736643015, f3)); }
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
