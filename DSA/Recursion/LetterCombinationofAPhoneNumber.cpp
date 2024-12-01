/*
Its a good question related to recursion and backtracking
*/


#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
void solve(string digits,int index, vector <string> mapping, string output , vector <string> &finalans)
{
    //base case
    if(index>=digits.length())
    {
        finalans.push_back(output);
        return ;
    }

    //process
    int number = digits[index]-'0';
    string stringl = mapping[number];
    for(int i=0;i<stringl.length();i++)
    {
        output.push_back(stringl[i]);
        solve(digits,index+1,mapping,output,finalans);
        output.pop_back();                              //Backtracking
    }
}
public:
    vector<string> letterCombinations(string digits) 
    {
        string output;
        vector <string> finalans;
        if(digits.empty()) return finalans;
        vector <string> mapping = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index =0;
        solve(digits ,index, mapping , output , finalans);
        return finalans;
    }
};