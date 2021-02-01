#include <iostream>
#include <vector>
#include <utility>
using namespace std;

template <typename It>
pair<It, It> FindMaximumSubarray(It first, It last) {
    if (first == last) {                        // empty array
        return make_pair(first, last);
    }
    It sub_first = first;
    It sub_last = first + 1;
    auto sub_sum = *first;
    for (It i = first; i != last - 1; ++i) {
        auto candidate_sum = *i;
        for (It j = i + 1; j != last; ++j) {
            candidate_sum += *j;
            if (sub_sum < candidate_sum) {      // update maximum subarray
                sub_first = i;
                sub_last = j + 1;
                sub_sum = candidate_sum;
            }
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

