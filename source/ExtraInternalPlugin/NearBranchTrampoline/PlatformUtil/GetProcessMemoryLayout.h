#ifndef GET_PROCESS_MEMORY_LAYOUT_H
#define GET_PROCESS_MEMORY_LAYOUT_H

#include "UnifiedInterface/MemoryCommon.h"

#include <vector>

std::vector<MemoryRegion> *GetProcessMemoryLayout();

#endif