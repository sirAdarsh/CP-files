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
    
    int n,w;
    cin >> n >> w;
    vector<int> v(n);
    int min=0;
    int sm=0;
    for(int i=0; i<n; i++){
    	cin >> t;
    	min += ((t+1)/2);
    	v[i]=t;
    	sm += t;
	}
	
	if(min>w){
		cout<<-1<<endl;
		return 0;
	}
	
	if(sm<w){
		cout << -1 ;
		return 0;
	}
	
	vector<int> ans(n);
	for(int i=0; i<n; i++){
		ans[i] = (v[i]+1)/2;
	}
	
	int rem = w-min;
	
	while(rem){
		
		int maxxIdx=-1;
		int tmp=-1;
		for(int i=0; i<n; i++){
			if(v[i]>tmp && ans[i]!=v[i] ){
				tmp=v[i];
				maxxIdx=i;
			}
		}
		if(tmp==-1){
			cout<<-1;
			return 0;
		}
		else{
			ans[maxxIdx]++;
			rem--;
		}
		
	}
	
	
	
	
	for(int i=0; i<n; i++){
		cout << ans[i] << ' ';
	}
	
}

