//This is a very high demand question and very very important for interview.
//It is locked in Leetcode 
//So going to solve it in Geeks for Geeks.

//Code 

/*
Approach ->1

*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
    void solve(vector<vector<int>>&mat,vector<string>&ans,string &path,int i,int j,      
      vector<vector<int>>&vis){
      
      
      int n=mat.size();
      //basecase
      if(i==n-1 && j==n-1)
      {
          
          ans.push_back(path);
          
          return;
      }
     //base case
     if(i>=n || j>=n)
     {
         return;
     }
      
         vis[i][j]=1;
        
    //Up case
      
      if(i-1>=0 && mat[i-1][j]!=0 && !vis[i-1][j]){
      
      path.push_back('U');
 
      solve(mat,ans,path,i-1,j,vis);
      
      path.pop_back();
      
      }
      
      //Down case
      
   if(i+1<n && mat[i+1][j]!=0 && !vis[i+1][j]){
      
      path.push_back('D');
      
      solve(mat,ans,path,i+1,j,vis);
      
      path.pop_back();
      
      }
      
      //Left case
        if(j-1>=0 && mat[i][j-1]!=0 && !vis[i][j-1]){
      
      path.push_back('L');
 
      solve(mat,ans,path,i,j-1,vis);
      path.pop_back();
      
      }
      
      //Right case
      
      if(j+1<n && mat[i][j+1]!=0 && !vis[i][j+1]){
      
      path.push_back('R');
       
      solve(mat,ans,path,i,j+1,vis);
      
      path.pop_back();
      
      }
      
      vis[i][j]=0;
      
    }
    
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
      
      
      int n=mat.size();
      
      if(mat[0][0]==0 || mat[n-1][n-1]==0){
          
          return {"-1"};
      }
      
      vector<string>ans;
      
      string path;
            
      vector<vector<int>>vis(n,vector<int>(n,0));
      
      solve(mat,ans,path,0,0,vis);
      
      return ans;
      
    }
};