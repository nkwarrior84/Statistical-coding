/*

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Given:
    (lemda) = 2.5
     k = 5;
     prob = (((lemda)^k)*(e)^(-lemda))/fact(k);

*/


int fact(int n)
{
    if(n < 2)
        return 1;
    return n*fact(n-1); 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    double prob = ((pow(2.5, 5))*(pow(2.71, (-2.5))))/fact(5);
    
    printf("%0.3f", prob);
    
    return 0;
}




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/*
    let l = lemda;
    Ca = 160 + 40X^2  where X is poisson(k, l)
    then
        E(Ca) = E(160 + 40X^2)
              = E(160) + 40E(X^2)
        
    Now, 
        Var(X) = E(X^2) - (E(X))^2
        
        i.e
        E(X^2) = Var(X) + (E(X))^2
        
        so,
        E(Ca) = 160 + 40[Var(X) + (E(X))^2]
              = 160 + 40[l + l^2];
    
    similarly,
        E(Cb) = 128 + 40[l + l^2]
               
*/


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    // given
    double l1 = 0.88, l2 = 1.55;
    
    double p1 = 160 + 40*(l1 + (l1*l1));
    double p2 = 128 + 40*(l2 + (l2*l2));
    
    printf("%0.3f\n%0.3f", p1, p2);
    
    return 0;
}






