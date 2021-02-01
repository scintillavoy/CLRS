#include <iostream>
#include <vector>
using namespace std;

template <typename It>
void SelectionSort(It first, It last) {
    for (It i = first; i != last-1; ++i) {
        It minIt = i;
        for (It j = i+1; j != last; ++j) {  // find the smallest
            if (*j < *minIt) {
                minIt = j;
            }
        }
        auto temp = *i;                     // swap
        *i = *minIt;
        *minIt = temp;
    }
}

/* - Loop Invariant
 * At the start of each iteration of the outer for loop,
 * A[1..i-1] consists of the i-1 smallest elements originally in
 * A[1..n] in sorted order.
 * 
 * - Initialization
 * Before the first iteration, i-1 == 0 so the (empty) subarray is in
 * sorted order trivially.
 * 
 * - Maintenance
 * The smallest element in A[i..last] is larger than any element
 * in A[1..i-1]. By swapping the smallest element in A[i..last] with the
 * ith element, A[1..i] consists of the smallest i elements originally
 * in A[1..n] in sorted order.
 * 
 * - Termination
 * The loop terminates when i becomes n. At that point, A[1..n-1]
 * consists of the n-1 smallest element originally in A[1..n] in
 * sorted order. A[n] is the largest element because all the other elements
 * are smaller than A[n], which means A[1...n] is in sorted order.
 * 
 * - Running Time
 * Best-case: theta(n^2)
 * Worst-case: theta(n^2)
 * Outer loop: n-1
 * Inner loop: sum(i) (from i=1 to n-1) == (n-1)n/2
 */

int main() {
    vector<int> vec{62, 37, 41, 23, 54, 29};
    SelectionSort(vec.begin(), vec.end());
    for (const auto &x : vec) {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
