#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1883469240;
struct t2038051575;
struct t3628883901;
struct t2029265218;

#include "t191418348.h"
#include "t2553848979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2917893875  : public t191418348
{
public:
	t1883469240 * f2;
	t2038051575 * f3;
	t3628883901 * f4;
	bool f5;
	t2029265218 * f6;
	t2553848979  f7;
	bool f8;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2917893875, f2)); }
	inline t1883469240 * fg2() const { return f2; }
	inline t1883469240 ** fag2() { return &f2; }
	inline void fs2(t1883469240 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2917893875, f3)); }
	inline t2038051575 * fg3() const { return f3; }
	inline t2038051575 ** fag3() { return &f3; }
	inline void fs3(t2038051575 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2917893875, f4)); }
	inline t3628883901 * fg4() const { return f4; }
	inline t3628883901 ** fag4() { return &f4; }
	inline void fs4(t3628883901 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2917893875, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2917893875, f6)); }
	inline t2029265218 * fg6() const { return f6; }
	inline t2029265218 ** fag6() { return &f6; }
	inline void fs6(t2029265218 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2917893875, f7)); }
	inline t2553848979  fg7() const { return f7; }
	inline t2553848979 * fag7() { return &f7; }
	inline void fs7(t2553848979  value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2917893875, f8)); }
	inline bool fg8() const { return f8; }
	inline bool* fag8() { return &f8; }
	inline void fs8(bool value)
	{
		f8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
