#include <memory>

#include "ModernPrinter.hpp"
#include "PrinterAdapter.hpp"

using namespace std;

int main() {
    std::shared_ptr<IPrinter> modernPrinter = std::make_shared<ModernPrinter>();
    modernPrinter->printDocument("Hello from Modern Printer!");

    shared_ptr<OldPrinter> oldPrinter = make_shared<OldPrinter>();
    shared_ptr<IPrinter> printer = make_shared<PrinterAdapter>(oldPrinter);
    printer->printDocument("Hello, from Old Printer via Adapter!");
    return 0;
}
