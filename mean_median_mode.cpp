/*Task
Given an array, , of  integers, calculate and print the respective mean, median, and mode on separate lines. If your array contains more than one modal value, choose the numerically smallest one.

Note: Other than the modal value (which will always be an integer), your answers should be in decimal form, rounded to a scale of  decimal place (i.e., ,  format).


*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int max_n = 1e5+5;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n; cin>>n; 
    int a[max_n]; 
    long sum=0;
    
    for(auto i=0;i<n;i++) 
    {
        cin>>a[i];
        sum+=a[i];
    }
    
    double mean, median;
    
    //for mean
    mean = (double)sum/n;
    
    //for median
    sort(a,a+n);
    if(n%2==0) 
        median = (double)(a[n/2-1]+a[n/2])/2;
    else 
        median = a[n/2];
    
    // for mode
    int mode=a[0], mx=1, cnt=1;
    
    for(auto i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]) {
            ++cnt;
        }
        else 
            cnt=1;
        if(cnt>mx) 
        {
            mx=cnt;
            mode=a[i];
        }
    }
    
    cout<<mean<<"\n"<<median<<"\n"<<mode;
    
    return 0;
}

