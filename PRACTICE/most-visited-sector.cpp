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
    
    const int n=9;
    int ar[n]={2,1,2,1,2,1,2,1,2};
    int vis[n];
    for(int i=0; i<n; i++){
    	vis[i]=0;
	}
    
    for(int i=1; i<n; i++){
    	for(int j=ar[i-1]-1; j<=ar[i]-1; j=(j+1)%n){
    		vis[j]++;
    		cout << "i - "<<i <<' ';
    		cout << j << endl;
		}
	}

    set<int> st;
    for(auto i : vis){
    	if(i!=0)
    	st.insert(i);
	}
	int maxx=*st.rbegin();
	
	for(int i=0; i<n; i++){
		if(vis[i]==maxx){
			cout << i+1 << ' ';
		}
	}
}

