#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t125447849;

#include "t182152170.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4088378971  : public t182152170
{
public:
	t125447849 * f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4088378971, f4)); }
	inline t125447849 * fg4() const { return f4; }
	inline t125447849 ** fag4() { return &f4; }
	inline void fs4(t125447849 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
