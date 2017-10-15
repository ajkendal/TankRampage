#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2092997090;
struct t1982680307;
struct t1592286161;

#include "Il2CppObject.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1982680307  : public Il2CppObject
{
public:
	IntPtr_t f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1982680307, f0)); }
	inline IntPtr_t fg0() const { return f0; }
	inline IntPtr_t* fag0() { return &f0; }
	inline void fs0(IntPtr_t value)
	{
		f0 = value;
	}
};

struct t1982680307_SFs
{
public:
	t2092997090* f1;
	t1982680307 * f2;
	t1592286161 * f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1982680307_SFs, f1)); }
	inline t2092997090* fg1() const { return f1; }
	inline t2092997090** fag1() { return &f1; }
	inline void fs1(t2092997090* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1982680307_SFs, f2)); }
	inline t1982680307 * fg2() const { return f2; }
	inline t1982680307 ** fag2() { return &f2; }
	inline void fs2(t1982680307 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1982680307_SFs, f3)); }
	inline t1592286161 * fg3() const { return f3; }
	inline t1592286161 ** fag3() { return &f3; }
	inline void fs3(t1592286161 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
