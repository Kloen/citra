// Copyright 2016 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <string>

#include "common/logging/log.h"
#include "common/logging/log_config.h"

namespace Log {

class Utils {

public:
    static void InitLogFile(std::string file);

};
}