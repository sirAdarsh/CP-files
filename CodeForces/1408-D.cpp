/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define int long long
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

vector<pair<int,int>> A(2005),B(2005);

bool check(int n, int m, int mid){
	
	int sum = mid;
	
	vector<pair<int,int>> vecA(2005),vecB(2005);
	
	for(int rt=0; rt<=sum; rt++){
		
		int up = sum-rt;
		
		for(int i=0; i<n; i++){
			vecA[i].first = (A[i].first)+rt;
			vecA[i].second = (A[i].second)+up;
		}
		
		bool pre=true;
		
			for(int i=0; i<n; i++){
				
				if(B[i].first>=vecA[i].first && B[i].second>=vecB[i].second){
					pre=false;
				}
			}
		
		if(pre){
			return true;
		}
	}
	
	return false;
	
}

int_32 main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,m;
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
    	int a,b;
    	cin >> a >> b;
    	A[i]={a,b};
	}
	for(int i=0; i<m; i++){
    	int a,b;
    	cin >> a >> b;
    	B[i]={a,b};
	}
	
	int lo=0, hi=2000;
	
	int mid;
	
	int ans=INT_MAX;
	
	while(lo<=hi){
		
		mid = (lo+hi)/2;
		
		if(check(n,m,mid)){
			hi--;
			ans = min(ans,mid);
		}
		else{
			lo++;
		}
		
	}
    
    cout << ans << endl;
    
}

