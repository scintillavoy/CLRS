We guess T(n) &le; clg(n-2),  
T(n) &le; clg(&lceil;n/2&rceil;-2)+1  
&le; clg(n/2+1-2)+1  
= clg((n-2)/2)+1  
= clg(n-2)-c+1  
&le; clg(n-2) (when c &ge; 1)  
&there4; T(n) = O(lgn)
