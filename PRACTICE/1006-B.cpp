/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

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
    
    int n,k;
    cin >> n >> k;
    
    int idcs[k];
    int arr[n];
    int cpy[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
    	cpy[i]=arr[i];
	}
	
	sort(arr,arr+n,greater<int>());

	unordered_map<int,int> mp;
	int sum=0;

	for(int i=0; i<k; i++){
		mp[arr[i]]++;
		sum+=arr[i];
	}
	cout << sum << endl;
	int sz=0;
	for(int i=0; i<n; i++){
		sz++;
		if(mp[cpy[i]]){
			if(k==1){
				cout<<sz+n-1-i;
				break;
			}
			cout<<sz<<" ";
			sz=0;
			k--;
			mp[cpy[i]]--;
		}
	}
	
	
}

