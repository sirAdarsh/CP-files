/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    unordered_map<int,int> mp;
    for(int i=0; i<6; i++){
    	cin >> t;
    	mp[t]++;
	}
	
	int maxx=0;
	int minn=10;
	for(auto i : mp){
		minn = min(minn,i.second);
		maxx = max(maxx,i.second);
	}
	
	if(maxx==6){
		cout << "Elephant";
	}
	elif(maxx<4){
		cout <<"Alien";
	}
	else{
		if(mp.size()==2){
			if(maxx==4){
				cout<<"Elephant";
			}
			else{
				cout<<"Bear";
			}
		}
		else{
			cout<<"Bear";
		}
	}
	
}

