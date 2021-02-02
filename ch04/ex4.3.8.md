We guess T(n) &le; cn<sup>2</sup>,  
T(n) &le; c&sdot;4(n/2)<sup>2</sup> + n  
= c&sdot;4(n<sup>2</sup>/4) + n  
= cn<sup>2</sup> + n  
This is not the exact form so it fails.

We guess T(n) &le; c(n<sup>2</sup> - n),  
T(n) &le; c&sdot;4((n/2)<sup>2</sup> - n/2) + n  
= c&sdot;4(n<sup>2</sup>/4 - n/2) + n  
= cn<sup>2</sup> - 2cn + n  
&le; cn<sup>2</sup> (when 2c &ge; 1)  
&there4; T(n) = O(n<sup>2</sup> - n)  
= O(n<sup>2</sup>)  
