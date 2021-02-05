We guess T(n) &ge; cn<sup>2</sup>,  
T(n) &ge; max<sub>0&le;q&le;n-1</sub>(cq<sup>2</sup>+c(n-q-1)<sup>2</sup>)+&Theta;(n)  
= c&sdot;max<sub>0&le;q&le;n-1</sub>(q<sup>2</sup>+(n-q-1)<sup>2</sup>)+&Theta;(n)  
= c(n-1)<sup>2</sup>+&Theta;(n)  
= c(n<sup>2</sup>-2n+1)+&Theta;(n)  
&ge; cn<sup>2</sup> (when &Theta;(n) = dn, d > 2c)  
&there4; T(n) = &Omega;(n<sup>2</sup>)  
