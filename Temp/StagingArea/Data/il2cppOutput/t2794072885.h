#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2794072885;
struct t2040984165;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2794072885  : public Il2CppObject
{
public:
	t2040984165 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2794072885, f2)); }
	inline t2040984165 * fg2() const { return f2; }
	inline t2040984165 ** fag2() { return &f2; }
	inline void fs2(t2040984165 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t2794072885_SFs
{
public:
	t2794072885 * f0;
	t2794072885 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2794072885_SFs, f0)); }
	inline t2794072885 * fg0() const { return f0; }
	inline t2794072885 ** fag0() { return &f0; }
	inline void fs0(t2794072885 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2794072885_SFs, f1)); }
	inline t2794072885 * fg1() const { return f1; }
	inline t2794072885 ** fag1() { return &f1; }
	inline void fs1(t2794072885 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
