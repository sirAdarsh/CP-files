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
int mp[101];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    float n,m;
    cin >> n >> m;
    int max=0;
    
    for(int i=0; i<m; i++){
    	
    	float a;
    	int b;
    	cin >> a >> b;
    	
    	int cur = ceil(a/b);
    	cout <<" cur = "<< cur <<"  " << max << endl;
    	if(cur>max){
    		max=cur;
		}
		if(cur<max && mp[b]==0){
			cout << -1;
			cout << "b = " << b << endl;
			cout << "mp[b] = " << mp[b];
			return 0;
		}
		mp[b]=1;
	}
	
	cout << ceil(n/max);
    
}

