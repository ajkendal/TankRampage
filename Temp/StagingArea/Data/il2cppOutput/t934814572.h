#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3835026402;
struct Il2CppObject;

#include "t3289915003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t934814572  : public t3289915003
{
public:
	t3835026402* f21;
	Il2CppObject * f22;

public:
	inline static int32_t fog21() { return static_cast<int32_t>(offsetof(t934814572, f21)); }
	inline t3835026402* fg21() const { return f21; }
	inline t3835026402** fag21() { return &f21; }
	inline void fs21(t3835026402* value)
	{
		f21 = value;
		Il2CppCodeGenWriteBarrier(&f21, value);
	}

	inline static int32_t fog22() { return static_cast<int32_t>(offsetof(t934814572, f22)); }
	inline Il2CppObject * fg22() const { return f22; }
	inline Il2CppObject ** fag22() { return &f22; }
	inline void fs22(Il2CppObject * value)
	{
		f22 = value;
		Il2CppCodeGenWriteBarrier(&f22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
