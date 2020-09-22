/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;
string a,b,c;

bool check(int arr[], int sz, int mid){
	
	// mman lo, mid me humne laaya 4
	// iska mtlb hai 4 elements in the order id the given array arr[] agar remove
	// kre hai to agar string b, attainable hai to TRUE, else FALSE
	
	c = a;
	for(int i=0; i<mid; i++){
		c[arr[i]-1]='*';
	}
	
	int f=0;
	
	for(int i=0; i<a.size(); i++){
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
    int arr[a.size()];
    for(int i=0; i<a.size(); i++){
    	cin >> arr[i];
	}
    
    // bs, we can either remove all elements or none at all
    // so Search Space is confined to 0 -> a.size()
    
    int sz = a.size();
    
    int lo,hi,mid;
    lo = 0; hi = sz;
    int max=0;
    while( lo <= hi ){
    	mid = (lo+hi)/2;
    	if(check(arr,sz,mid)){
    		if(mid>max) max=mid;
    		lo = mid+1;
		}
    	else hi=mid-1;
	}
    cout << max << endl;
}

