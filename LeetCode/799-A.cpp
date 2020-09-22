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
    
    int k,t,d;
    float n;
    cin >> n >> t >> k >> d;
    int with, without=d;
    
    int one = ceil(n/k);
    
    with = one*t;
    
    int p =  (int)(d/t);
    n = n - (p*k);
    
    // without 
    float n2 = ceil(n/2);
    one = ceil(n2/k);
    
    
    without +=(one*t);
    
    
    if(without<with){
    	cout <<"YES"<<endl;
    }
    else{
    	cout << "NO"<<endl;
	}
}

