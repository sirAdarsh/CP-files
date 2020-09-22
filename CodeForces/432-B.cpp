/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int t1,t2;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    
    int teams[n][2];
    
    int home[100009];
    for(int i=1; i<=100009; i++){
    	home[i]=0;
	}
    
    for(int i=0; i<n; i++){
    	cin >> t1 >> t2;
    	teams[i][0]=t1;
    	teams[i][1]=t2;
    	home[t1]++;
	}
	
	int maxAway = 2*(n-1);
    
    int tmp;
    
    for(int i=0; i<n; i++){
    	tmp = maxAway/2;
    	int away = teams[i][1];
    	tmp = tmp - home[away];
    	tmp = max(0,tmp);
    	cout << (maxAway-tmp)<<" "<<tmp<<endl;
	}
    
}

