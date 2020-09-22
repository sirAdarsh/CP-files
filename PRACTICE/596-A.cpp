/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	int n;
	cin >> n;
	vector<pair<float,float>> pts;
	for(int i=0; i<n; i++){
		float a,b; cin>>a>>b;
		pts.push_back({a,b});
	}   

	if(n==1){
		cout<<-1<<endl;
		return 0;
	}
	if(n==2){
		
		if((pts[0].second-pts[1].second)/(pts[1].first-pts[0].first)==0 || abs((pts[1].first-pts[0].first)/(pts[1].second-pts[0].second)==0)){
			cout << -1 <<endl;
			return 0;
		}
		else{
			cout << ( abs(pts[0].second-pts[1].second)*abs(pts[0].first-pts[1].first) )<<endl;
			return 0;
		}
	}
	sort(pts.begin(),pts.end());
	
	int area;
	area = abs(pts[0].first-pts[2].first)*abs(pts[0].second-pts[1].second);
	area = max( area, (int)(abs(pts[0].first-pts[1].first)*abs(pts[0].second-pts[2].second )));
	cout<<area<<endl;
	return 0;
}

