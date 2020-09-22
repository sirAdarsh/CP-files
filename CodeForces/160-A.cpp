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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    int arr[n];
    int total = 0;
    for(int i=0; i<n; i++){
    	cin>>arr[i];
    	total+=arr[i];
	}
	int coins=0;
	sort(arr,arr+n,greater<>());
	int pre=0;
	for(int i=0; i<n; i++){
		pre += arr[i];
		if(pre>total-pre){
			cout<<i+1;
			return 0;
		}
	}
    
}

