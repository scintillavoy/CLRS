We guess T(n) &le; c<sub>1</sub>n<sup>2</sup>,  
T(n) &le; c<sub>1</sub>(n-1)<sup>2</sup>+c<sub>2</sub>n  
= c<sub>1</sub>n<sup>2</sup>-2c<sub>1</sub>n+c<sub>1</sub>+c<sub>2</sub>n  
&le; c<sub>1</sub>n<sup>2</sup> (when 2c<sub>1</sub> &ge; c<sub>2</sub>, n &ge; c<sub>1</sub>/(2c<sub>1</sub>-c<sub>2</sub>))  
&there4; T(n) = O(n<sup>2</sup>) &ctdot;(1)  

We guess T(n) &ge; c<sub>1</sub>n<sup>2</sup>,  
T(n) &ge; c<sub>1</sub>(n-1)<sup>2</sup>+c<sub>2</sub>n  
= c<sub>1</sub>n<sup>2</sup>-2c<sub>1</sub>n+c<sub>1</sub>+c<sub>2</sub>n  
&ge; c<sub>1</sub>n<sup>2</sup> (when 2c<sub>1</sub> &le; c<sub>2</sub>, n &le; c<sub>1</sub>/(2c<sub>1</sub>-c<sub>2</sub>))  
&there4; T(n) = &Omega;(n<sup>2</sup>) &ctdot;(2)  

From (1) and (2), T(n) = &Theta;(n<sup>2</sup>).  
