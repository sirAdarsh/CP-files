/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;
int n;

struct city{
	double x,y,F;
};

unordered_map<string,double> mp;

vector<city> cities(3005);
double solve(int X, int Y, int idx, double dist, double f){
	
	if(idx==n-1){
		dist += sqrt(pow(X-cities[idx].x,2)+pow(Y-cities[idx].y,2));
		f += cities[idx].F;
		return f-dist;
	}
	
	string s1,s2,s3,s4,s5;
	s1=to_string(X);
	s2=to_string(Y);
	s3=to_string(idx);
	s4=to_string(dist);
	s5=to_string(f);
	
	s1 = s1+s2+s3+s4+s5;
	if(mp.find(s1)!=mp.end()){
		return mp[s1];
	}
	
	double a,b;
	
	a = solve(X,Y,idx+1,dist,f);
	b = solve( cities[idx].x, cities[idx].y, idx+1, dist+sqrt(pow(cities[idx].x-X,2)+pow(cities[idx].y-Y,2)), f+cities[idx].F);
	
	double ans=max(a,b);
	mp[s1]=ans;
	return ans;

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> n;
    for(int i=0; i<n; i++){
    	double X,Y,f;
    	cin >> X >> Y >> f;
    	cities[i].x=X;
    	cities[i].y=Y;
    	cities[i].F=f;
	}
	
	printf("%.6f",solve(cities[0].x,cities[0].y,1,0,cities[0].F));
//	cout << solve(cities[0].x,cities[0].y,1,0,cities[0].F); 
	
    
}

