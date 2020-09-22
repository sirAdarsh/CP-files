/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string a,b,c;

bool check(int mov[], int mid, int sz){
	
	c = a;
	for(int i=0; i<mid; i++){
		c[mov[i]-1]='*';
	}
	
	int f=0;
	
	for(int i=0; i<sz; i++){
		if(c[i]==b[f]){
			f++;
		}
		if(f==b.size()){
			return true;
		}
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> a >> b;
    int sz = a.size();
    int mov[sz];
    for(int i=0; i<sz; i++){
    	cin >>mov[i];
	}
	int lo=0; // at LEAST there will be zero deletions
	int hi=sz; // at MOST there will be |sz| number of deletions
	int mid;
	
	// Binary search the maximum value of deletions in 
	// the monotonic search space [lo,hi]
	
	int ans=-1;
	
	while(lo<=hi){
		mid = (lo+hi)/2;
		if(check(mov,mid,sz)){
			ans = max(ans,mid);
			lo = mid+1;
		}
		else{
			hi = mid-1;	
		}
	}
	cout << ans << endl;
}

