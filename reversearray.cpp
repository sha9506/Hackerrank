/*An array is a type of data structure that stores elements of the same type in a contiguous block of memory. In an array, , of size , each memory location has some unique index,  (where ), that can be referenced as  or .

Reverse an array of integers.


*/




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
            int N;
            cin>>N;
    
            vector<int> arr(N);
    
            for (int i=0;i<N;i++)
                cin>>arr[i];
    
            reverse(arr.begin(),arr.end());
    
                for (int i=0;i<N;i++)
                cout<<arr[i]<<" ";
    
            return 0;
}