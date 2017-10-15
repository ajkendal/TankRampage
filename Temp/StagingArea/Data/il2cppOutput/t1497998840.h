#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3302994562;
struct t1126774094;
struct t4221943136;
struct t2893864196;

#include "t191418348.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1497998840  : public t191418348
{
public:
	t3302994562 * f2;
	t1126774094 * f3;
	t4221943136 * f4;
	t2893864196 * f5;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1497998840, f2)); }
	inline t3302994562 * fg2() const { return f2; }
	inline t3302994562 ** fag2() { return &f2; }
	inline void fs2(t3302994562 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1497998840, f3)); }
	inline t1126774094 * fg3() const { return f3; }
	inline t1126774094 ** fag3() { return &f3; }
	inline void fs3(t1126774094 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1497998840, f4)); }
	inline t4221943136 * fg4() const { return f4; }
	inline t4221943136 ** fag4() { return &f4; }
	inline void fs4(t4221943136 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1497998840, f5)); }
	inline t2893864196 * fg5() const { return f5; }
	inline t2893864196 ** fag5() { return &f5; }
	inline void fs5(t2893864196 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
