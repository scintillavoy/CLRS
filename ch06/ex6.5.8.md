```
HEAP-DELETE(A, i)
    if i > A.heap-size
        error "out or range"
    if A[i] > A[A.heap-size]
        A[i] = A[A.heap-size]
        MAX-HEAPIFY(A, i)
    else
        HEAP-INCREASE-KEY(A, i, A[A.heap-size])
    A.heap-size = A.heap-size - 1
```
