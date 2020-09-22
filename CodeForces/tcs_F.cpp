/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

bool isPalindrome(int i, int j){
	while(i<=j){
		if(s[i]!=s[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> s;
    int n = s.size();
    
    string a,b,c;
    
    for(int i=0; i<n-1; i++){
    	if(isPalindrome(0,i)){
    		for(int j=i+1; j<n-1; j++){
    			if(isPalindrome(i+1,j)){
    				if(isPalindrome(j+1,n-1)){
    					for(int m=0; m<=i; m++){
    						cout << s[m];
						}
						cout << endl;
						for(int m=i+1; m<=j; m++){
							cout << s[m];
						}
						cout << endl;
						for(int m=j+1; m<n; m++){
							cout << s[m];
						}
						return 0;
					}
				}
			}
		}
	}
	cout << "Impossible";
    
}

