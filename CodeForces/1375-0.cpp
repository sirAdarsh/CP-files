/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
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
    	cin >> n;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
    		if(arr[i]<0) arr[i]*=-1;
//    		cout<<arr[i]<<" ";
		}
		for(int i=0; i<n; i++){
			if(i%2==0){
				cout << -1*arr[i]<<" ";
			}
			else{
				cout<<arr[i]<<" ";
			}
		}
		cout << endl;
	}
}

