#pragma once

#include "Event.hpp"

#include <cstddef>
#include <mutex>
#include <queue>

class EventQueue {
public:
    void push(const Event& event);
    bool try_pop(Event& out);
    std::size_t size() const;

private:
    mutable std::mutex mutex_;
    std::queue<Event> queue_;
};
