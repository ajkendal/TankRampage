#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2983510512;
struct t2798266161;

#include "Il2CppObject.h"
#include "t465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t511622406  : public Il2CppObject
{
public:
	t2983510512 * f0;
	t2798266161 * f1;
	t465617797  f2;
	t465617797  f3;
	t465617797  f4;
	float f5;
	int32_t f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t511622406, f0)); }
	inline t2983510512 * fg0() const { return f0; }
	inline t2983510512 ** fag0() { return &f0; }
	inline void fs0(t2983510512 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t511622406, f1)); }
	inline t2798266161 * fg1() const { return f1; }
	inline t2798266161 ** fag1() { return &f1; }
	inline void fs1(t2798266161 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t511622406, f2)); }
	inline t465617797  fg2() const { return f2; }
	inline t465617797 * fag2() { return &f2; }
	inline void fs2(t465617797  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t511622406, f3)); }
	inline t465617797  fg3() const { return f3; }
	inline t465617797 * fag3() { return &f3; }
	inline void fs3(t465617797  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t511622406, f4)); }
	inline t465617797  fg4() const { return f4; }
	inline t465617797 * fag4() { return &f4; }
	inline void fs4(t465617797  value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t511622406, f5)); }
	inline float fg5() const { return f5; }
	inline float* fag5() { return &f5; }
	inline void fs5(float value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t511622406, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
