## Increasing order
<pre>
HEAPSORT
    BUILD-MAX-HEAP &rarr; O(n)
        MAX-HEAPIFY &rarr; O(lgn)
    MAX-HEAPIFY &rarr; O(nlgn)
</pre>
&there4; O(nlgn)

## Decreasing order
BUILD-MAX-HEAP is faster but the running time is still O(nlgn) because of MAX-HEAPIFY.
