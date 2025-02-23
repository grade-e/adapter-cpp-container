#pragma once

#include <iostream>
#include <string>

class OldPrinter {
   public:
    void legacyPrint(const std::string& text) {
        std::cout << "Old Printer Output: " << text << std::endl;
    }
};