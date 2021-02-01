#include <iostream>
#include <vector>
#include <utility>
using namespace std;

template <typename It>
pair<It, It> FindMaximumSubarray(It first, It last) {
    if (first == last) {                // empty array
        return make_pair(first, last);
    }
    It sub_first = first;
    It sub_last = first + 1;
    auto sub_sum = *first;
    It candidate = first;
    auto candidate_sum = *first;
    for (It it = first + 1; it != last; ++it) {
        if (candidate_sum < 0 || candidate_sum + *it < 0) { // reset candidate
            candidate = it;
            candidate_sum = *it;
        } else {                        // extend candidate
            candidate_sum += *it;
        }
        if (sub_sum < candidate_sum) {  // update maximum subarray
            sub_first = candidate;
            sub_last = it + 1;
            sub_sum = candidate_sum;
        }
    }
    return make_pair(sub_first, sub_last);
}

int main() {
    vector<int> vec{13, -3, -25, 20, -3, -16, -23, 18, 20, -7,
                    12, -5, -22, 15, -4, 7};
    auto res = FindMaximumSubarray(vec.cbegin(), vec.cend());
    for (auto it = res.first; it != res.second; ++it) {
        cout << *it << ' ';
    }
    cout << endl;
    return 0;
}
