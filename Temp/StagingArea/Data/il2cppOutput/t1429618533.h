#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1153580258;
struct t999243462;

#include "t2003179150.h"
#include "t2175215420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1429618533  : public t2003179150
{
public:
	bool f1;
	bool f2;
	t1153580258 * f3;
	t1153580258 * f4;
	t999243462 * f5;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1429618533, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1429618533, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1429618533, f3)); }
	inline t1153580258 * fg3() const { return f3; }
	inline t1153580258 ** fag3() { return &f3; }
	inline void fs3(t1153580258 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1429618533, f4)); }
	inline t1153580258 * fg4() const { return f4; }
	inline t1153580258 ** fag4() { return &f4; }
	inline void fs4(t1153580258 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1429618533, f5)); }
	inline t999243462 * fg5() const { return f5; }
	inline t999243462 ** fag5() { return &f5; }
	inline void fs5(t999243462 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

struct t1429618533_SFs
{
public:
	t2175215420  f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1429618533_SFs, f0)); }
	inline t2175215420  fg0() const { return f0; }
	inline t2175215420 * fag0() { return &f0; }
	inline void fs0(t2175215420  value)
	{
		f0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
