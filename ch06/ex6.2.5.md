```
MAX-HEAPIFY(A, i)
    l = LEFT(i)
    r = RIGHT(i)
    while true
        if l <= A.heap-size and A[l] > A[i]
            largest = l
        else largest = i
        if r <= A.heap-size and A[r] > A[largest]
            largest = r
        if largest != i
            exchange A[i] with A[largest]
            i = largest
        else return
```
