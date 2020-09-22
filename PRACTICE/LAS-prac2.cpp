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

int arr[]={1,-2,6,4,-3,2,-4,-3};

int LAS(){
	int n = sizeof(arr)/sizeof(arr[0]);
	int max_len=1;
	int cur_len=1;
	
	int prev = arr[0];
	
	for(int i=1; i<n; i++){
		if(prev*arr[i]<0){
			cur_len++;
		}
		else{
			cur_len=1;
		}
		prev=arr[i];
		max_len=max(max_len,cur_len);
	}
	return max_len;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cout << LAS() << endl;
    
}

