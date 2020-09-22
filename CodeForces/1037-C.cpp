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
    string a,b;
    cin >> a >> b;
    
    int cost=0;
    bool e =false;
    
    for( int i=0; i<n-1; i++ ){
    	if(a[i]!=b[i]){
    		if(a[i+1]!=b[i+1] && a[i]!=a[i+1] ){
    			cost++;
    			if(i+1==n-1) e=true;
    			i++;
			}
			else{
				cost++;
			}
		}
	}
	if(!e){
		if(a[n-1]!=b[n-1]) cost++;
	}
    cout<<cost<<endl;
}

