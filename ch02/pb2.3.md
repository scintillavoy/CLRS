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
&Sigma;i (from i=0 to n) = n(n+1)/2  
The running time is &Theta;(n<sup>2</sup>).

---

## c
### Initialization
Before the first iteration, i is n, so n-(i+1) becomes -1 and y = 0.

### Maintenance
At line 3,  
y = a<sub>i</sub> + x * y  
= a<sub>i</sub> + x * &Sigma;a<sub>k+i+1</sub>x<sup>k</sup> (from k=0 to n-(i+1))  
= a<sub>i</sub> + &Sigma;a<sub>k+i+1</sub>x<sup>k+1</sup> (from k=0 to n-(i+1))  
= a<sub>i</sub> + &Sigma;a<sub>k+i</sub>x<sup>k</sup> (from k=1 to n-i)  
= &Sigma;a<sub>k+i</sub>x<sup>k</sup> (from k=0 to n-i)  
Decrementing i for the next iteration of the for loop then preserves the loop invariant.

### Termination
The for loop terminates when i becomes -1. By the loop invariant, 
y = &Sigma;a<sub>k</sub>x<sup>k</sup> (from k=0 to n)

---

## d
From c, it is proved the algorithm correctly evaluates the given polynomial.
