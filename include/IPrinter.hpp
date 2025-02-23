#include <string>

class IPrinter {
   public:
    virtual void printDocument(const std::string& text) = 0;
    virtual ~IPrinter() = default;
};