/*
The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.

A Utopian Tree sapling with a height of 1 meter is planted at the onset of spring. How tall will the tree be after n growth cycles?

For example, if the number of growth cycles is n=5, the calculations are as follows:

Period  Height
0          1
1          2
2          3
3          6
4          7
5          14
Function Description

Complete the utopianTree function in the editor below.

utopianTree has the following parameter(s):

int n: the number of growth cycles to simulate
*/
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[t];
    for(int a0 = 0; a0 < t; a0++){
        int height = 1;
        
        int n;
        cin >> n;
        
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                height *= 2;
            } else {
                height++;
            }
        }
        arr[a0] = height;
    }
    
    for (int i = 0; i < t; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
