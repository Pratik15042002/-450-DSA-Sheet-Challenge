



// binary search approach we can also call it as two point approach

#include <iostream>

using namespace std;
 


void firstocc(int arr[], int n){
    int key;
    cout<<"enter key";
    cin>>key ;
    int s=0 , e= n -1 ;
    int mid= s +(e-s)/2 ;
    int ans=-1;
    
    while(s<=e){
        if(arr[mid]== key){
            ans= mid;
            e = mid-1 ;
        }
    else if(key>arr[mid]){
        s = mid +1;
    } 
        else if(key<arr[mid]){
            e= mid-1;
        }
        mid=s+(e-s)/2;
    }
     cout<<ans;
    
    
}



 /*void printarr(int arr[], int n){
     for (int i=0;i<n;i++){
        cout<<" first occurance is "arr[i];
     }
 }
*/

//if u want to find no of occurance , then find the same process to find last occurance
// and then occurance = ( last index - first index )+1


int main()
{
  int n ;
  cin>>n;
  int arr[50];
   for(int i=0;i<n;i++){
       cout<<"ente the element in arry";
       cin>>arr[i];
   }
   
        firstocc(arr , n );
 //printarr(arr[i], n)
  
  
  
  
  
    return 0;
}
