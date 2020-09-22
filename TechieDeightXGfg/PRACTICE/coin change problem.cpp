/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int solve(int coins[], int S){
	
	if(S==0){
		return 1;
	}
	if(S<0){
		return 0;
	}
	
	int res=0;
	
	for(int i=0; i<4; i++){
		res += solve( coins, S-coins[i] );
	}
	return res;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int coins[]={1,3,5,7};
    int sum = 8;
    
    cout << solve(coins,sum);
    
}

