#include <rtHeaderMain.h>

#include <cstdlib>
#include <iostream>

namespace iort {

void __IORT_ASSERT_FAIL(char const* const msg) noexcept {
    std::cerr << msg << std::endl;
    std::abort();
}

}  // namespace iort
