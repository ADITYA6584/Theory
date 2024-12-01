/*
Approach
Just travese the starting row and increment it.
Now travese the end column and decrement it.
Now again travese endrow but this time from end to starting column.
Again repeate the same for the starting row from endcolumn to 0;
*/

//This is a very good and more likely asked question in interview
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        int startingrow =0;
        int startingcol = 0;
        int endrow = v.size()-1;    //2
        int endcol = v[0].size()-1; //2
        int total = (endrow+1)*(endcol+1);
        
        cout<<"Total: "<<total<<endl;
        //storing in new vector
        vector <int> ans;
        int count =0;
        while(count<total)
        {
            //Starting Row
            for(int i=startingcol; count<total && i<=endcol;i++)
            {
                ans.push_back(v[startingrow][i]);
                count++;
            }
            startingrow++;

            //Ending col
            for(int i=startingrow; count<total && i<=endrow;i++)
            {
                ans.push_back(v[i][endcol]);
                count++;
            }
            endcol--;

            //Ending row
            for(int i=endcol; count<total && i>=startingcol;i--)
            {
                ans.push_back(v[endrow][i]);
                count++;
            }
            endrow--;

            //Starting row
            for(int i=endrow; count<total && i>=startingrow;i--)
            {
                ans.push_back(v[i][startingcol]);
                count++;
            }
            startingcol++;
        }
        return ans;
    }
};