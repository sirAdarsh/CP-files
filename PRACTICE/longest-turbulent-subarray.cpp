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

vector<int> arr = {9,4,2,10,7,8,8,1,9};

int solve(){
	
	int n = arr.size();
	if(n==1) return 1;
	int max_len=1;
	int cur_len=1;
	
	int prev=arr[0];
	int i;
	int diff;
	int comp=0;
	
	for(i=1; i<n; i++){
		
		diff = arr[i]-arr[i-1];
		if(diff==0){
			cur_len=1;
			comp=diff;
			continue;
		}
		diff = diff/abs(diff);
		
		if(comp!=diff){
			cur_len++;
		}
		else{
			cur_len=2;
		}
		max_len=max(max_len,cur_len);
		comp=diff;
	}
	
	return max_len;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cout << solve()<<endl;
    
}

