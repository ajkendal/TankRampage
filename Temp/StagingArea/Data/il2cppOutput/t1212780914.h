#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3921196294;

#include "t774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1212780914  : public t774292115
{
public:
	t3921196294 * f2;
	t3921196294 * f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1212780914, f2)); }
	inline t3921196294 * fg2() const { return f2; }
	inline t3921196294 ** fag2() { return &f2; }
	inline void fs2(t3921196294 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1212780914, f3)); }
	inline t3921196294 * fg3() const { return f3; }
	inline t3921196294 ** fag3() { return &f3; }
	inline void fs3(t3921196294 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
