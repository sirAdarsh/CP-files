#include <bits/stdc++.h>  
using namespace std; 
  
// Function for extended Euclidean Algorithm  
int gcdExtended(int a, int b, int *x, int *y)  
{  
    // Base Case  
    if (a == 0)  
    {  
        *x = 0;  
        *y = 1;  
        return b;  
    }  
  
    int x1, y1; // To store results of recursive call  
    int gcd = gcdExtended(b%a, a, &x1, &y1);  
  
    // Update x and y using results of  
    // recursive call  
    *x = y1 - (b/a) * x1;  
    *y = x1;  
    
//    cout<<(*x)<<" "<<(*y)<<endl;
  
    return gcd;  
}  
  
// Driver Code 
int main()  
{  
    int a,b;
    int x,y;
	cin>>a>>b;
	cout<<gcdExtended(a,b,&x,&y)<<endl;
	cout<<x<<" "<<y;
	
	
}  
  
