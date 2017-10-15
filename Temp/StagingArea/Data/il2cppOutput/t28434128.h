#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t465682066;

#include "t3021215747.h"
#include "t2553848979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t28434128  : public t3021215747
{
public:
	t465682066 * f28;
	t2553848979  f29;

public:
	inline static int32_t fog28() { return static_cast<int32_t>(offsetof(t28434128, f28)); }
	inline t465682066 * fg28() const { return f28; }
	inline t465682066 ** fag28() { return &f28; }
	inline void fs28(t465682066 * value)
	{
		f28 = value;
		Il2CppCodeGenWriteBarrier(&f28, value);
	}

	inline static int32_t fog29() { return static_cast<int32_t>(offsetof(t28434128, f29)); }
	inline t2553848979  fg29() const { return f29; }
	inline t2553848979 * fag29() { return &f29; }
	inline void fs29(t2553848979  value)
	{
		f29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
