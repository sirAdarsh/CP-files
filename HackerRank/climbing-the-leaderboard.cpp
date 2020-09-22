/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int binSch(vector<int> &scores, int key, int n){
	
	int l=0, r=n-1;
	int pos=INT_MAX;
	bool e=false;
	while(l<=r){
		int mid = (l+r)/2;
		if(!e)pos=mid;
		if(scores[mid] <= key){
			r--;
			e=true;
		}
		else{
			l++;
		}
	}
	return pos;
}

int solve(int scores[], int alice[], int n, int m){
	
	unordered_map<int,bool> mp;
	vector<int> arr;
	for(int i=0; i<n; i++){
		if(mp[scores[i]]==0){
			arr.push_back(scores[i]);
		}
		mp[scores[i]]=1;
	}
	
	for(int i=0; i<m ;i++){
		int sc;
		sc = alice[i];
		int pos;
		n = arr.size();
		pos = binSch(arr,sc,n);
		if(mp[sc]){
			printf("%d\n",pos);
		}
		else{
			printf("%d\n",pos);
		}
	}
		
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int scores[n];
    for(int i=0; i<n; i++){
    	cin >> scores[i];
	}
	int m;
	cin >> m;
	int alice[m];
	for(int i=0; i<m; i++){
		cin >> alice[i];
	}
	cout << solve(scores,alice,n,m);
}

