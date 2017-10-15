#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t862263786.h"
#include "t2250949164.h"
#include "t465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4102294407  : public t862263786
{
public:
	t2250949164  f4;
	t465617798  f5;
	bool f6;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4102294407, f4)); }
	inline t2250949164  fg4() const { return f4; }
	inline t2250949164 * fag4() { return &f4; }
	inline void fs4(t2250949164  value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t4102294407, f5)); }
	inline t465617798  fg5() const { return f5; }
	inline t465617798 * fag5() { return &f5; }
	inline void fs5(t465617798  value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t4102294407, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
