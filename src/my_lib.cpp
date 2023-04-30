#include "my_lib.h"

namespace my_lib {
    int add(int a, int b)
    {
        return a + b;
    }
    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    float divide(int a, int b) {
        return static_cast<float>(a) / static_cast<float>(b);
    }

}
