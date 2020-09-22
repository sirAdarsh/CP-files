/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

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
    cin >> n >> t;
    
    vector<int> arr(n+1);
    arr[0] = 0;
    for(int i=1;i<n+1; i++ ){
    	cin >> arr[i];
    	arr[i] += arr[i-1];
	}
	int max = 0;
	int cur;
	for(int i=1; i<n+1; i++){
		auto it = upper_bound(arr.begin()+i,arr.end(),arr[i-1]+t);
		if(it==arr.end()){
			cur = n+1-i;
		}
		else{
			cur = (it-arr.begin()) - i;
		}
		if(cur>max){
			max = cur;
		}
	}
	cout << max << endl;
    
}

