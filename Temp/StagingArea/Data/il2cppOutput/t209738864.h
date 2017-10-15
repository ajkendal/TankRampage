#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t2023058526.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t209738864  : public t2023058526
{
public:
	String_t* f3;
	bool f4;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t209738864, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t209738864, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
