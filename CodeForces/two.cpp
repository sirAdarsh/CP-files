#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	int a,b;
    	cin >> a >> b;
    	if(b%a==0){
    		cout<<1<<endl;
		}
		else{
			cout<<2<<endl;
		}
	}
    
}

