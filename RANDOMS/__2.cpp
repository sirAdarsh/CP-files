/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
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
    int arr[n];
    
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
    
    int maxx=0,minn=0;
    
    sort(arr,arr+n);
    
    for(int i=0; i<n; i+=2){
    	int xx;
    	xx = arr[i]^arr[i+1];
    	maxx += xx;
	}
	
	for(int i=0; i<n/2; i++){
		int xx;
		cout << arr[i]<<' ' << arr[n-1-i]<<endl;
		xx = arr[i]^arr[n-1-i];
		minn += xx;
	}
    
    cout << maxx << ' ' << minn << endl;
    
}

