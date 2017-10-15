#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2088154582;
struct t445179443;
struct t3920422848;

#include "Il2CppObject.h"
#include "t465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2886048419  : public Il2CppObject
{
public:
	t2088154582 * f0;
	t445179443 * f1;
	t3920422848* f2;
	t465617798  f3;
	bool f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2886048419, f0)); }
	inline t2088154582 * fg0() const { return f0; }
	inline t2088154582 ** fag0() { return &f0; }
	inline void fs0(t2088154582 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2886048419, f1)); }
	inline t445179443 * fg1() const { return f1; }
	inline t445179443 ** fag1() { return &f1; }
	inline void fs1(t445179443 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2886048419, f2)); }
	inline t3920422848* fg2() const { return f2; }
	inline t3920422848** fag2() { return &f2; }
	inline void fs2(t3920422848* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2886048419, f3)); }
	inline t465617798  fg3() const { return f3; }
	inline t465617798 * fag3() { return &f3; }
	inline void fs3(t465617798  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2886048419, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
