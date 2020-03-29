#pragma once

#include <array>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <sstream>

namespace iort {

using int2 = std::array<int, 2>;
using int3 = std::array<int, 3>;

//------------------------------------------------------------------------------
// This is for aborting in a debug mode to make a more traceable stack.
void __IORT_ASSERT_FAIL(char const* const msg) noexcept;

//------------------------------------------------------------------------------
// This macro will cause an abort.
#define IORT_FAIL(TEXT)                               \
    do {                                              \
        std::stringstream sstr;                       \
        sstr << TEXT;                                 \
        sstr << "\nFile: " << __FILE__ << std::endl   \
             << "Line: " << __LINE__ << std::endl;    \
        iort::__IORT_ASSERT_FAIL(sstr.str().c_str()); \
    } while (0)

#define IORT_ASSERT(COND, TEXT)           \
    do {                                  \
        if (!(COND)) { IORT_FAIL(TEXT); } \
    } while (0)

#define IORT_WARN(TEXT)                                      \
    do {                                                     \
        std::stringstream sstr;                              \
        sstr << TEXT;                                        \
        sstr << "\nFile: " << __FILE__ << std::endl          \
             << "Line: " << __LINE__ << std::endl;           \
        std::cerr << "WARNING: " << sstr.str() << std::endl; \
    } while (0)

}  // namespace iort
