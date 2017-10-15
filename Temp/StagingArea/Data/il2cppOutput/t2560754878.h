#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1807117605;
struct t2814392016;

#include "t1181371020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2560754878  : public t1181371020
{
public:
	t2814392016 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2560754878, f3)); }
	inline t2814392016 * fg3() const { return f3; }
	inline t2814392016 ** fag3() { return &f3; }
	inline void fs3(t2814392016 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t2560754878_SFs
{
public:
	t1807117605 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2560754878_SFs, f2)); }
	inline t1807117605 * fg2() const { return f2; }
	inline t1807117605 ** fag2() { return &f2; }
	inline void fs2(t1807117605 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
