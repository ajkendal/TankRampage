#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1071364940;
struct t2798266161;
struct t138408958;

#include "Il2CppObject.h"
#include "t465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2353869345  : public Il2CppObject
{
public:
	t465617797  f0;
	t465617797  f1;
	t1071364940 * f2;
	t2798266161 * f3;
	t138408958* f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2353869345, f0)); }
	inline t465617797  fg0() const { return f0; }
	inline t465617797 * fag0() { return &f0; }
	inline void fs0(t465617797  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2353869345, f1)); }
	inline t465617797  fg1() const { return f1; }
	inline t465617797 * fag1() { return &f1; }
	inline void fs1(t465617797  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2353869345, f2)); }
	inline t1071364940 * fg2() const { return f2; }
	inline t1071364940 ** fag2() { return &f2; }
	inline void fs2(t1071364940 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2353869345, f3)); }
	inline t2798266161 * fg3() const { return f3; }
	inline t2798266161 ** fag3() { return &f3; }
	inline void fs3(t2798266161 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2353869345, f4)); }
	inline t138408958* fg4() const { return f4; }
	inline t138408958** fag4() { return &f4; }
	inline void fs4(t138408958* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
