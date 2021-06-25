/*
A manufacturer of metal pistons finds that, on average, 12% of the pistons they manufacture are rejected because they are incorrectly sized. What is the probability that a batch of 10 pistons will contain:

1. No more than 2 rejects?
2. At least 2 rejects?
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int fact(int n)
{
    if(n<2) return 1;
    return n*fact(n-1);
}

double nCr(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

double binomial(int p, int q)
{
    return pow(0.12, double(p))*pow(0.88, double(q));
}

int main() {
       
    double ans1 = 0.0, ans2 = 1.0;
    
    for(auto i=2; i>=0; i--)
    {
        ans1 += nCr(10, i)*binomial(i, 10-i);
    }
    for(auto i=1; i>=0; i--)
    {
        ans2 -= nCr(10, i)*binomial(i, 10-i);
        //ans2 = 1.0 - ans2;
    }
    printf("%0.3f\n%0.3f", ans1, ans2);
    
    return 0;
}



