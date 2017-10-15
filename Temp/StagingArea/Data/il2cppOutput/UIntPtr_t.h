#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4028081426.h"
#include "UIntPtr_t.h"
#include "t2799814243.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  UIntPtr_t 
{
public:
	void* f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(UIntPtr_t, f1)); }
	inline void* fg1() const { return f1; }
	inline void** fag1() { return &f1; }
	inline void fs1(void* value)
	{
		f1 = value;
	}
};

struct UIntPtr_t_SFs
{
public:
	UIntPtr_t  f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(UIntPtr_t_SFs, f0)); }
	inline UIntPtr_t  fg0() const { return f0; }
	inline UIntPtr_t * fag0() { return &f0; }
	inline void fs0(UIntPtr_t  value)
	{
		f0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
