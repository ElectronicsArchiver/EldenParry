#pragma once


#pragma warning(push)

#include <RE/Skyrim.h>
#include <REL/Relocation.h>
#include <SKSE/SKSE.h>

#include <SimpleIni.h>

#ifdef NDEBUG
	#include <spdlog/sinks/basic_file_sink.h>
#else
	#include <spdlog/sinks/msvc_sink.h>
#endif

#pragma warning(pop)


using namespace std::literals;

namespace logger = SKSE::log;

namespace util {
	using SKSE::stl::report_and_fail;
}


#define DLLEXPORT __declspec(dllexport)


#define DEBUG(message) \
	logger::debug(message)

#define INFO(message) \
	logger::info(message)

#define ERROR(message) \
	logger::error(message)

#define CRIT(message) \
	logger::critical(message)


#include "Plugin.h"
