/*
The interquartile range of an array is the difference between its first (Q1) and third (Q3) quartiles (i.e., Q3-Q1).

Given an array, arr, of n integers and an array, freqs, representing the respective frequencies of values's elements, construct a data set, S, where each values[i] occurs at frequency freqs[i]. Then calculate and print S's interquartile range, rounded to a scale of 1 decimal place (i.e., 12.3 format).
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double quad(vector<int> a)
{
    double q; int n=a.size(); 
    
    if(n%2==0) 
        q = (double)(a[n/2-1] + a[n/2])/2;
    else 
        q = (double)a[n/2];
    
    return q;
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n; 
    cin>>n; 
    vector<int> a(n), f(n);
    
    for(auto i=0; i<n; i++)
        cin>>a[i];
    
    int sum=0;
    for(auto i=0; i<n; i++)
    {
        cin>>f[i];
        sum += f[i];
    }
    
    vector<int> s(sum);
    int idx=0;
    for(auto i=0; i<n; i++)
    {
        for(auto j=0; j<f[i]; j++)
        {
            s[idx] = a[i];
            idx++;
        }
    }
    
    sort(s.begin(), s.end());
    
    vector<int> l(s.begin(), s.begin()+sum/2);
    vector<int> h;
    
    if(sum%2==0)
    {
        h.insert(h.end(), s.begin()+sum/2, s.end());
    }
    else
    {
        h.insert(h.end(), s.begin()+sum/2+1, s.end());
    }
    
    double Q1 = quad(l);
    
    double Q3 = quad(h);
    
    printf("%.1f", (Q3-Q1));
    
    return 0;
}


