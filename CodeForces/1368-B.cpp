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
    
    ll n;
    cin >> n;
    string str = "ss";
    
    if(n%2){
    	printf("codeforces");
    	for(int i=0; i<n/2; i++){
    		cout<<str;
		}
	}
	else{
		printf("codeforce");
		for(int i=0; i<n/2; i++){
			cout<<str;
		}
	}
    
	cout<<endl;
    
}

