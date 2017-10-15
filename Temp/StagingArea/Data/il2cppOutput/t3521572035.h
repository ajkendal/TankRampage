#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;
struct t2442356668;
struct t3764931161;
struct t3641702827;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3521572035  : public Il2CppObject
{
public:
	Type_t * f0;
	t2442356668* f1;
	t3764931161* f2;
	t3641702827* f3;
	int32_t f4;
	bool f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3521572035, f0)); }
	inline Type_t * fg0() const { return f0; }
	inline Type_t ** fag0() { return &f0; }
	inline void fs0(Type_t * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3521572035, f1)); }
	inline t2442356668* fg1() const { return f1; }
	inline t2442356668** fag1() { return &f1; }
	inline void fs1(t2442356668* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3521572035, f2)); }
	inline t3764931161* fg2() const { return f2; }
	inline t3764931161** fag2() { return &f2; }
	inline void fs2(t3764931161* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3521572035, f3)); }
	inline t3641702827* fg3() const { return f3; }
	inline t3641702827** fag3() { return &f3; }
	inline void fs3(t3641702827* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3521572035, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3521572035, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
