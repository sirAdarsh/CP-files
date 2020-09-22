/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int solve(int S[], int n, int N){
	
	if(N==0){
		return 1;
	}
	if(N<0){
		return 0;
	}
	int res=0;
	for(int i=0; i<n; i++){
		res += solve(S,n,N-S[i]);
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int S[]={1,3,5,7};
    int n = sizeof(S)/sizeof(S[0]);
    
    int N = 8;
    cout << solve(S,n,N);
    
}

