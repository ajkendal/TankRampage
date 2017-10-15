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

struct t1518686560;
struct t1518686560_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C"  void m2014522928 (t1518686560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t1518686560;
struct t1518686560_marshaled;

extern "C" void t1518686560_marshal(const t1518686560& unmarshaled, t1518686560_marshaled& marshaled);
extern "C" void t1518686560_marshal_back(const t1518686560_marshaled& marshaled, t1518686560& unmarshaled);
extern "C" void t1518686560_marshal_cleanup(t1518686560_marshaled& marshaled);
