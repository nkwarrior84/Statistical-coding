/*
The probability that a machine produces a defective product is 1/3. What is the probability that the 1st defect occurs the 5th item produced?
*/




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double p = 0.333;
    double q = 1.0 - p;
    
    //4 = 5-1;
    
    double g_prob = pow(q, 4)*p;
    
    printf("%0.3f", g_prob);
    return 0;
}
