#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4044877646.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3634805379  : public t4044877646
{
public:
	float f10;
	bool f11;
	bool f12;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3634805379, f10)); }
	inline float fg10() const { return f10; }
	inline float* fag10() { return &f10; }
	inline void fs10(float value)
	{
		f10 = value;
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t3634805379, f11)); }
	inline bool fg11() const { return f11; }
	inline bool* fag11() { return &f11; }
	inline void fs11(bool value)
	{
		f11 = value;
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t3634805379, f12)); }
	inline bool fg12() const { return f12; }
	inline bool* fag12() { return &f12; }
	inline void fs12(bool value)
	{
		f12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
