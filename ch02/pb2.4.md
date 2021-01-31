## a
(2, 1), (3, 1), (8, 6), (8, 1), (6, 1)

---

## b
An array with a descending order, <n, n-1, ..., 2, 1> has the most inversion. There are sum(i) (from i = n-1 to 0) = n(n-1)/2 inversions.

---

## c
The while loop in lines 5-7 swaps two adjacent elements if they consists an inversion and the inversion is gone away after swapping. The asymptotic running time of insertion sort depends on the number of iterations of the while loop. Thus, the running time of insertion sort is theta(n) when the number of inversions in the input array is n.

---

## d
While merging from merge sort, we can count the number of inversions by counting how many elements in the right subarray precedes elements in the left subarray. From the pseudo code in the book, it can be counted by adding
```
inv += n1 + 1 - i
```
in the else statement of the last for loop.
