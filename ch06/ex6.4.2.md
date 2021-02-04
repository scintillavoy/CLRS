### Loop Invariant
At the start of each iteration of the for loop of lines 2-5, the subarray A[1..i] is a max-heap containing the i smallest elements of A[1..n], and the subarray A[i+1..n] contains the n-i largest elements of A[1..n], sorted.

### Initialization
Before the first iteration i == A.length == n. A[1..i] == A[1..n] is a max-heap because we called BUILD-MAX-HEAP on A. A[i+1..n] == A[n+1..n] is an empty array and contains the n-i == 0 largest element of A[1..n], trivially.

### Maintenance
From line 3, A[1], the (n-i+1)th largest element of A[1..n], is exchanged with A[i]. After exchanging, A[1..i-1] contains the i-1 smallest elements of A[1..n], and the subarray A[i..n] contains the n-i+1 largest elements of A[1..n], sorted. Decrementing i for the next iteration preserves the loop invariant.

### Termination
The for loop terminates when i becomes 1. The subarray A[1..i] == A[1] is a max-heap containing the 1 smallest element of A[1..n], and the subarray A[i+1..n] == A[2..n] contains the n-1 largest elements of A[1..n], sorted. Therefore, A[1..n] contains the elements that was in A[1..n], in the sorted order.
