#include <iostream>
#include <tuple>
/**
* Cubic maximum contiguous subsequence sum algorithm.
*/
#include <vector>
auto maxSubSum1(const std::vector<int> &a) {
    int maxSum = 0;
    int thisSum = 0;
    for (auto &x : a) {
        thisSum += x;
        if (thisSum > maxSum) {
            maxSum = thisSum;
        } else if (thisSum < 0) {
            thisSum = 0;
        }
    }
    return maxSum;
}
auto findMaxSubArray(const std::vector<int> &a) {
    int maxSum = 0;
    int thisSum = 0;
    int left = 0;
    int right = 0;
    int tempLeft = 0;
    int tempRight = 0;
    for (int i = 0; i < a.size(); i++) {
        thisSum += a[i];
        if (thisSum > maxSum) {
            maxSum = thisSum;
            tempLeft = left;
            tempRight = right = i;
        } else if (thisSum < 0) {
            thisSum = 0;
            left = i + 1;
        }
    }
    return std::make_tuple(tempLeft, tempRight, maxSum);
}
void testfindMaxSubArray() {
    std::vector<int> a = { 1, 2, -3, 4, -5, 6, 7, -8, 9, -10 };
    auto result = findMaxSubArray(a);
    std::cout << "left: " << std::get<0>(result) << " right: " << std::get<1>(result) << " sum: " << std::get<2>(result) << std::endl;
}
void testMaxSubSum1() {
    std::vector<int> a = {};
    std::cout << "maxSubSum1({}) = " << maxSubSum1(a) << std::endl;
    a = {-1};
    std::cout << "maxSubSum1({-1}) = " << maxSubSum1(a) << std::endl;
    a = {-1, 2, 3, -4};
    std::cout << "maxSubSum1({-1, 2, 3, -4}) = " << maxSubSum1(a) << std::endl;
    a = {-1, 2, 3, -4, 5, -6, 7, -8, 9};
    std::cout << "maxSubSum1({-1, 2, 3, -4, 5, -6, 7, -8, 9}) = " << maxSubSum1(a) << std::endl;
}
