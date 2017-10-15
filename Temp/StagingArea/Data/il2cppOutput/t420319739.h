#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4081158439;
struct t81314118;
struct t3312141352;

#include "t346534971.h"
#include "t1813218323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t420319739  : public t346534971
{
public:
	int32_t f16;
	t4081158439 * f17;
	t81314118 * f18;
	t3312141352 * f19;
	bool f20;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t420319739, f16)); }
	inline int32_t fg16() const { return f16; }
	inline int32_t* fag16() { return &f16; }
	inline void fs16(int32_t value)
	{
		f16 = value;
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t420319739, f17)); }
	inline t4081158439 * fg17() const { return f17; }
	inline t4081158439 ** fag17() { return &f17; }
	inline void fs17(t4081158439 * value)
	{
		f17 = value;
		Il2CppCodeGenWriteBarrier(&f17, value);
	}

	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t420319739, f18)); }
	inline t81314118 * fg18() const { return f18; }
	inline t81314118 ** fag18() { return &f18; }
	inline void fs18(t81314118 * value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}

	inline static int32_t fog19() { return static_cast<int32_t>(offsetof(t420319739, f19)); }
	inline t3312141352 * fg19() const { return f19; }
	inline t3312141352 ** fag19() { return &f19; }
	inline void fs19(t3312141352 * value)
	{
		f19 = value;
		Il2CppCodeGenWriteBarrier(&f19, value);
	}

	inline static int32_t fog20() { return static_cast<int32_t>(offsetof(t420319739, f20)); }
	inline bool fg20() const { return f20; }
	inline bool* fag20() { return &f20; }
	inline void fs20(bool value)
	{
		f20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
