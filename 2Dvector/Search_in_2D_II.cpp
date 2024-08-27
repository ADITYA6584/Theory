//This question is to write the most Effective Code to search in 2D matrix

/*
1. Start with row 0 and column = max-1.
2. Compare the target with the element.
3. If target is bigger than the element that means go to second row.
4. If target is lesser than the element that means u need to move to lower value of column.
*/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowIndex = 0;
        int colIndex = col-1;

        //Now checking
        while(rowIndex<row && colIndex>=0)
        {
            int element = matrix[rowIndex][colIndex];

            if(element ==target)
            {
                return true;
            }

            else if(target >element)
            {
                rowIndex++;
            }
            else if(target<element)
            {
                colIndex--;
            }
        }
        return false;
    }
};