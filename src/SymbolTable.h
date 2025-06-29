#pragma once
#include <iostream>
#include <string>
#include <map>
#include <variant>

// Un tipo que puede ser int, double o string
using SymbolValue = std::variant<int, double, std::string>;

class SymbolTable {
public:
    void declare(const std::string& name, SymbolValue value);
    SymbolValue get(const std::string& name);
    void print();

private:
    std::map<std::string, SymbolValue> symbols;
};