#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int m;
    int n;
     cin>>m>>n;
     
     vector<int>arr[m];
     for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
             int r;
             cin>>r;
             arr[i].push_back(r);
             
         }
        
     }
     for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            cout<<arr[i][j];
             
         }
        cout<<endl;
     }

    return 0;
}