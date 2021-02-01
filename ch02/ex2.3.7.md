## Solution 1

1. Original set S  
   S[1] S[2] ... S[n]
2. Merge sort &rarr; O(nlgn)  
   S'[1] S'[2] ... S'[n]
3. Multiply by -1 and add x &rarr; O(n)  
   -S'[1]+x -S'[2]+x ... -S'[n]+x
4. Binary search -S'[i]+x in S from i = 1 to n &rarr; O(nlgn)  
   If found, there exist two elements in S whose sum is exactly x

## Solution 2 (more efficient)

```C++
MergeSort(S, 1, n);                 // O(nlgn)
size_t i = 1, j = n;
while (i < j) {                     // O(n)
    if (S[i] + S[j] == x) {
        return true;
    } else if (S[i] + S[j] < x) {
        ++i;
    } else {
        --j;
    }
}
return false;
```
