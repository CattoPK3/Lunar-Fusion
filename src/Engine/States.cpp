#include "Engine/States.hpp"
#include <iostream>

void State::LogState(const char* name) {
    std::cout << "[State] " << name << "\n";
}
