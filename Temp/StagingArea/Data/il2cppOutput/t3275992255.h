#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2038051575;
struct t4081158439;
struct t2197338622;

#include "t191418348.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3275992255  : public t191418348
{
public:
	t2038051575 * f2;
	bool f3;
	t4081158439 * f4;
	t2197338622 * f5;
	t2197338622 * f6;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3275992255, f2)); }
	inline t2038051575 * fg2() const { return f2; }
	inline t2038051575 ** fag2() { return &f2; }
	inline void fs2(t2038051575 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3275992255, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3275992255, f4)); }
	inline t4081158439 * fg4() const { return f4; }
	inline t4081158439 ** fag4() { return &f4; }
	inline void fs4(t4081158439 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3275992255, f5)); }
	inline t2197338622 * fg5() const { return f5; }
	inline t2197338622 ** fag5() { return &f5; }
	inline void fs5(t2197338622 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3275992255, f6)); }
	inline t2197338622 * fg6() const { return f6; }
	inline t2197338622 ** fag6() { return &f6; }
	inline void fs6(t2197338622 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
