#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t2997061660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2045585366  : public t2997061660
{
public:
	String_t* f5;
	String_t* f6;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2045585366, f5)); }
	inline String_t* fg5() const { return f5; }
	inline String_t** fag5() { return &f5; }
	inline void fs5(String_t* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2045585366, f6)); }
	inline String_t* fg6() const { return f6; }
	inline String_t** fag6() { return &f6; }
	inline void fs6(String_t* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
