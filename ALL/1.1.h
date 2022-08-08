//
// Created by werbinich on 8/8/22.
//

#ifndef ALL_1_1_H
#define ALL_1_1_H
#include <cstdio>

/* 选择问题 找出第k个最大者 */
// 方法一：排序
void bubble_sort(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j > i; --j) {
            if (a[j] < a[j - 1]) {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
        }
    }
}
void test_bubble_sort() {
    int a[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
    bubble_sort(a, 9);
    for (int i = 0; i < 9; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
static inline int select_kth(int *a, int n, int k) {
    bubble_sort(a, n);
    return a[k - 1];
}
static inline void test_select_kth() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 5;
    printf("%d\n", select_kth(a, n, k));
}
// 方法二：快速选择
static inline int select_kth_quick(int *a, int n, int k) {
    int low = 0;
    int high = n - 1;
    while (low < high) {
        int pivot = a[low];
        int i = low;
        int j = high;
        while (i < j) {
            while (i < j && a[j] >= pivot) {
                --j;
            }
            if (i < j) {
                a[i] = a[j];
                ++i;
            }
            while (i < j && a[i] <= pivot) {
                ++i;
            }
            if (i < j) {
                a[j] = a[i];
                --j;
            }
        }
        a[i] = pivot;
        if (i == k - 1) {
            return a[i];
        } else if (i > k - 1) {
            high = i - 1;
        } else {
            low = i + 1;
        }
    }
    return a[low];
}
void test_select_kth_quick() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 5;
    printf("%d\n", select_kth_quick(a, n, k));
}
#endif //ALL_1_1_H
