#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct MemberInfo_t;

#include "t4134038527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3335947356  : public t4134038527
{
public:
	MemberInfo_t * f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3335947356, f4)); }
	inline MemberInfo_t * fg4() const { return f4; }
	inline MemberInfo_t ** fag4() { return &f4; }
	inline void fs4(MemberInfo_t * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
