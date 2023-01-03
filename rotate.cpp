/*class Solution
{
public:
    void rotate(vector<vector<int>>& matrix) {
		// complement of matrix 
        int n = matrix.size();
        for(int i=0; i<n; ++i) {
            for(int j=i; j<n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; ++i) {
		// 2 Pointer approach :  just like we do in 1D array we take left and right pointers
		// and swap the values and then make those pointers intersect at some point.
            int left = 0, right = n-1;
            while(left < right) {
                swap(matrix[i][left], matrix[i][right]);
                ++left;
                --right;
            }
        };
    }


*/
   /* class Solution {
public:
    void rotate(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i=0;i<=(n-2);i++)
            for(int j=i+1;j<=(n-1);j++)
                swap(matrix[i][j],matrix[j][i]);
        
        for(int i=0;i<n;i++)reverse(matrix[i].begin(),matrix[i].end());
    }
};*/



class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       
        //For any matrix to be rotatable it must be a square matrix
        // i.e. no. of rows == no. of cols == size
        
        int size = matrix.size(); 
        
        //Transposing the matrix
        for(int i = 0; i<size; i++){
            
            for(int j=i; j<size; j++){
                
                // Simple swapping algorithm
                
                int temp = matrix[i][j];
                
                matrix[i][j] = matrix[j][i];
                
                matrix[j][i] = temp;
            }
        }
        
        //Reversing the Matrix
        //You can simply use reverse(matrix[i].begin(), matrix[i].end()) inside for loop also
        for(int row = 0; row<size; row++){
            
            int left = 0, right = size-1;
            
            while(left<right){
                
                int temp = matrix[row][left];
                
                matrix[row][left] = matrix[row][right];
                
                matrix[row][right] = temp;
                
                left++;
                right--;
            }
        }
            
    }
        
};