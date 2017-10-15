#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3691690178;

#include "t89657068.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1094351071  : public t89657068
{
public:
	t3691690178 * f7;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1094351071, f7)); }
	inline t3691690178 * fg7() const { return f7; }
	inline t3691690178 ** fag7() { return &f7; }
	inline void fs7(t3691690178 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
