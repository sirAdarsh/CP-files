/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int maxx=INT_MIN;

int solve(int val[], int wt[], int pos, int n, int sum, int W){
	
	if(pos==n){
		return 0;
	}
	if(sum==W){
		return 0;
	}
	if(sum>W){
		return INT_MIN;
	}
	
	int include, exclude;
	include = val[pos]+solve(val, wt, pos+1, n, sum+val[pos], W);
	exclude = solve(val, wt, pos+1, n, sum,W);
	return include+exclude;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int val[]={20,5,10,4015,25};
    int wt[]={1,2,3,8,7,4};
    int w=10;
    
}

