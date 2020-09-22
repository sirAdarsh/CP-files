/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long  long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int recur(vector<int> A, vector<int> B, vector<int> C, vector<int> D, int rqdSum, int level ){
	
	if(level==4){
		
		if(rqdSum==0) {
			cout <<"here 1"<<endl; return 1;
		}
		cout <<"here 2 "<<endl;
		return 0;
	}
	
	int res=0;
	
	if(level == 0){
		
		for(auto i : A){
			res += recur(A,B,C,D,rqdSum-i,level+1);
		}
		return res;
		
	}
	if(level==1){
		for(auto i : B){
			res = recur(A,B,C,D,rqdSum-i,level+1);
		}
		return res;
	}
	if(level==2){
		for(auto i : C){
			res = recur(A,B,C,D,rqdSum-i, level+1);
		}
		return res;
	}
	if(level=3){
		for(auto i : D){
			res=recur(A,B,C,D,rqdSum-i, level+1);
		}
		return res;
	}
	
}

int solve(vector<int> A, vector<int> B, vector<int> C, vector<int> D){
	
	return recur(A,B,C,D,0,0);
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

