#include <iostream>

int main() {
    #if defined(__cplusplus)
        std::cout << "C++ version: " << __cplusplus << std::endl;
    #else
        std::cout << "C++ version could not be determined." << std::endl;
    #endif
    return 0;
}
