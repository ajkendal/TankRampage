#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Il2CppObject.h"
#include "t1418906834.h"
#include "t3394828682.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4052785496  : public Il2CppObject
{
public:
	uint8_t f0;
	uint8_t f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4052785496, f0)); }
	inline uint8_t fg0() const { return f0; }
	inline uint8_t* fag0() { return &f0; }
	inline void fs0(uint8_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4052785496, f1)); }
	inline uint8_t fg1() const { return f1; }
	inline uint8_t* fag1() { return &f1; }
	inline void fs1(uint8_t value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
