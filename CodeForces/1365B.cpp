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

bool isSorted(int a[], int n){
	for(int i=1; i<n; i++){
		if(a[i]<a[i-1]){
			return false;
		}
	}
	return true;
}

string solve(){
	int n;
	cin >> n;
	int a[n],b[n];
	bool diff=false;
	for(int i=0; i<n ;i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		cin >> b[i];
		if(i!=0){
			if(b[i]!=b[i-1]){
				diff=true;
			}
		}
	}
	if(isSorted(a,n)){
		return "Yes";
	}
	else{
		if(diff){
			return "Yes";
		}
		return "No";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	cout << solve() << endl;
	}
    
}

