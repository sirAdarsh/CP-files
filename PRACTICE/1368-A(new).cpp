/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int a,b,n;
    	cin >> a >> b >> n;
    	
    	if(a<b) swap(a,b);
    	
    	int s=0;
    	
    	while(max(a,b) <= n ){
    		
    		b += a;
    		if(a<b) swap(a,b);
    		s++;
    		
		}
    	cout << s <<endl;
	}
    
}

