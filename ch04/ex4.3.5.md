We guess T(n) &le; c(n-2)lg(n-2),  
T(n) &le; c(&lceil;n/2&rceil;-2)lg(&lceil;n/2&rceil;-2) + c(&lfloor;n/2&rfloor;-2)lg(&lfloor;n/2&rfloor;-2) + dn  
&le; c(n/2+1-2)lg(n/2+1-2) + c(n/2+1-2)lg(n/2+1-2) + dn  
= c((n-2)/2)lg((n-2)/2) + c((n-2)/2)lg((n-2)/2) + dn  
= c(n-2)lg((n-2)/2) + dn  
= c(n-2)lg(n-2) - c(n-2) + dn  
&le; c(n-2)lg(n-2) (when c(n-2) &ge; dn)  
&there4; T(n) = O(nlgn) &ctdot;(1)  

We guess T(n) &ge; c(n+2)lg(n+2),  
T(n) &ge; c(&lceil;n/2&rceil;+2)lg(&lceil;n/2&rceil;+2) + c(&lfloor;n/2&rfloor;+2)lg(&lfloor;n/2&rfloor;+2) + dn  
&ge; c(n/2-1+2)lg(n/2-1+2) + c(n/2-1+2)lg(n/2-1+2) + dn  
= c((n+2)/2)lg((n+2)/2) + c((n+2)/2)lg((n+2)/2) + dn  
= c(n+2)lg((n+2)/2) + dn  
= c(n+2)lg(n+2) - c(n+2) + dn  
&ge; c(n+2)lg(n+2) (when c(n+2) &le; dn)  
&there4; T(n) = &Omega;(nlgn) &ctdot;(2)  

From (1) and (2), T(n) = &Theta;(nlgn).  
