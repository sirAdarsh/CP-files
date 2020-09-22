/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    
    unordered_map<int,int> posIn;
    for(int i=n-1; i>=0; i--){
    	int t; cin>>t;
    	posIn[t]=i;
	}
	int out[n];
	for(int i=n-1; i>=0; i--){
		cin >> out[i];
	}
	int o=posIn[out[0]];
//	cout<<o<<endl;
	int fines=0;
	for(int i=0; i<n; i++){
		if(posIn[out[i]]>=o){
			o=posIn[out[i]];
		}
		else{
			fines++;
		}
	}
	cout << fines << endl;
}

