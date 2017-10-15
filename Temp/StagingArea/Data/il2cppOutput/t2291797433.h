#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;

#include "Il2CppObject.h"
#include "t2799814243.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2291797433  : public Il2CppObject
{
public:
	void* f0;
	Type_t * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2291797433, f0)); }
	inline void* fg0() const { return f0; }
	inline void** fag0() { return &f0; }
	inline void fs0(void* value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2291797433, f1)); }
	inline Type_t * fg1() const { return f1; }
	inline Type_t ** fag1() { return &f1; }
	inline void fs1(Type_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
