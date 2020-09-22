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


int pos=0,neg=0;

bool ok(vector<int> &check, int ar[], int n, int mid){
	
	
	
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	
    	int n,x;
    	cin >> n >> x;
    	
    	int ar[n];
    	set<int> st1,st2;
    	
    	for(int i=0; i<n; i++){
    		cin >> ar[i];
    		ar[i]=x-ar[i];
    		if(ar[i]<0)neg++;
    		else pos++;
    		if(ar[i]>0)
    		st1.insert(ar[i]);
    		else st2.insert(ar[i]);
		}
		
		sort(ar,ar+n);
		
		vector<bool> check(n,false);
		
		int lo = 0;
		int hi = 1e9;
		
		int mid;
		
		int ans=INT_MAX;
		
		cout << min(st1.size(),st2.size())<<endl;
//		
//		for(int i=0; i<n; i++){
//			
//			
//			
//			
//		}
		
    	
	}
    
}

