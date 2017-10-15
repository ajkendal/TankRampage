#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;
struct t3870530982;
struct t4239045173;

#include "t89657068.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1163883179  : public t89657068
{
public:
	Type_t * f7;
	t3870530982 * f8;
	t4239045173 * f9;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1163883179, f7)); }
	inline Type_t * fg7() const { return f7; }
	inline Type_t ** fag7() { return &f7; }
	inline void fs7(Type_t * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1163883179, f8)); }
	inline t3870530982 * fg8() const { return f8; }
	inline t3870530982 ** fag8() { return &f8; }
	inline void fs8(t3870530982 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t1163883179, f9)); }
	inline t4239045173 * fg9() const { return f9; }
	inline t4239045173 ** fag9() { return &f9; }
	inline void fs9(t4239045173 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
