/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin>>arr[i];
		}
		
		bool e =false;
		for(int i=1; i<n-1; i++){
			if(arr[i]>arr[i-1] && arr[i]>arr[i+1] ){
				cout <<"YES"<<endl;
				cout<<i<<" "<<i+1<<" "<<i+2<<endl;
				e=true;
				break;
			}
		}
		if(!e){
			cout<<"NO"<<endl;
		}
	}
    
}

