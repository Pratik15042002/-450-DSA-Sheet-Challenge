#include <bits/stdc++.h>
using namespace std;
 
int kthLargest(int stream[], int n, int k)
{
   // Create a min heap and store first k-1 elements
   // of stream into
   priority_queue<int, vector<int>, greater<int> > pq;
 
   // Push first k elements and print "_" (k-1) times
   for (int i=0; i<k-1; i++)
   {
      pq.push(stream[i]);
      cout << "_ ";
   }
   pq.push(stream[k-1]);
 
   for (int i=k; i<n; i++)
   {
       // We must insert last element before we
       // decide last k-th largest output.
          cout << pq.top() << " ";
 
       if (stream[i] > pq.top())
       {
           pq.pop();
           pq.push(stream[i]);
       } 
   } 
 
   // Print last k-th largest element (after
   // (inserting last element)
   cout << pq.top();
}
 
// Driver code
int main()
{
   int arr[] = {10, 20, 11, 70, 50, 40, 100, 55};
   int k = 3;
   int n = sizeof(arr)/sizeof(arr[0]);
   kthLargest(arr, n, k);
   return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
