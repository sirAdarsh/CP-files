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
    	
    	unordered_map<int,int> x,y;
    	int ax,ay;
    	bool bax=false, bay=false;
    	int xx,yy;
    	vector<pair<int,int>> vec;
    	int times = (4*n)-1;
    	while(times--){
    		cin >> xx >> yy;
    		vec.push_back({xx,yy});
    		x[xx]++; y[yy]++;
		}
		for(auto i : vec){
			
			int X,Y;
			X = i.first; Y = i.second;
			x[X]--; y[Y]--;
			if(x[X]==0){
				ax = X;
				bax=true;
			}
			if(y[Y]==0){
				ay = Y;
				bay = true;
			}
			if(bay && bax){
				break;
			}
			x[X]++; y[Y]++;
		}
		cout << ax <<" "<<ay<<endl;
	}
    
}

