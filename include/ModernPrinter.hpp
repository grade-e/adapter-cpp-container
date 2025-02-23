#pragma once

#include <iostream>

#include "IPrinter.hpp"

class ModernPrinter : public IPrinter {
   public:
    void printDocument(const std::string& text) override {
        std::cout << "Modern Printer: " << text << std::endl;
    }
};
