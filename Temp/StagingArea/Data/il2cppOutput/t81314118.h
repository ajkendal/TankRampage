#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3826658378;
struct t3827703051;
struct t2052499272;

#include "t191418348.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t81314118  : public t191418348
{
public:
	bool f2;
	t3826658378 * f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t81314118, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t81314118, f3)); }
	inline t3826658378 * fg3() const { return f3; }
	inline t3826658378 ** fag3() { return &f3; }
	inline void fs3(t3826658378 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t81314118_SFs
{
public:
	t3827703051 * f4;
	t2052499272 * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t81314118_SFs, f4)); }
	inline t3827703051 * fg4() const { return f4; }
	inline t3827703051 ** fag4() { return &f4; }
	inline void fs4(t3827703051 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t81314118_SFs, f5)); }
	inline t2052499272 * fg5() const { return f5; }
	inline t2052499272 ** fag5() { return &f5; }
	inline void fs5(t2052499272 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
