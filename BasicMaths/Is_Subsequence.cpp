//This is easy leetcode question

/*
Example: Need to find weather s is a subsequence of T or not:
Input: s = "abc", t = "ahbgdc"
Output: true
*/

//This colud also be solved using Hasharray or hashmap / Two pointers

#include <iostream>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
       int count =0;
        cout<<"S "<<s.length() <<"And "<<t.length()<<endl;
        //If both are of same size that means they are identical 
       if (s.length()==t.length())
        {
            if(s==t)
            return true;
        }

       //if s<=t then
       else if(s.length()<t.length())
       {
        for(int i=0;i<t.length();i++)
        {
            if(t[i] == s[count])
            {
                count++;
            }
        }
        //If found
        if(count ==s.length())
        {
            return true;
        }
       } 

       //If t<s
        else if(t.length()<s.length())
       {
        return false;
       }

    return false;
    }
};