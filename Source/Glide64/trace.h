#pragma once
#include <Common/TraceModulesCommon.h>
#include <Common/Trace.h>

enum TraceModuleGlide64
{
    TraceSettings = MaxTraceModuleCommon,
    TraceUnknown,
    TraceGlide64,
    TraceInterface,
    TraceResolution,
    TraceGlitch,
    MaxTraceModuleGlide64,
};

void SetupTrace(void);