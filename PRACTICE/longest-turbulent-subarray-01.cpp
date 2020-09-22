/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

vector<int> arr= {9,4,2,10,7,8,8,1,9};

int solve(){
	int n = arr.size();
	if(n==1) return 1;
	int tmp[n-1];
	for(int i=1; i<n; i++){
		if(arr[i]>arr[i-1]){
			tmp[i-1]=1;
		}
		else if(arr[i]<arr[i-1]){
			tmp[i-1]=-1;
		}
		else{
			tmp[i-1]=0;
		}
	}
	
	int max_len=0;
	int cur_len=0;
	int prev=tmp[0];
	
	for(int i=1; i<n-1; i++){
		if(prev*tmp[i]<0){
			cur_len++;
		}
		else{
			cur_len=1;
		}
		prev=tmp[i];
		max_len=max(max_len,cur_len);
	}
	return max_len+1;
}

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cout<<solve();
    
}

