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
    	int n,x;
    	cin>>n>>x;
    	int arr[n];
    	for(int i=0; i<n; i++) cin>> arr[i];
    	sort(arr,arr+n);
    	vector<int> a1,a2;
    	for(int i=0; i<n; i++){
    		if(x%arr[i]==0){
    			a1.push_back(arr[i]);
			}
			else{
				a2.push_back(arr[i]);
			}
		}
		sort(a2.begin(), a2.end(), greater<int>());
		for(auto i : a2){
			a1.push_back(i);
		}
		for(auto i : a1){
			cout << i <<" ";
		}
    	
	}
    
}

