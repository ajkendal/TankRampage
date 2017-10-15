#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t805999634;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3661450512  : public Il2CppObject
{
public:
	Il2CppObject* f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3661450512, f0)); }
	inline Il2CppObject* fg0() const { return f0; }
	inline Il2CppObject** fag0() { return &f0; }
	inline void fs0(Il2CppObject* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
