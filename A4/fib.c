#include "fib.h"

int fib(int a) {
    if (a < 2) {
         return a;
    } else {
        return fib(a-2) + fib(a-1);
    }
}
