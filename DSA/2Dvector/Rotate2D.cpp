//This is one of the most important Quetion

/*
Best Way to Solve :-

1) Transpose the matrix
2) Reverse the matrix 

*/


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int end = matrix.size(); //3
        
        //Transpose the matrix
        for(int i =0;i<end;i++)
        {
            for(int j= i+1;j<end;j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //Reverse the matrix 
        for(int i=0;i<end;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;