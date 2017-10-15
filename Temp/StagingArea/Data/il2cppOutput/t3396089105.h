#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t888773083;
struct t3713108670;
struct t3261833271;
struct t2344509121;

#include "t3106160801.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3396089105  : public t3106160801
{
public:
	t888773083 * f16;
	t3713108670 * f17;
	t3261833271 * f18;
	t2344509121 * f19;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t3396089105, f16)); }
	inline t888773083 * fg16() const { return f16; }
	inline t888773083 ** fag16() { return &f16; }
	inline void fs16(t888773083 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t3396089105, f17)); }
	inline t3713108670 * fg17() const { return f17; }
	inline t3713108670 ** fag17() { return &f17; }
	inline void fs17(t3713108670 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t3396089105, f18)); }
	inline t3261833271 * fg18() const { return f18; }
	inline t3261833271 ** fag18() { return &f18; }
	inline void fs18(t3261833271 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t3396089105, f19)); }
	inline t2344509121 * fg19() const { return f19; }
	inline t2344509121 ** fag19() { return &f19; }
	inline void fs19(t2344509121 * value)
	{
		f19 = value;
		Il2CppCodeGenWriteBarrier(&f19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
