/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

bool isSorted(int arr[], int n){
	
	for(int i=0; i<n-1; i++){
		if( arr[i+1] < arr[i] ){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	int m,n;
    	cin >> n >> m;
    	int a[n];
    	int p[m];
    	
    	for(int i=0; i<n; i++){
    		cin >> a[i];
		}
		unordered_map<int,bool> mp;
		
		for(int i=0; i<m; i++){
			cin >> p[i];
			mp[p[i]]++;
		}
		
		bool e =false;
		
		for(int i=n-1; i>0; i--){
			if(a[i] < a[i-1] ){
				cout << i << endl;
				if(mp[i]==0){
					e=true;
					cout << "NO"<<endl;
					break;
				}
				swap(a[i],a[i-1]);
			}
		}
		if(!e){
			cout << "YES"<<endl;
		}
    	
	}
}

