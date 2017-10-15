#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3835026402;
struct t3289915003;

#include "t3378505055.h"
#include "t1271981350.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1501188108  : public t3378505055
{
public:
	int32_t f9;
	t3835026402* f10;
	t3835026402* f11;
	t3289915003 * f12;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t1501188108, f9)); }
	inline int32_t fg9() const { return f9; }
	inline int32_t* fag9() { return &f9; }
	inline void fs9(int32_t value)
	{
		f9 = value;
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t1501188108, f10)); }
	inline t3835026402* fg10() const { return f10; }
	inline t3835026402** fag10() { return &f10; }
	inline void fs10(t3835026402* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t1501188108, f11)); }
	inline t3835026402* fg11() const { return f11; }
	inline t3835026402** fag11() { return &f11; }
	inline void fs11(t3835026402* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t1501188108, f12)); }
	inline t3289915003 * fg12() const { return f12; }
	inline t3289915003 ** fag12() { return &f12; }
	inline void fs12(t3289915003 * value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
