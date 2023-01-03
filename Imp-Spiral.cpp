class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

            vector<int>ans;

        int row=matrix.size(); //no of row
        int col=matrix[0].size();// no of colu use ans row to get size of it we have taken example as 0;

        int count=0; //count print karne liye
        int total =row*col; //total no ofelement
 
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;

 while(count<total){
        //PRINT STARTING ROW
    for (int index= startingCol; count<total && index<=endingCol; index++){
         ans.push_back(matrix[startingRow][index]);
           count++;
             }
        startingRow++;
      
     
        //printing ending column
    for(int index = startingRow ;count<total && index<=endingRow ; index++){
         ans.push_back(matrix[index][endingCol]);
            count++;
     }
     endingCol--;
        
        //print ending row
    for (int index= endingCol;count<total && index>=startingCol; index--){
         ans.push_back(matrix[endingRow][index]);
         count++;
             }
        endingRow--;
     

        //print starting coluomn
          for (int index= endingRow;count<total && index>=startingRow; index--){
         ans.push_back(matrix[index][startingCol]);
         count++;
         
             }
        startingCol++;
      
     }
        return ans;
    }
};