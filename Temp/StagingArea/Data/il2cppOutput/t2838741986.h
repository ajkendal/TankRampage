#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2631107245;
struct t4214441299;
struct Il2CppObject;

#include "t3870530982.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2838741986  : public t3870530982
{
public:
	t4214441299 * f2;
	Il2CppObject * f3;
	int64_t f4;
	int64_t f5;
	int64_t f6;
	bool f7;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2838741986, f2)); }
	inline t4214441299 * fg2() const { return f2; }
	inline t4214441299 ** fag2() { return &f2; }
	inline void fs2(t4214441299 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2838741986, f3)); }
	inline Il2CppObject * fg3() const { return f3; }
	inline Il2CppObject ** fag3() { return &f3; }
	inline void fs3(Il2CppObject * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2838741986, f4)); }
	inline int64_t fg4() const { return f4; }
	inline int64_t* fag4() { return &f4; }
	inline void fs4(int64_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2838741986, f5)); }
	inline int64_t fg5() const { return f5; }
	inline int64_t* fag5() { return &f5; }
	inline void fs5(int64_t value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2838741986, f6)); }
	inline int64_t fg6() const { return f6; }
	inline int64_t* fag6() { return &f6; }
	inline void fs6(int64_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2838741986, f7)); }
	inline bool fg7() const { return f7; }
	inline bool* fag7() { return &f7; }
	inline void fs7(bool value)
	{
		f7 = value;
	}
};

struct t2838741986_SFs
{
public:
	t2631107245 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2838741986_SFs, f1)); }
	inline t2631107245 * fg1() const { return f1; }
	inline t2631107245 ** fag1() { return &f1; }
	inline void fs1(t2631107245 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
