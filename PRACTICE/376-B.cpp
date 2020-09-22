/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

struct Owe{
	int x;
	int y;
	int c;
};

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,m;
    cin >> n >> m;
    
    int owe[n+2];
    for(int i=0; i<n+2; i++) owe[i]=0;
    
    vector<Owe> owes(m);
    
    for(int i=0; i<m; i++){
    	int x,y,z;
    	cin >> x >> y >> z;
    	
    	owes[i].x = x;
		owes[i].y = y;
		owes[i].c = z; 
		
		owe[x]+=z;
		
	}
	
//	for(int i=1; i<n; i++){
//		cout << owe[i]<<" ";
//	}
//	cout << endl;
	
	int ans = 0;
	
	for(int i=0; i<m; i++){
		
		int a,b;
		
		a = owes[i].c;
		b = owes[i].y;
//		cout << a <<" "<<b<<endl;
//		cout <<endl;
		
		ans +=  a-owe[b];
		cout << a<<"    "<<owe[b]<<endl;
//		cout<<a<<" "<< owe[b] <<endl;
//		ans += ( a -  );
		
	}
    cout << ans << endl;
}

