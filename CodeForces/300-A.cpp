/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

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
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	vector<int> a,b,c;
	sort(arr,arr+n);
	
	a.pb(arr[0]);
	bool counter=true;
	int neg=0;
	for(int i=1; i<n; i++){
		if(arr[i]==0){
			counter=false;
			continue;
		}
		if(counter)neg++;
		b.pb(arr[i]);
	}
    c.pb(0);
    if(neg%2){
    	int q=*b.begin();
    	b.erase(b.begin());
    	c.pb(q);
	}
    
	
	cout<<a.size()<<' ';
    for(auto i:a){
    	cout << i<<' ';
	}
	cout << endl;
	cout<<b.size()<<' ';
	for(auto i:b){
		cout << i << ' ';
	}
	cout << endl;
	cout<<c.size()<<' ';
	for(auto i:c){
		cout << i << ' ';
	}
}

