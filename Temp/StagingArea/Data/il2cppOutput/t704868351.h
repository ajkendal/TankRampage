#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Il2CppObject.h"
#include "t2250949164.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t704868351  : public Il2CppObject
{
public:
	bool f0;
	bool f1;
	t2250949164  f2;
	float f3;
	t2250949164  f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t704868351, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t704868351, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t704868351, f2)); }
	inline t2250949164  fg2() const { return f2; }
	inline t2250949164 * fag2() { return &f2; }
	inline void fs2(t2250949164  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t704868351, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t704868351, f4)); }
	inline t2250949164  fg4() const { return f4; }
	inline t2250949164 * fag4() { return &f4; }
	inline void fs4(t2250949164  value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
