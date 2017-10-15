#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3671725425;
struct t3606058440;

#include "t1497998840.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4041146298  : public t1497998840
{
public:
	t3671725425 * f10;
	t3606058440 * f11;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t4041146298, f10)); }
	inline t3671725425 * fg10() const { return f10; }
	inline t3671725425 ** fag10() { return &f10; }
	inline void fs10(t3671725425 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t4041146298, f11)); }
	inline t3606058440 * fg11() const { return f11; }
	inline t3606058440 ** fag11() { return &f11; }
	inline void fs11(t3606058440 * value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
