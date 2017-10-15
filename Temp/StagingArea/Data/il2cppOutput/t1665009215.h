#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3835026402;

#include "t3289915003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1665009215  : public t3289915003
{
public:
	t3835026402* f21;
	t3835026402* f22;
	t3835026402* f23;

public:
	inline static int32_t fog21() { return static_cast<int32_t>(offsetof(t1665009215, f21)); }
	inline t3835026402* fg21() const { return f21; }
	inline t3835026402** fag21() { return &f21; }
	inline void fs21(t3835026402* value)
	{
		f21 = value;
		Il2CppCodeGenWriteBarrier(&f21, value);
	}

	inline static int32_t fog22() { return static_cast<int32_t>(offsetof(t1665009215, f22)); }
	inline t3835026402* fg22() const { return f22; }
	inline t3835026402** fag22() { return &f22; }
	inline void fs22(t3835026402* value)
	{
		f22 = value;
		Il2CppCodeGenWriteBarrier(&f22, value);
	}

	inline static int32_t fog23() { return static_cast<int32_t>(offsetof(t1665009215, f23)); }
	inline t3835026402* fg23() const { return f23; }
	inline t3835026402** fag23() { return &f23; }
	inline void fs23(t3835026402* value)
	{
		f23 = value;
		Il2CppCodeGenWriteBarrier(&f23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
