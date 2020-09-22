#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    	int n,m;
    	cin >> n >>m;
    	if(n<=2){
    		cout<<m<<endl;
		}
		else{
			cout<<2*m<<endl;
		}
	}
}

