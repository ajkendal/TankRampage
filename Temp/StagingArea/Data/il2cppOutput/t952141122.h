#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t3835026402;

#include "t4202988274.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t952141122  : public t4202988274
{
public:
	String_t* f11;
	String_t* f12;
	t3835026402* f13;

public:
	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t952141122, f11)); }
	inline String_t* fg11() const { return f11; }
	inline String_t** fag11() { return &f11; }
	inline void fs11(String_t* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t952141122, f12)); }
	inline String_t* fg12() const { return f12; }
	inline String_t** fag12() { return &f12; }
	inline void fs12(String_t* value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t952141122, f13)); }
	inline t3835026402* fg13() const { return f13; }
	inline t3835026402** fag13() { return &f13; }
	inline void fs13(t3835026402* value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
