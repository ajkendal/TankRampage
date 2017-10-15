#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2901181876;
struct t2561325229;

#include "t337311165.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2901181876  : public t337311165
{
public:
	bool f4;
	t2561325229 * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2901181876, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2901181876, f5)); }
	inline t2561325229 * fg5() const { return f5; }
	inline t2561325229 ** fag5() { return &f5; }
	inline void fs5(t2561325229 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

struct t2901181876_SFs
{
public:
	t2901181876 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2901181876_SFs, f3)); }
	inline t2901181876 * fg3() const { return f3; }
	inline t2901181876 ** fag3() { return &f3; }
	inline void fs3(t2901181876 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
