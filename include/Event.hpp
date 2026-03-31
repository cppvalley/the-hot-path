#pragma once

#include <cstdint>

struct Event {
    std::uint64_t timestamp;
    std::uint64_t payload;
};
