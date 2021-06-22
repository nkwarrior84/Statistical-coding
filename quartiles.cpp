/*
Given an array, arr, of n integers, calculate the respective first quartile (Q1), second quartile (Q2), and third quartile (Q3). It is guaranteed that Q1, Q2, and Q3 are integers.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int quad(vector<int> arr)
{
    int q, n=arr.size(); 
    
    if(n%2==0) 
        q = (arr[n/2-1] + arr[n/2])/2;
    else 
        q = arr[n/2];
    
    return q;
}

int main() 
{
    
    int n; 
    cin>>n; 
    vector<int >arr(n);
    
    for(auto i=0; i<n; i++)
        cin>>arr[i];
    
    sort(arr.begin(), arr.end());
    
    int Q1, Q2, Q3;
    
    Q2 = quad(arr);
    
    vector<int> l(arr.begin(), arr.begin()+n/2);
    vector<int> h;
    
    if(n%2==0)
    {
        h.insert(h.end(), arr.begin()+n/2, arr.end());
    }
    else
    {
        h.insert(h.end(), arr.begin()+n/2+1, arr.end());
    }
    
    Q1 = quad(l);
    
    Q3 = quad(h);
    
    cout<<Q1<<"\n"<<Q2<<"\n"<<Q3<<"\n";
        
    return 0;
}
