// =============== Project Absynthe =============== >>
// Global utilities that we might need here and there.
// ================================================ >>

#ifndef AY_GLOBAL_H
#define AY_GLOBAL_H
#ifdef _WIN32
#pragma once
#endif

#include "dbg.h"
#include "convar.h"

#define STRINGIFY(x) #x
#define AT __FILE__ ":" TOSTRING(__LINE__)

#endif AY_GLOBAL_H // AY_GLOBAL_H