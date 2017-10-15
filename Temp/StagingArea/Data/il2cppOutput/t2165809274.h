#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2396949581;
struct t805605083;

#include "t1783637374.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2165809274  : public t1783637374
{
public:
	t2396949581 * f5;
	t805605083 * f6;
	bool f7;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2165809274, f5)); }
	inline t2396949581 * fg5() const { return f5; }
	inline t2396949581 ** fag5() { return &f5; }
	inline void fs5(t2396949581 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2165809274, f6)); }
	inline t805605083 * fg6() const { return f6; }
	inline t805605083 ** fag6() { return &f6; }
	inline void fs6(t805605083 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2165809274, f7)); }
	inline bool fg7() const { return f7; }
	inline bool* fag7() { return &f7; }
	inline void fs7(bool value)
	{
		f7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
