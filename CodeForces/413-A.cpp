/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,m,mn,mx;
    cin >> n >> m >> mn >> mx;
    
    int ar[m];
    for(int i=0; i<m; i++)cin>>ar[i];
    
    int p_mn,p_mx;
    p_mn=*min_element(ar,ar+m);
    p_mx=*max_element(ar,ar+m);
    
    if(p_mx>mx){
    	cout<<"Incorrect";
    	return 0;
	}
	if(p_mn<mn){
		cout<<"Incorrect";
		return 0;
	}
	int req=0;
	if(p_mx!=mx){
		req++;
	}
	if(p_mn!=mn){
		req++;
	}
	if(req<=n-m){
		cout<<"Correct";
	}
	else{
		cout<<"Incorrect";
	}
    
}

