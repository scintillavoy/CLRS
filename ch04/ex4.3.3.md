We guess T(n) &ge; c(n+2)lg(n+2),  
T(n) &ge; 2c(&lfloor;n/2&rfloor;+2)lg(&lfloor;n/2&rfloor;+2) + n  
&ge; 2c(n/2+1)lg(n/2+1) + n  
= 2c((n+2)/2)lg((n+2)/2) + n  
= c(n+2)(lg(n+2)-1) + n  
= c(n+2)lg(n+2) - c(n+2) + n  
= c(n+2)lg(n+2) - 2c + (1-c)n  
&ge; c(n+2)lg(n+2) (when (1-c)n &ge; 2c)  
&there4; T(n) = &Omega;(nlgn)  
From T(n) = O(nlgn) and T(n) = &Omega;(nlgn), T(n) = &Theta;(nlgn).  
