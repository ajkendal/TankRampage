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


struct t1243592261;
struct t1243592261_marshaled;

extern "C" void t1243592261_marshal(const t1243592261& unmarshaled, t1243592261_marshaled& marshaled);
extern "C" void t1243592261_marshal_back(const t1243592261_marshaled& marshaled, t1243592261& unmarshaled);
extern "C" void t1243592261_marshal_cleanup(t1243592261_marshaled& marshaled);
