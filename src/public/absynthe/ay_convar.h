// =============== Project Absynthe =============== >>
// A shim of preprocessor templates for using ConVars
// ================================================ >>

#ifndef AY_COMMANDS_H
#define AY_COMMANDS_H
#ifdef _WIN32
#pragma once
#endif

#include "ay_global.h"

// ============ Normal ConVar Templates ============ >>

// [Normal ConVar | Cheat] Cheat with per-occurance value.
#define AY_CONVAR_CHEAT(convar_name, convar_defaultValue) \
	ConVar convar_name(TOSTRING(convar_name), TOSTRING(convar_defaultValue), FCVAR_CHEAT);

// [Normal ConVar] ConVar for developers only.
#define AY_CONVAR_DEV(convar_name, convar_defaultValue) \
	ConVar convar_name(TOSTRING(convar_name), TOSTRING(convar_defaultValue), FCVAR_DEVELOPMENTONLY);

// [Normal ConVar] ConVar that hides from autofill.
#define AY_CONVAR_HIDDEN(convar_name, convar_defaultValue) \
	ConVar convar_name(TOSTRING(convar_name), TOSTRING(convar_defaultValue), FCVAR_HIDDEN);

// [Normal ConVar] ConVar that is remembered between restarts.
#define AY_CONVAR_ARCHIVE(convar_name, convar_defaultValue) \
	ConVar convar_name(TOSTRING(convar_name), TOSTRING(convar_defaultValue), FCVAR_ARCHIVE);

// ============ Boolean ConVar Templates (DEFAULTS TO FALSE) ============ >>

// [Bool ConVar | Cheat] automagically generates a boolean. 
//	Defaults to false.
#define AY_CONVAR_BOOL_FALSE_CHEAT(convar_name) \
	ConVar convar_name(TOSTRING(convar_name), "0", FCVAR_CHEAT); \
	bool b ## convar_name = convar_name.GetBool();

// [Bool ConVar] ConVar for developers only that automagically generates a boolean. 
//	Defaults to false.
#define AY_CONVAR_BOOL_FALSE_DEV(convar_name) \
	ConVar convar_name(TOSTRING(convar_name), "0", FCVAR_DEVELOPMENTONLY); \
	bool b ## convar_name = convar_name.GetBool();

// [Bool ConVar] ConVar that hides from autofill, and that automagically generates a boolean. 
//	Defaults to false.
#define AY_CONVAR_BOOL_FALSE_HIDDEN(convar_name) \
	ConVar convar_name(TOSTRING(convar_name), "0", FCVAR_HIDDEN); \
	bool b ## convar_name = convar_name.GetBool();

// [Bool ConVar] ConVar that is remembered between restarts and that automagically generates a boolean. 
//	Defaults to false.
#define AY_CONVAR_BOOL_FALSE_ARCHIVE(convar_name) \
	ConVar convar_name(TOSTRING(convar_name), "0", FCVAR_ARCHIVE); \
	bool b ## convar_name = convar_name.GetBool();

// [Bool ConVar] ConVar that is remembered between restarts and that automagically generates a boolean.
//	Defaults to false.
//	Starts as cheat.
#define AY_CONVAR_BOOL_FALSE_ARCHIVE_CHEAT(convar_name) \
	ConVar convar_name(TOSTRING(convar_name), "0", FCVAR_ARCHIVE | FCVAR_CHEAT); \
	bool b ## convar_name = convar_name.GetBool();

// ============ Boolean ConVar Templates (DEFAULTS TO TRUE) ============ >>

// [Bool ConVar | Cheat] automagically generates a boolean. 
// Defaults to true.
#define AY_CONVAR_BOOL_TRUE_CHEAT(convar_name) \
	ConVar convar_name(TOSTRING(convar_name), "1", FCVAR_CHEAT); \
	bool b ## convar_name = convar_name.GetBool();

// [Bool ConVar] ConVar for developers only that automagically generates a boolean. 
//	Defaults to true.
#define AY_CONVAR_BOOL_TRUE_DEV(convar_name) \
	ConVar convar_name(TOSTRING(convar_name), "1", FCVAR_DEVELOPMENTONLY); \
	bool b ## convar_name = convar_name.GetBool();

// [Bool ConVar] ConVar that hides from autofill, and that automagically generates a boolean. 
//	Defaults to true.
#define AY_CONVAR_BOOL_TRUE_HIDDEN(convar_name) \
	ConVar convar_name(TOSTRING(convar_name), "1", FCVAR_HIDDEN); \
	bool b ## convar_name = convar_name.GetBool();

// [Bool ConVar] ConVar that is remembered between restarts and that automagically generates a boolean. 
//	Defaults to true.
#define AY_CONVAR_BOOL_TRUE_ARCHIVE(convar_name) \
	ConVar convar_name(TOSTRING(convar_name), "1", FCVAR_ARCHIVE); \
	bool b ## convar_name = convar_name.GetBool();

// [Bool ConVar] ConVar that is remembered between restarts and that automagically generates a boolean.
//	Defaults to true.
//	Starts as cheat.
#define AY_CONVAR_BOOL_TRUE_ARCHIVE_CHEAT(convar_name) \
	ConVar convar_name(TOSTRING(convar_name), "1", FCVAR_ARCHIVE | FCVAR_CHEAT); \
	bool b ## convar_name = convar_name.GetBool();

// ============ Float ConVar Templates ============ >>

// [Float ConVar | Cheat] convar that automagically generates an integer.
#define AY_CONVAR_FLOAT_CHEAT(convar_name, convar_defaultValue) \
	ConVar convar_name(TOSTRING(convar_name), TOSTRING(convar_defaultValue), FCVAR_CHEAT); \
	float fl ## convar_name = convar_name.GetFloat();

// ============ Integer ConVar Templates ============ >>

// [Integer ConVar | Cheat] convar that automagically generates an integer.
#define AY_CONVAR_INT_CHEAT(convar_name, convar_defaultValue) \
	ConVar convar_name(TOSTRING(convar_name), TOSTRING(convar_defaultValue), FCVAR_CHEAT); \
	int i ## convar_name = convar_name.GetInt();

#endif // AY_COMMANDS_H