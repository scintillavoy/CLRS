## a
We need to prove that A' consists of the same element in A.

---

## b
### Loop Invariant
At the start of each iteration, A[i..j] contains the smallest element in A[i..n].

### Initialization
Before the first iteration, j == n so A[i..n] should contain the smallest element in A[i..n].

### Maintenance
If A[j] is smaller than A[j-1], they are swapped. After swapping, A[j] cannot be the (only) smallest element in A[i..n] because it is greater than or equal to A[j-1]. Decrementing j for the next iteration of the for loop then preserves the loop invariant.

### Termination
The for loop terminates when j becomes i and A[i..i] == A[i] is the smallest element in A[i..n].

---

## c
### Loop Invariant
At the start of each iteration, A[1..i-1] consists of the i-1 smallest elements originally in A in sorted order.

### Initialization
Before the first iteration, i == 1 so A[1..i-1] is an empty array so it is trivially sorted.

### Maintenance
After the for loop in lines 2-4, A[i] becomes the smallest element in A[i..n]. It is the ith smallest element because elements in A[1..i-1] are the i-1 smallest elements and the others in A[i+1..n] are greater than or equal to A[i]. Incrementing i for the next iteration of the for loop preserves the loop invariant.

### Termination
The for loop in lines 1-4 terminates when i becomes A.length. At that time, A[i..n-1] consists of the n-1 smallest elements originally in A in sorted order so A[n] should be the greatest one.

---

## d
The for loop in lines 2-4 iterates n-i time(s) for each iteration of the for loop in lines 1-4. Summation of n-i from i == 1 to n-1 is n(n-1)/2. Thus, the worst-case running time of bubblesort is &Theta;(n^2), which is the same as insertion sort.
