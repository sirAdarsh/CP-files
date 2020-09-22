/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

int minDel ( int i, int j, string s){
	
	if( i >= j ){
		return 0;
	}
	
	
	if( s[i] == s[j] ){
		return minDel( i+1, j-1, s);
	}
	else{
		return min( 1 + minDel(i+1, j,s) , 1 + minDel(i, j-1,s) );
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s;
    cin >> s;
    int n = s.length();
    cout<<minDel(0,n-1,s);
}

