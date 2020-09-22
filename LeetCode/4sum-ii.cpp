/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int solve(vector<int> A, vector<int> B, vector<int> C, vector<int> D){
	
	unordered_map<int,int> hash1;
	unordered_map<int,int> hash2;
	int sum;
	for(auto i : A){
		for(auto j : B){
			sum = i+j;
			hash1[sum]++;
		}
	}
	
	
	int count=0;
	
	for(auto i : C){
		for(auto j : D){
			sum = i+j;
			if(hash1[0-sum]!=0) count+=hash1[0-sum];
		}
	}
	return count;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    vector<int> A =  {-1,-1};
    vector<int> B = {-1,1};
    vector<int> C = {-1,1};
    vector<int> D = {1,-1};
    cout << solve(A,B,C,D)<<endl;
    
}

