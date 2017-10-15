#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3752677216;

#include "t3752677216.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3045117544  : public t3752677216
{
public:
	t3752677216 * f4;
	t3752677216 * f5;
	bool f6;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3045117544, f4)); }
	inline t3752677216 * fg4() const { return f4; }
	inline t3752677216 ** fag4() { return &f4; }
	inline void fs4(t3752677216 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3045117544, f5)); }
	inline t3752677216 * fg5() const { return f5; }
	inline t3752677216 ** fag5() { return &f5; }
	inline void fs5(t3752677216 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3045117544, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
