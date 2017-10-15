#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1448322145;

#include "t1448322145.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t998016900  : public t1448322145
{
public:
	t1448322145 * f2;
	bool f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t998016900, f2)); }
	inline t1448322145 * fg2() const { return f2; }
	inline t1448322145 ** fag2() { return &f2; }
	inline void fs2(t1448322145 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t998016900, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
