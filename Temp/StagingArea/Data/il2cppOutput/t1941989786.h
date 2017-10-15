#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3338506287;
struct t1468494371;
struct t833078195;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1941989786  : public Il2CppObject
{
public:
	t3338506287 * f0;
	bool f1;
	t1468494371 * f2;
	Il2CppObject * f3;
	bool f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1941989786, f0)); }
	inline t3338506287 * fg0() const { return f0; }
	inline t3338506287 ** fag0() { return &f0; }
	inline void fs0(t3338506287 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1941989786, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1941989786, f2)); }
	inline t1468494371 * fg2() const { return f2; }
	inline t1468494371 ** fag2() { return &f2; }
	inline void fs2(t1468494371 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1941989786, f3)); }
	inline Il2CppObject * fg3() const { return f3; }
	inline Il2CppObject ** fag3() { return &f3; }
	inline void fs3(Il2CppObject * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1941989786, f4)); }
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
