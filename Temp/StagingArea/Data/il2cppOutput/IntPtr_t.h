#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4028081426.h"
#include "t2799814243.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  IntPtr_t 
{
public:
	void* f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(IntPtr_t, f0)); }
	inline void* fg0() const { return f0; }
	inline void** fag0() { return &f0; }
	inline void set_m_value_0(void* value)
	{
		f0 = value;
	}
};

struct IntPtr_t_SFs
{
public:
	IntPtr_t f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(IntPtr_t_SFs, f1)); }
	inline IntPtr_t fg1() const { return f1; }
	inline IntPtr_t* fag1() { return &f1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
