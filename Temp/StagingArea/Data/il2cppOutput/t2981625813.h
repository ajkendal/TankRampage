#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t465682066;
struct t2981625813;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2981625813  : public Il2CppObject
{
public:
	String_t* f0;
	t465682066 * f1;
	String_t* f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2981625813, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2981625813, f1)); }
	inline t465682066 * fg1() const { return f1; }
	inline t465682066 ** fag1() { return &f1; }
	inline void fs1(t465682066 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2981625813, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t2981625813_SFs
{
public:
	t2981625813 * f3;
	t2981625813 * f4;
	t2981625813 * f5;
	t2981625813 * f6;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2981625813_SFs, f3)); }
	inline t2981625813 * fg3() const { return f3; }
	inline t2981625813 ** fag3() { return &f3; }
	inline void fs3(t2981625813 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2981625813_SFs, f4)); }
	inline t2981625813 * fg4() const { return f4; }
	inline t2981625813 ** fag4() { return &f4; }
	inline void fs4(t2981625813 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2981625813_SFs, f5)); }
	inline t2981625813 * fg5() const { return f5; }
	inline t2981625813 ** fag5() { return &f5; }
	inline void fs5(t2981625813 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2981625813_SFs, f6)); }
	inline t2981625813 * fg6() const { return f6; }
	inline t2981625813 ** fag6() { return &f6; }
	inline void fs6(t2981625813 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
