#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t2003179150.h"
#include "t1067463710.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4089807877  : public t2003179150
{
public:
	uint16_t f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4089807877, f0)); }
	inline uint16_t fg0() const { return f0; }
	inline uint16_t* fag0() { return &f0; }
	inline void fs0(uint16_t value)
	{
		f0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
