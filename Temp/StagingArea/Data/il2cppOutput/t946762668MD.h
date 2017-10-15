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


#include "codegen/il2cpp-codegen.h"


struct t946762668;
struct t946762668_marshaled;

extern "C" void t946762668_marshal(const t946762668& unmarshaled, t946762668_marshaled& marshaled);
extern "C" void t946762668_marshal_back(const t946762668_marshaled& marshaled, t946762668& unmarshaled);
extern "C" void t946762668_marshal_cleanup(t946762668_marshaled& marshaled);
