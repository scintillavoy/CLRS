### Loop Invariant
At the start of each iteration of the while loop of lines 4-6, the subarray A[1..A.heap-size] satisfies the max-heap property, except that there may be one violation: A[i] may be larger than A[PARENT(i)].

### Initialization
Before the first iteration, the loop invariant holds by the assumption that the subarray A[1..A.heap-size] satisfies the max-heap property at the time HEAP-INCREASE-KEY is called. The only change before the while loop is A[i] so the subarray A[1..A.heap-size] still satisfies the max-heap property, except that A[i] may be larger than A[PARENT(i)].

### Maintenance
From line 5, A[i] is exchanged with A[PARENT(i)] if it is larger than A[PARENT(i)]. After exchanging, A[i] is smaller than its parent but A[PARENT(i)] may be larger than its parent. Updating i with PARENT(i) preserves the loop invariant.

### Termination
The while loop terminates when i becomes 1 or A[i] is smaller than or equal to A[PARENT(i)]. For the first case, because A[1] has no parent, the exception in the loop invariant doesn't matter and A satisfies the max-heap property. For the second case, it is evident that there is no exception and A satisfies the max-heap property.
