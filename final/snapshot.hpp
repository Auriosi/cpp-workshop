#pragma once
#include "deps.hpp"

namespace hku {
    struct Snapshot {
        std::string description;
        char logs[52428800];
    };
}