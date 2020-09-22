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
    
    int m,n;
    cin >> m >> n;
    int a[m];
    for(int i=0; i<m; i++){
    	cin >> a[i];
	}
	sort(a,a+m);
	vector<int> b(n);
	for(int i=0; i<n; i++){
		cin >> t;
		b[i]=t;
	}
	sort(b.begin(),b.end());
	
	int cnt=0;
	
	for(int i=0; i<m; i++){
		
		bool found = false;
		for(auto j=b.begin(); j!=b.end(); j++){
			if( *j >= a[i] ){
				found=true;
				b.erase(j);
				break;
			}
			
		}
		if(!found){
			cnt += (m-i);
			break;
		}
	}
	
    cout << cnt << endl;
}

