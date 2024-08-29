//Leetcode question

#include <iostream>
#include <vector>
using namespace std;

//Approach -> 2 Best approach ***********************************************

//This is sieve of eratosthenes  


// Time Complexiy = O(nlog(log(n)))


// class Solution {
// public:
//     int countPrimes(int n) {
//         int cnt = 0;
//         vector <bool> prime(n + 1, true);
//         prime[0] = prime[1] = false;
//         for (int i = 2; i < n; i++) {
//             if (prime[i]) {
//                 cnt++;
//                 for (int j = i * 2; j < n; j = j + i) {
//                     prime[j] = 0;
//                 }
//             }
//         }
//         return cnt;
//     }
// };

//Approach -> 1 but TLE ho rha hai
class Solution {
    private:
    bool isPrime(int n)
    {
        for(int i =2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
public:
    
    int countPrimes(int n) 
    {
       int primecount=0;
    for(int j = 2;j<n;j++)
    {
       if(isPrime(j) ==true)
       {
            primecount++;
       }
    }
    return primecount;
    }
};