#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3921196294;
struct t2058862956;
struct t2038051575;
struct t420319739;

#include "t774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1362310742  : public t774292115
{
public:
	t3921196294 * f2;
	t2058862956 * f3;
	t2038051575 * f4;
	t420319739 * f5;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1362310742, f2)); }
	inline t3921196294 * fg2() const { return f2; }
	inline t3921196294 ** fag2() { return &f2; }
	inline void fs2(t3921196294 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1362310742, f3)); }
	inline t2058862956 * fg3() const { return f3; }
	inline t2058862956 ** fag3() { return &f3; }
	inline void fs3(t2058862956 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1362310742, f4)); }
	inline t2038051575 * fg4() const { return f4; }
	inline t2038051575 ** fag4() { return &f4; }
	inline void fs4(t2038051575 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1362310742, f5)); }
	inline t420319739 * fg5() const { return f5; }
	inline t420319739 ** fag5() { return &f5; }
	inline void fs5(t420319739 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
