/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

bool isSorted(int arr[], int n){
	for(int i=0; i<n-1; i++){
		if(arr[i] > arr[i+1] ){
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
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int g=0;
    	int a[n],b[n];
    	for(int i=0; i<n; i++){
    		cin >> a[i];
    		b[i]=a[i];
		}
		if(n==1){
			cout<<0<<endl;
			continue;
		}
		sort(b,b+n);
		bool e =false;
		if(isSorted(a,n)){
			cout<<0<<endl;
			e=true;
		}
		
		if(!e)
		{
		
		bool tick=0;
		int sz=0;
		
		for(int i=0; i<n; i++){
			if(a[i]!=b[i]){
				if(!tick) g++;
				tick=true;
				e=true;
				sz++;
				continue;
			}
			if(tick){
				if(a[i]==b[i]){
					tick=false;
				}
			}
		}
		if( g==1 && sz>1){
			cout<<1<<endl;
			continue;
		}
		cout<<2<<endl;
		}
		
		
	}
}

