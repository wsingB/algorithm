#include <iostream>
#include <cstring>
void testMaxSubSum1();
void testfindMaxSubArray();
int fib(int n) {
    int a = 0;
    int b = 1;
    int c = 0;
    for (int i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
void testFib() {
    std::cout << "fib(0) = " << fib(0) << std::endl;
    std::cout << "fib(1) = " << fib(1) << std::endl;
    std::cout << "fib(2) = " << fib(2) << std::endl;
    std::cout << "fib(3) = " << fib(3) << std::endl;
    std::cout << "fib(4) = " << fib(4) << std::endl;
    std::cout << "fib(5) = " << fib(5) << std::endl;
    std::cout << "fib(6) = " << fib(6) << std::endl;
    std::cout << "fib(7) = " << fib(7) << std::endl;
    std::cout << "fib(8) = " << fib(8) << std::endl;
    std::cout << "fib(9) = " << fib(9) << std::endl;
    std::cout << "fib(10) = " << fib(10) << std::endl;
}
int main() {
    testMaxSubSum1();
    testfindMaxSubArray();
    testFib();
    return 0;
}
