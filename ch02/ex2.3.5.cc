#include <iostream>
#include <vector>
using namespace std;

template <typename It, typename T>
It BinarySearch(It first, It last, const T& val) {
    It last_ = last;            // save last
    while (first != last) {
        It mid = first + (last - first) / 2;
        if (*mid == val) {
            return mid;         // found
        } else if (*mid > val) {
            last = mid;
        } else {
            first = mid + 1;
        }
    }
    return last_;               // not found
}

/* - Running Time
 * Worst-case: theta(lgn)
 * T(n) = T(n/2) + c
 * The worst case happens when the value it finds is not in the array. Letting
 * the length of the array is n, for each iteration, n becomes half
 * (rounded down) if the value is not found. The while loop terminates until n
 * becomes 0, which means there is only up to (lgn)th iteration.
 */

int main() {
    vector<int> vec{23, 29, 37, 41, 54, 62};
    for (const auto &x : vec) {
        cout << *BinarySearch(vec.cbegin(), vec.cend(), x) << endl;
    }
    return 0;
}
