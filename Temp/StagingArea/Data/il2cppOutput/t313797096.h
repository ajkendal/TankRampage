#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2176344227;

#include "t3870530982.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t313797096  : public t3870530982
{
public:
	t2176344227 * f2;
	bool f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t313797096, f2)); }
	inline t2176344227 * fg2() const { return f2; }
	inline t2176344227 ** fag2() { return &f2; }
	inline void fs2(t2176344227 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t313797096, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}
};

struct t313797096_SFs
{
public:
	IntPtr_t f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t313797096_SFs, f3)); }
	inline IntPtr_t fg3() const { return f3; }
	inline IntPtr_t* fag3() { return &f3; }
	inline void fs3(IntPtr_t value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
