#include <rtMath.h>

#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Safe divide of 5, 7: " << iort::safe_divide(5.0f, 7.0f)
              << std::endl
              << "... and of 5, 0: " << iort::safe_divide(5.0f, 0.0f)
              << std::endl;
    return 0;
}
