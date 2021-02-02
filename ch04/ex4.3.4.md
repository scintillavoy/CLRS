We guess T(n) &le; cnlgn+1,  
T(n) &le; 2(c&lfloor;n/2&rfloor;lg(&lfloor;n/2&rfloor;)+1) + n  
&le; cnlg(n/2) + 2 + n  
&le; cnlgn - cn + 2 + n  
&le; cnlgn + 1 (when (1-c)n + 2 &le; 1)  
&there4; T(n) = O(nlgn)  
For n = 1, T(1) &le; c1lg1+1 = 1 so it satisfies the boundary condition.
