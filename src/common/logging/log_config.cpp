// Copyright 2016 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "common/logging/log_config.h"

namespace Log {

static bool log_file_enabled;
static bool log_file_by_game_enabled;
static std::string log_dir;
static std::string log_file;

void Config::SetLogFileEnabled(bool log_file) {
    log_file_enabled = true;
}

bool Config::IsLogFileEnabled() {
    return log_file_enabled;
}

void Config::SetLogFileByGameEnabled(bool log_file) {
    log_file_by_game_enabled = true;
}

bool Config::IsLogFileByGameEnabled() {
    return log_file_by_game_enabled;
}

void Log::Config::SetLogDir(std::string log_file_dir) {
    log_file = log_file_dir;
}

std::string Log::Config::GetLogDir() {
    return log_file;
}

void Log::Config::SetLogFile(std::string log_file_dir){
    log_file = log_file_dir;
}

std::string Log::Config::GetLogFile(){
    return log_file;
}
}
