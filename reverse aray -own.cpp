// reveres an array
#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	int s =m+1  ;
    int e= arr.size()-1;
  
    for(int i= s; i<=e;i++){
        swap(arr[s] , arr[e]);
        s++;
        e--;;  
       
    }

}
