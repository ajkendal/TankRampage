#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4028081426.h"
#include "t1473869693.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1473869693 
{
public:
	int32_t f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1473869693, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}
};

struct t1473869693_SFs
{
public:
	t1473869693  f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1473869693_SFs, f1)); }
	inline t1473869693  fg1() const { return f1; }
	inline t1473869693 * fag1() { return &f1; }
	inline void fs1(t1473869693  value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Reflection.Emit.MethodToken
struct t1473869693_marshaled
{
	int32_t f0;
};
