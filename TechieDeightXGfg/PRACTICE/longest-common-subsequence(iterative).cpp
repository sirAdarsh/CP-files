/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s1,s2;
    cin >> s1 >> s2;
    int n=s1.length();
    int m=s2.length();
    
    int lookup[n+1][m+1];
    memset(lookup,0,sizeof(lookup));
    
    for(int i=1; i<=n; i++){
    	for(int j=1; j<=m; j++){
    		if(s1[i-1]==s2[j-1]){
    			lookup[i][j] = 1+lookup[i-1][j-1];
			}
			else{
				lookup[i][j] = max(lookup[i-1][j], lookup[i][j-1]);
			}
		}
	}
	cout << lookup[n][m];
    
}

