/*
Task
Given an array, , of  integers and an array, , representing the respective weights of 's elements, calculate and print the weighted mean of 's elements. Your answer should be rounded to a scale of  decimal place (i.e.,  format).
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n; 
    cin>>n; 
    int a[n+4], w;
    double num=0.0, den=0.0;
    
    for(int i=0;i<n;i++) 
        cin>>a[i];
    
    for(int i=0;i<n;i++) 
    {
        cin>>w;
        den+=w;
        num+=(a[i]*w);
    }
    
    double wmean = (double)(num/den);
    
    printf("%0.1f\n", wmean);
    
    return 0;
}
