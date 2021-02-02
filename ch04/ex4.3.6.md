We guess T(n) &le; c(n-34)lg(n-34),  
T(n) &le; 2c(&lfloor;n/2&rfloor;+17-34)lg(&lfloor;n/2&rfloor;+17-34) + n  
= 2c(&lfloor;n/2&rfloor;-17)lg(&lfloor;n/2&rfloor;-17) + n  
&le; 2c(n/2-17)lg(n/2-17) + n  
= 2c((n-34)/2)lg((n-34)/2) + n  
= c(n-34)lg((n-34)/2) + n  
= c(n-34)lg(n-34) - c(n-34) + n  
&le; c(n-34)lg(n-34) (when c(n-34) &ge; n)  
&there4; T(n) = O(nlgn)  
