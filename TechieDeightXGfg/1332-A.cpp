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
    cin>>t;
    while(t--){
    	ll a,b,c,d;
    	cin>>a>>b>>c>>d;
    	ll x,y,x1,y1,x2,y2;
    	cin>>x>>y>>x1>>y1>>x2>>y2;
    	
    	if( (x2>x1 || (a+b==0)) && (y2>y1 || (c+d==0)) ){
    		cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
    	
	}
    
}

