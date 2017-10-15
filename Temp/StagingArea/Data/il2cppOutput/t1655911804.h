#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3835026402;
struct t3352404215;

#include "t2523738745.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1655911804  : public t2523738745
{
public:
	t3835026402* f4;
	t3352404215* f5;
	t3352404215* f6;
	uint64_t f7;
	int32_t f8;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1655911804, f4)); }
	inline t3835026402* fg4() const { return f4; }
	inline t3835026402** fag4() { return &f4; }
	inline void fs4(t3835026402* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1655911804, f5)); }
	inline t3352404215* fg5() const { return f5; }
	inline t3352404215** fag5() { return &f5; }
	inline void fs5(t3352404215* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1655911804, f6)); }
	inline t3352404215* fg6() const { return f6; }
	inline t3352404215** fag6() { return &f6; }
	inline void fs6(t3352404215* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1655911804, f7)); }
	inline uint64_t fg7() const { return f7; }
	inline uint64_t* fag7() { return &f7; }
	inline void fs7(uint64_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1655911804, f8)); }
	inline int32_t fg8() const { return f8; }
	inline int32_t* fag8() { return &f8; }
	inline void fs8(int32_t value)
	{
		f8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
