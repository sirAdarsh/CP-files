/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int solve(int n, int r){
	
	int q;
	int ans=0;
	q = r%9;
	if(q>n){
		ans++;
	}
	r/=9;
	ans+=r;
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int l,r,n1,n2;
    	cin >> l >> r >> n1 >> n2;
    	
    	int a,b;
    	a = solve(n1,r);
    	a -= solve(n1,l-1);
    	
    	b = solve(n2,r);
    	b -= solve(n2,l-1);
    	
    	if(a==b){
    		cout<<"Draw"<<endl;
		}
		else if(a>b){
			cout<<"Onkar"<<endl;
		}
		else{
			cout<<"Krushna"<<endl;
		}
    	
	}
    
}

