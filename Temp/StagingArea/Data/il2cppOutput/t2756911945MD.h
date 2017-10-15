#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "t2756911945.h"
#include "String_t.h"

extern "C"  void m3536448426 (t2756911945 * __this, String_t* p0, String_t* p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t2756911945;
struct t2756911945_marshaled;

extern "C" void t2756911945_marshal(const t2756911945& unmarshaled, t2756911945_marshaled& marshaled);
extern "C" void t2756911945_marshal_back(const t2756911945_marshaled& marshaled, t2756911945& unmarshaled);
extern "C" void t2756911945_marshal_cleanup(t2756911945_marshaled& marshaled);
