#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1468494371;
struct t4260152181;

#include "t1746250421.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2788528917  : public t1746250421
{
public:
	t1468494371 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2788528917, f3)); }
	inline t1468494371 * fg3() const { return f3; }
	inline t1468494371 ** fag3() { return &f3; }
	inline void fs3(t1468494371 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t2788528917_SFs
{
public:
	t4260152181 * f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2788528917_SFs, f4)); }
	inline t4260152181 * fg4() const { return f4; }
	inline t4260152181 ** fag4() { return &f4; }
	inline void fs4(t4260152181 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
