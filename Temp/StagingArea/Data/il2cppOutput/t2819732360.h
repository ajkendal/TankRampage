#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3752677216;
struct t3835026402;

#include "t1783637374.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2819732360  : public t1783637374
{
public:
	t3752677216 * f5;
	bool f6;
	t3835026402* f7;
	t3835026402* f8;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2819732360, f5)); }
	inline t3752677216 * fg5() const { return f5; }
	inline t3752677216 ** fag5() { return &f5; }
	inline void fs5(t3752677216 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2819732360, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2819732360, f7)); }
	inline t3835026402* fg7() const { return f7; }
	inline t3835026402** fag7() { return &f7; }
	inline void fs7(t3835026402* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2819732360, f8)); }
	inline t3835026402* fg8() const { return f8; }
	inline t3835026402** fag8() { return &f8; }
	inline void fs8(t3835026402* value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
