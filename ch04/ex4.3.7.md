We guess T(n) &le; cn<sup>log<sub>3</sub>4</sup>,  
T(n) &le; c&sdot;4(n/3)<sup>log<sub>3</sub>4</sup> + n  
= cn<sup>log<sub>3</sub>4</sup>&sdot;4/3<sup>log<sub>3</sub>4</sup> + n  
= cn<sup>log<sub>3</sub>4</sup>&sdot;4/4<sup>log<sub>3</sub>3</sup> + n  
= cn<sup>log<sub>3</sub>4</sup> + n  
This is not the exact form so it fails.  

We guess T(n) &le; c(n<sup>log<sub>3</sub>4</sup> - n),  
T(n) &le; c&sdot;4((n/3)<sup>log<sub>3</sub>4</sup> - n/3) + n  
= c&sdot;4(n/3)<sup>log<sub>3</sub>4</sup> - 4cn/3 + n  
= c&sdot;4(n/3)<sup>log<sub>3</sub>4</sup> - 4cn/3 + n  
= cn<sup>log<sub>3</sub>4</sup>&sdot;4/3<sup>log<sub>3</sub>4</sup> - 4cn/3 + n  
= cn<sup>log<sub>3</sub>4</sup>&sdot;4/4<sup>log<sub>3</sub>3</sup> - 4cn/3 + n  
= cn<sup>log<sub>3</sub>4</sup> - 4cn/3 + n  
= cn<sup>log<sub>3</sub>4</sup> - cn - cn/3 + n  
= c(n<sup>log<sub>3</sub>4</sup> - n) - cn/3 + n  
&le; c(n<sup>log<sub>3</sub>4</sup> - n) (when c &ge; 3)  
&there4; T(n) = O(n<sup>log<sub>3</sub>4</sup> - n)  
= O(n<sup>log<sub>3</sub>4</sup>) (&because; log<sub>3</sub>4 > 1)  
