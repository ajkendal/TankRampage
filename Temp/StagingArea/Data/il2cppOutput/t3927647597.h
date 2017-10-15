#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t270040588;
struct t2781450296;

#include "t1181371020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3927647597  : public t1181371020
{
public:
	t270040588 * f2;
	t2781450296 * f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3927647597, f2)); }
	inline t270040588 * fg2() const { return f2; }
	inline t270040588 ** fag2() { return &f2; }
	inline void fs2(t270040588 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3927647597, f3)); }
	inline t2781450296 * fg3() const { return f3; }
	inline t2781450296 ** fag3() { return &f3; }
	inline void fs3(t2781450296 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
