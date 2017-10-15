#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3099937104;
struct t3921196294;

#include "t774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3190878016  : public t774292115
{
public:
	t3099937104 * f2;
	t3099937104 * f3;
	t3099937104 * f4;
	t3921196294 * f5;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3190878016, f2)); }
	inline t3099937104 * fg2() const { return f2; }
	inline t3099937104 ** fag2() { return &f2; }
	inline void fs2(t3099937104 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3190878016, f3)); }
	inline t3099937104 * fg3() const { return f3; }
	inline t3099937104 ** fag3() { return &f3; }
	inline void fs3(t3099937104 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3190878016, f4)); }
	inline t3099937104 * fg4() const { return f4; }
	inline t3099937104 ** fag4() { return &f4; }
	inline void fs4(t3099937104 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3190878016, f5)); }
	inline t3921196294 * fg5() const { return f5; }
	inline t3921196294 ** fag5() { return &f5; }
	inline void fs5(t3921196294 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

struct t3190878016_SFs
{
public:
	int32_t f6;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3190878016_SFs, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
