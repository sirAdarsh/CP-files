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
    
    int n;
    cin >> n;
    
    vector<set<int>> vec;
    
    int sz[n];
    
    for(int i=0;i<n; i++){
    	int m;
    	cin >> m;
    	set<int> tmp;
    	while(m--){
    		int a;
    		cin >> a;
    		tmp.insert(a);
		}
		vec.pb(tmp);
		sz[i]=tmp.size();
	}
	
	for(int i=0; i<n; i++){
		
		bool ok=true;
		
		for(int j=0; j<n; j++){
			
			if(i==j){
				continue;
			}
			
			int syz = sz[j];
			
			for(auto k : vec[i]){
				set<int> se=vec[j];
				if(se.find(k)!=se.end()){
					syz--;
				}
				
			}
			
			if(syz<=0){
				ok=false;
			}
			
		}
		if(!ok){
			cout <<"NO"<<endl;
		}
		else{
			cout <<"YES"<<endl;
		}
	}
    
}

