//Just use the binary search in 2D array

/*
this is new thing in this question:

1. How to find the end in 2D matrix.
2. In 2D matrix how to access mid element.

*/

//Time complexity => O(n*m)
//Space Complexity => O(1)
//In this question the matrix is both sorted in left and bottom direction

//Best approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int col = matrix[0].size();

       //Using Binary Search
       int start = 0;
       int end = (row*col)-1;
       int mid = end -(end-start)/2;

       while(start<=end)
       {

        int element = matrix[mid/col][mid%col];

        if(target ==element)
        {
            return true;
        }

        //If target is less than Element
        else if(target<element)
        {
            end = mid-1;
        }

        //If target is less than Element
        else
        {
            start = mid+1;
        }

        mid = end -(end-start)/2;
       } 
       return 0;
    }
};

//My non Effective Approach

/*
1. First create a new vector
2. Insert all the vlaue in it.
3. Now apply Binary Search in it.
*/

//But this code will not be effective as will be using Extra Space