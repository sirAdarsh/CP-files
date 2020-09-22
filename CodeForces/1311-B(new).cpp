/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

bool isSorted(vector<int> arr){
	int n = arr.size();
	
	for(int i=0; i<n-1; i++){
		if( arr[i+1] < arr[i] ){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
   	
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<int> a(n);
		int p[m];
		
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		for(int i=0; i<m; i++){
			cin >> p[i];
		}
		sort(p,p+m);
		
		int l,r;
		l = p[0];
		r = l;
		
		for(int i=0; i<m; i++){
			if(p[i]-r>1){
				sort(a.begin()+l-1, a.begin()+r+1 );
				l = p[i];
				r = l;
			}
			else{	
				r = p[i];
			}
		}
		
		sort(a.begin()+l-1, a.begin()+r+1 );
		
		
		if(isSorted(a)){
			cout << "YES"<<endl;
		}
		else{
			cout << "NO" << endl;
		}
		
	} 
    
}

