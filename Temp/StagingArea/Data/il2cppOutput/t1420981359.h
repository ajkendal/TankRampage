#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t3566053706.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1420981359  : public t3566053706
{
public:
	uint32_t f2;
	uint32_t f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1420981359, f2)); }
	inline uint32_t fg2() const { return f2; }
	inline uint32_t* fag2() { return &f2; }
	inline void fs2(uint32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1420981359, f3)); }
	inline uint32_t fg3() const { return f3; }
	inline uint32_t* fag3() { return &f3; }
	inline void fs3(uint32_t value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
