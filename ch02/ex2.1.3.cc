#include <iostream>
#include <vector>
using namespace std;

template <typename T>
typename vector<T>::size_type LinearSearch(const vector<T> &vec, T val) {
    for (typename vector<T>::size_type i = 0; i < vec.size(); ++i) {
        if (vec[i] == val)  // found
            return i;
    }
    return vec.size();      // not found
}

/* - Loop Invariant
 * On each iteration of the for loop,
 * there is no index k < i so that vec[k] == val.
 * 
 * - Initialization
 * Before the first iteration, i == 0 so the loop invariant holds trivially.
 * 
 * - Maintenance
 * The for loop continues only if vec[i] != val,
 * which means there is no index k <= i so that vec[k] == val,
 * so incrementing i for the next iteration of the for loop
 * preserves the loop invariant.
 * 
 * - Termination
 * If the for loop terminates on the if statement,
 * it successfully found an index so that vec[i] == val.
 * Otherwise, the algorithm returns with vec.size()
 * notifying there is no val in vec.
 */

int main() {
    vector<int> vec{62, 37, 41, 23, 54, 29};
    cout << LinearSearch(vec, 54) << endl;      // 4
    cout << LinearSearch(vec, 27) << endl;      // 6
    return 0;
}
