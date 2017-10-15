#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2749144121;
struct t435116583;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4083183608  : public Il2CppObject
{
public:
	t2749144121 * f0;
	t435116583 * f1;
	t2749144121 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4083183608, f0)); }
	inline t2749144121 * fg0() const { return f0; }
	inline t2749144121 ** fag0() { return &f0; }
	inline void fs0(t2749144121 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4083183608, f1)); }
	inline t435116583 * fg1() const { return f1; }
	inline t435116583 ** fag1() { return &f1; }
	inline void fs1(t435116583 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4083183608, f2)); }
	inline t2749144121 * fg2() const { return f2; }
	inline t2749144121 ** fag2() { return &f2; }
	inline void fs2(t2749144121 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
