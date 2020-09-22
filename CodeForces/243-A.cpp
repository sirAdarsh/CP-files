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
    int prev[20];
    memset(prev,-1,sizeof(prev));
    
    map<int,int> bitmap;
    
    bitmap[-1] = (1<<20)-1;
    int n;
    cin >> n;
    
    set<int> pos;
    
    for(int i=0; i<n; i++){
    	
    	cin >> t;
    	if(t==0){
    		pos.insert(0);
    		continue;
		}
    	
    	bitmap[i]=t;
    	
    	for(int j=0; j<20; j++){
    		if(t & (1<<j)){
    			bitmap[prev[j]] ^= (1<<j);
    			if(bitmap[prev[j]]==0){
    				bitmap.erase(prev[j]);
				}
				prev[j]=i;
			}
		}
		
		int m=0;
		for(auto it=bitmap.rbegin(); it!=bitmap.rend();it++){
			if(it->first==-1){
				continue;
			}
			m|=it->second;
			pos.insert(m);
		}
    	
	}
    cout << pos.size();
}

