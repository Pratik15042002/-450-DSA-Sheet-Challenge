// revrese an array without swap function just use the temp and assig the data


#include <iostream>
using namespace std;

void reversearr( int arr[], int size){
    int start =0;
    int end = size-1;
    while(start<=end){
    //swap(arr[start],arr[end]);
    int temp;
     temp = arr[start];
     arr[start]= arr[end];
     arr[end] =temp;
    
    start++;
    end--;
    }
    
}
 void printarr( int arr[], int size){
    for(int i=0;i<size; i++){
        cout<<"reverse of the array is"<<arr[i]<<endl;
    }
    
}

int main()
{
    int size;
    cin>>size;
     int arr[100];
     for (int i=0;i<size;i++)
     {
         cout<<"enter the elements:"<<i+1<<endl;
         cin>>arr[i];
         
     }
     
     reversearr(arr,size);
     printarr(arr,size);
    
     return 0;
}
