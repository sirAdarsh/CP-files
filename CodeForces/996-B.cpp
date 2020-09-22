#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    double arr[n+1];
    int min = INT_MAX, ansIndex=-1;
    for(int i=1; i<=n; i++){
    	cin >> arr[i];
    	arr[i] -= (i-1);
    	if(arr[i]<0){
    		arr[i]=0;
		}
		arr[i] = ceil(arr[i]/n);
		if(arr[i]<min){
			min = arr[i];
			ansIndex = i;
		}
	}
	
    cout<<ansIndex<<endl;
}

