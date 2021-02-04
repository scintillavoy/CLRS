PARTITION returns r when all elements in the array A[p..r] have the same value.

```
PARTITION(A, p, r)
    x = A[r]
    i = p-1
    for j = p to r-1
        if A[j] <= x
            i = i+1
            exchange A[i] with A[j]
    if i+1 == r
        return (p+r)/2
    else
        exchange A[i+1] with A[r]
        return i+1
```
