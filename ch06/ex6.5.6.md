```
HEAP-INCREASE-KEY(A, i, key)
    if key < A[i]
        error "new key is smaller than current key"
    while i > 1 and A[PARENT(i)] < A[i]
        A[i] = A[PARENT(i)]
        i = PARENT(i)
    A[i] = key
```
