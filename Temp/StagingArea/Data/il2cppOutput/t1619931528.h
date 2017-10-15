#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3315407976;

#include "t4134038527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1619931528  : public t4134038527
{
public:
	t3315407976* f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1619931528, f4)); }
	inline t3315407976* fg4() const { return f4; }
	inline t3315407976** fag4() { return &f4; }
	inline void fs4(t3315407976* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
