#include <cmath>

#include "calculator.h"

void Calculator::Set(Number n) {
    active_number_ = n;
}

Number Calculator::GetNumber() const {
    return active_number_;
}

void Calculator::Add(Number n) {
    active_number_ += n;
}

void Calculator::Sub(Number n) {
    active_number_ -= n;
}

void Calculator::Div(Number n) {
    active_number_ /= n;
}

void Calculator::Mul(Number n) {
    active_number_ *= n;
}

void Calculator::Pow(Number n) {
    active_number_ = std::pow(active_number_, n);
}

std::string Calculator::GetNumberRepr() const{
    return std::to_string(active_number_);
}
