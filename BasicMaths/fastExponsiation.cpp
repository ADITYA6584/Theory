//Here we have used  to calculate the fast exponensiation

/*
Always do in this way:
*/

#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	
	int ans =1;

	while(n>0)
	{
		if(n%2!=0)
		{
			ans = ((long)ans*x)%m;
			n = n-1;
		}
		else
		{
			n  = n/2;
			x = ((long) x*x)%m;
		}
	}
	int finals = ans%m;
	return finals;
}
