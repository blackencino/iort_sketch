#include <rtMath.h>

namespace iort {

float safe_divide(float numer, float denom) {
    if (denom == 0) {
        return 0.0f;
    } else {
        return numer / denom;
    }
}

double safe_divide(double numer, double denom) {
    if (denom == 0) {
        return 0.0;
    } else {
        return numer / denom;
    }
}

}  // namespace iort