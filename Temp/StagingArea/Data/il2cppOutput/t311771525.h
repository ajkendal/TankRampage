#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3352404215;
struct t3835026402;

#include "t217385558.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t311771525  : public t217385558
{
public:
	t3352404215* f4;
	uint64_t f5;
	t3835026402* f6;
	int32_t f7;
	t3352404215* f8;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t311771525, f4)); }
	inline t3352404215* fg4() const { return f4; }
	inline t3352404215** fag4() { return &f4; }
	inline void fs4(t3352404215* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t311771525, f5)); }
	inline uint64_t fg5() const { return f5; }
	inline uint64_t* fag5() { return &f5; }
	inline void fs5(uint64_t value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t311771525, f6)); }
	inline t3835026402* fg6() const { return f6; }
	inline t3835026402** fag6() { return &f6; }
	inline void fs6(t3835026402* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t311771525, f7)); }
	inline int32_t fg7() const { return f7; }
	inline int32_t* fag7() { return &f7; }
	inline void fs7(int32_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t311771525, f8)); }
	inline t3352404215* fg8() const { return f8; }
	inline t3352404215** fag8() { return &f8; }
	inline void fs8(t3352404215* value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
