#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3396089105;

#include "t2535388339.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2432769536  : public t2535388339
{
public:
	t3396089105 * f30;
	int16_t f31;

public:
	inline static int32_t fog30() { return static_cast<int32_t>(offsetof(t2432769536, f30)); }
	inline t3396089105 * fg30() const { return f30; }
	inline t3396089105 ** fag30() { return &f30; }
	inline void fs30(t3396089105 * value)
	{
		f30 = value;
		Il2CppCodeGenWriteBarrier(&f30, value);
	}

	inline static int32_t fog31() { return static_cast<int32_t>(offsetof(t2432769536, f31)); }
	inline int16_t fg31() const { return f31; }
	inline int16_t* fag31() { return &f31; }
	inline void fs31(int16_t value)
	{
		f31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
