﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2706259532 
{
public:
	int32_t f0;
	uint8_t f1;
	uint8_t f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2706259532, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2706259532, f1)); }
	inline uint8_t fg1() const { return f1; }
	inline uint8_t* fag1() { return &f1; }
	inline void fs1(uint8_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2706259532, f2)); }
	inline uint8_t fg2() const { return f2; }
	inline uint8_t* fag2() { return &f2; }
	inline void fs2(uint8_t value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.CullingGroupEvent
struct t2706259532_marshaled
{
	int32_t f0;
	uint8_t f1;
	uint8_t f2;
};
