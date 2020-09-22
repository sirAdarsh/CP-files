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
    
    int arr[6]={8,7,2,5,3,1};
    int sum = 10;
    unordered_map<int,int> mp;
    for(auto i : arr){
    	mp[i]++;
	}
	bool e=false;
	for(auto i : arr){
		if(mp[sum-i]!=0){
			cout<<"yes"<<endl;
			e=true;
			break;
		}
	}
	if(!e){
		cout<<"no"<<endl;
	}
    
}

