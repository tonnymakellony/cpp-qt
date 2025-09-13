#pragma once

#include <string>

using Number = double;

class Calculator {

public:
    Number GetNumber() const;
    void Set(Number n);
    void Add(Number n);
    void Sub(Number n);
    void Div(Number n);
    void Mul(Number n);
    void Pow(Number n);
    std::string GetNumberRepr() const;

private:
    Number active_number_ = 0.0;
};
