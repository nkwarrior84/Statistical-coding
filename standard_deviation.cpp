/*
Given an array, arr, of n integers, calculate and print the standard deviation. Your answer should be in decimal form, rounded to a scale of 1 decimal place (i.e., 12.3 format). An error margin of +-1 will be tolerated for the standard deviation.

Sample Input

STDIN           Function
-----           --------
5               arr[] size n = 5
10 40 30 50 20  arr =[10, 40, 30, 50, 20]

Sample Output

14.1
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    
    int n; 
    cin>>n; 
    int a[n+4]; 
    double sum=0, sum1=0;
    
    for(auto i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    
    double mean = (double)(sum/n);
    
    for(auto i=0; i<n; i++)
    {
        sum1 += (((double)a[i]-mean)*((double)a[i]-mean));
    }
    
    double std = (double)sqrt(sum1/n);
    
    printf("%.1f\n", std);
    
    return 0;
}
