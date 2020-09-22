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

vector<int> arr={4,2,3};

bool check(){
	
	for(int i=0; i<arr.size()-1; i++){
		if(arr[i]>arr[i+1]){
			return false;
		}
	}
	return true;
}

bool solve(){
	int n = arr.size();
	
	for(int i=0; i<n-1; i++){
		int tmp = arr[i];
		if(arr[i]>arr[i+1]){
			arr[i]=arr[i+1];
			if(check()){
				return true;
			}
			arr[i]=tmp;
			arr[i+1]=arr[i];
			if(check()){
				return true;
			}
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cout << solve();
}

