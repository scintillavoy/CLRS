## a
1 multiplication, 1 addition, 1 assignment for n+1 times  
&Theta;(n)

---

## b
```
P = 0
for i = 0 to n
    val = a[i]
    for j = 1 to i
        val *= x
    P += val
```
sum(i) (from i=0 to n) = n(n+1)/2  
The running time is &Theta;(n^2).

---

## c
### Initialization
Before the first iteration, i is n, so n-(i+1) becomes -1 and y = 0.

### Maintenance
At line 3,  
y = a<sub>i</sub> + x * y  
= a<sub>i</sub> + x * sum(a<sub>k+i+1</sub>x<sup>k</sup>) (from k=0 to n-(i+1))  
= a<sub>i</sub> + sum(a<sub>k+i+1</sub>x<sup>k+1</sup>) (from k=0 to n-(i+1))  
= a<sub>i</sub> + sum(a<sub>k+i</sub>x<sup>k</sup>) (from k=1 to n-i)  
= sum(a<sub>k+i</sub>x<sup>k</sup>) (from k=0 to n-i)  
Decrementing i for the next iteration of the for loop then preserves the loop invariant.

### Termination
The for loop terminates when i becomes -1. By the loop invariant, 
y = sum(a<sub>k</sub>x<sup>k</sup>) (from k=0 to n)

---

## d
From c, it is proved the algorithm correctly evaluates the given polynomial.
