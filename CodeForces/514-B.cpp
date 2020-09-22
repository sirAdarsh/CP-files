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
    
    float n,x0,y0;
    cin >> n >> x0 >> y0;
    unordered_map<float,int> mp;
    float slope;
    while(n--){
    	int x,y;
    	cin >> x >> y;
    	if(x==x0){
    		mp[MOD]++;
		}
		else{
			slope = ( (y-y0)/(x-x0) );
			mp[slope]++;
		}
	}
    cout << mp.size()<<endl;
    
}

