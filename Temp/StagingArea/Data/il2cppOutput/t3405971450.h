#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3102830828;

#include "t3102830828.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3405971450  : public t3102830828
{
public:
	t3102830828 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3405971450, f3)); }
	inline t3102830828 * fg3() const { return f3; }
	inline t3102830828 ** fag3() { return &f3; }
	inline void fs3(t3102830828 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
