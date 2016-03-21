// Copyright 2016 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "common/logging/log_utils.h"

#include "common/file_util.h"

namespace Log {

void Utils::InitLogFile(std::string file) {

    std::string new_file = Config::GetLogDir() + "/" + file;

    if (FileUtil::Exists(new_file))
        FileUtil::Delete(new_file);

    FileUtil::CreateEmptyFile(new_file);
}

}
