#pragma once

#include <memory>
#include <string>

#include "IPrinter.hpp"
#include "OldPrinter.hpp"

class PrinterAdapter : public IPrinter {
   private:
    std::shared_ptr<OldPrinter> oldPrinter;

   public:
    PrinterAdapter(std::shared_ptr<OldPrinter> oldPrinter)
        : oldPrinter(oldPrinter) {}
    void printDocument(const std::string& text) override {
        oldPrinter->legacyPrint(text);
    }
};