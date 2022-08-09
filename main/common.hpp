#ifndef __COMMON__
#define __COMMON__

#include <vector>

template <typename Comparable>
const Comparable &findMax(const std::vector<Comparable>& a) {
		int maxIndex = 0;
		for (int i = 1; i < a.size(); ++i) {
				if (a[maxIndex] < a[i]) {
						maxIndex = i;
				}
		}
		return a[maxIndex];
}


#endif // !__COMMON__
