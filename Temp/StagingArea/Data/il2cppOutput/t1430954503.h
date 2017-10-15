#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1215391928;
struct t3835026402;

#include "t2768948945.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1430954503  : public t2768948945
{
public:
	bool f1;
	bool f2;
	t1215391928 * f3;
	t3835026402* f4;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1430954503, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1430954503, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1430954503, f3)); }
	inline t1215391928 * fg3() const { return f3; }
	inline t1215391928 ** fag3() { return &f3; }
	inline void fs3(t1215391928 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1430954503, f4)); }
	inline t3835026402* fg4() const { return f4; }
	inline t3835026402** fag4() { return &f4; }
	inline void fs4(t3835026402* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
