#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2040984165;

#include "t3866445379.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1772188340  : public t3866445379
{
public:
	bool f4;
	t2040984165 * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1772188340, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1772188340, f5)); }
	inline t2040984165 * fg5() const { return f5; }
	inline t2040984165 ** fag5() { return &f5; }
	inline void fs5(t2040984165 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
