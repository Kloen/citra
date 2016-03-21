// Copyright 2016 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <string>

#include "common/logging/log.h"

namespace Log {

class Config {

public:

    static void SetLogFileByGameEnabled(bool log_file);
    static bool IsLogFileByGameEnabled();

    static void SetLogFileEnabled(bool log_file);
    static bool IsLogFileEnabled();

    static void SetLogDir(std::string log_file);
    static std::string GetLogDir();

    static void SetLogFile(std::string log_file);
    static std::string GetLogFile();

};
}
