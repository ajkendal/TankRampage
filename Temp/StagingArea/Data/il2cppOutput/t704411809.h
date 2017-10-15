#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t837233982;
struct t3835026402;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t704411809  : public Il2CppObject
{
public:
	uint8_t f0;
	t837233982 * f1;
	t837233982 * f2;
	t3835026402* f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t704411809, f0)); }
	inline uint8_t fg0() const { return f0; }
	inline uint8_t* fag0() { return &f0; }
	inline void fs0(uint8_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t704411809, f1)); }
	inline t837233982 * fg1() const { return f1; }
	inline t837233982 ** fag1() { return &f1; }
	inline void fs1(t837233982 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t704411809, f2)); }
	inline t837233982 * fg2() const { return f2; }
	inline t837233982 ** fag2() { return &f2; }
	inline void fs2(t837233982 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t704411809, f3)); }
	inline t3835026402* fg3() const { return f3; }
	inline t3835026402** fag3() { return &f3; }
	inline void fs3(t3835026402* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
