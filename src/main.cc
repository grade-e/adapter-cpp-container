#include <memory>

#include "PrinterAdapter.hpp"

using namespace std;

int main() {
    shared_ptr<OldPrinter> oldPrinter = make_shared<OldPrinter>();
    shared_ptr<IPrinter> printer = make_shared<PrinterAdapter>(oldPrinter);
    printer->printDocument("Hello, Adapter Pattern!");
    return 0;
}
