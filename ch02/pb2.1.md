## a
Sorting a list of length k with the insertion sort has time complexity of &Theta;(k<sup>2</sup>) in the worst case. Thus, when sorting n/k sublists, the insertion sort has time complexity of &Theta;(n/k * k<sup>2</sup>) = &Theta;(nk) in the worst case.

---

## b
| level   |                       | sum |
|:-------:|:---------------------:|:---:|
| 1       | cn                    | cn  |
| 2       | cn/2 cn/2             | cn  |
| 3       | cn/4 cn/4 cn/4 cn/4   | cn  |
| ...     | ...                   | ... |
| lg(n/k) | ck ... ck (n/k nodes) | cn  |
From the recursion tree above, there are lg(n/k) levels and each level costs cn. Combining them, merging takes time &Theta;(nlg(n/k)) in the worst case.

---

## c
When k = clgn, the time complexity becomes  
&Theta;(nk + nlg(n/k)) =  
&Theta;(nclgn + nlg(n/clgn)) =  
&Theta;(cnlgn + nlgn - nlg(clgn)) =  
&Theta;(nlgn)  
Because c can be any arbitrary constant, it is also true for k.

---

## d
