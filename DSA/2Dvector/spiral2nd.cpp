
//It is based on the Spiral Print I of Leetcode
/*
There is basically three works that we need to do in this question:
1. generate a n*n size square array
2. then insert the values in spiral mood
3. Then store it in linear array.
*/

#include <iostream>
#include <vector>

using namespace std;

//Function
    void generateMatrix(int n) 
    {
        vector<int> ans;
        int number = 1;
        vector<vector<int>> v(n, vector<int>(n));
        int startingrow = 0;
        int startingcol = 0;
        int endrow = n - 1; // 2
        int endcol = n - 1; // 3
        int total = (endrow + 1) * (endcol + 1);
        int count = 0;
        while (count < total) 
        {
            // Starting Row
            for (int i = startingcol; count < total && i <= endcol; i++) {
                v[startingrow][i] = number;
                number++;
                count++;
            }
            startingrow++;

            // Ending col
            for (int i = startingrow; count < total && i <= endrow; i++) {
                v[i][endcol] = number;
                number++;
                count++;
            }
            endcol--;

            // Ending row
            for (int i = endcol; count < total && i >= startingcol; i--) {
                v[endrow][i] = number;
                number++;
                count++;
            }
            endrow--;

            // Starting row
            for (int i = endrow; count < total && i >= startingrow; i--) {
                v[i][startingcol] = number;
                number++;
                count++;
            }
            startingcol++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << v[i][j] << " ";
                ans.push_back(v[i][j]);
            }
            cout << endl;
        }
        cout << endl;
        // Showing in it
        for (int& ele : ans) {
            cout << ele << " ";
        }
    
    // return v;
    }

int main()
{
    int num;
    cout<<"Entre the number of row and column:";
    cin>>num;
    generateMatrix(num);
    return 0;
}