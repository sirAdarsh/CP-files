/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;
int W;

int value[] = {60,100,120};
int weight[] = {10,20,30};

int solve(int W, int pos){
	
	if(W==0 || pos==3 ){
		return 0;
	}
	
	if(W-weight[pos]>=0){
		return max( value[pos]+solve(W-weight[pos],pos+1), solve(W,pos+1) );
	}
	else{
		return solve(W,pos+1);
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    W = 50;
    cout << solve(50,0);
    
}

