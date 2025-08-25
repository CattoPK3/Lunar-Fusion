#pragma once
#include <string>

class State {
public:
    virtual ~State() = default;
    virtual void Enter() = 0;
    virtual void Exit() = 0;
    virtual void Update(float dt) = 0;
    virtual void Render() = 0;

    void LogState(const std::string& name);
};
