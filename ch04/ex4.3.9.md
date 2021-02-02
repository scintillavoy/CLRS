By letting m = lgn,  
T(2<sup>m</sup>)= 3T(2<sup>m/2</sup>) + m  
S(m) = 3T(m/2) + m  

We guess S(m) &le; c(m<sup>lg3</sup> - m),  
S(m) &le; 3c((m/2)<sup>lg3</sup> - m/2) + m  
= 3cm<sup>lg3</sup>/2<sup>lg3</sup> - 3cm/2 + m  
= cm<sup>lg3</sup> - 3cm/2 + m  
= cm<sup>lg3</sup> - cm - cm/2 + m  
&le; c(m<sup>lg3</sup> - m) (when c &ge; 2)  
&there4; S(m) = O(m<sup>lg3</sup>) &ctdot;(1)  

We guess S(m) &ge; cm<sup>lg3</sup>,  
S(m) &ge; 3c(m/2)<sup>lg3</sup> + m  
= 3cm<sup>lg3</sup>/2<sup>lg3</sup> + m  
= cm<sup>lg3</sup> + m  
&ge; cm<sup>lg3</sup>  
&there4; S(m) = &Omega;(m<sup>lg3</sup>) &ctdot;(2)  

From (1) and (2), S(m) = &Theta;(m<sup>lg3</sup>).  
&there4; T(n) = T(2<sup>m</sup>) = S(m) = &Theta;(m<sup>lg3</sup>) = &Theta;(lg<sup>lg3</sup>n)  
