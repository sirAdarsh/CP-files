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
	unordered_map<int,int> mp;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
    
    int max=0;
    int maxN=-1;
    
    for(auto i : mp){
    	if(i.second>max){
    		max = i.second;
    		maxN = i.first;
		}
	}
    int del=0;
    for(int i=0; i<n; i++){
    	if(arr[i]!=maxN){
    		del++;
		}
	}
    cout << del;
}

