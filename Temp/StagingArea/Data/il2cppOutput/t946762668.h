#pragma once

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

struct  t946762668 
{
public:
	int32_t f0;
	double f1;
	double f2;
	double f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t946762668, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t946762668, f1)); }
	inline double fg1() const { return f1; }
	inline double* fag1() { return &f1; }
	inline void fs1(double value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t946762668, f2)); }
	inline double fg2() const { return f2; }
	inline double* fag2() { return &f2; }
	inline void fs2(double value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t946762668, f3)); }
	inline double fg3() const { return f3; }
	inline double* fag3() { return &f3; }
	inline void fs3(double value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Experimental.Director.FrameData
struct t946762668_marshaled
{
	int32_t f0;
	double f1;
	double f2;
	double f3;
};
