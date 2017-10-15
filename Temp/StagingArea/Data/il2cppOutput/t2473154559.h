#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4254969518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2473154559  : public t4254969518
{
public:
	float f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2473154559, f0)); }
	inline float fg0() const { return f0; }
	inline float* fag0() { return &f0; }
	inline void fs0(float value)
	{
		f0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
