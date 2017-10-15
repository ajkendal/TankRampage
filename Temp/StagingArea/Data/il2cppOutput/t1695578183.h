#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3632007997;

#include "t1749942528.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1695578183  : public t1749942528
{
public:
	t3632007997* f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1695578183, f4)); }
	inline t3632007997* fg4() const { return f4; }
	inline t3632007997** fag4() { return &f4; }
	inline void fs4(t3632007997* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
