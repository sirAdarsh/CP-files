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
	cin >> m>> n;
	vector<int> pre(m+1,0);
	vector<int> last(m+1);
	
	for(int i=0; i<m; i++){
		
		pre[i+1]=pre[i];
		
		for(int j=0; j<n; j++){
			cin >> t;
			if(j==n-1){
				last[i+1] = t;
			}
			else{
				pre[i+1]=max(pre[i+1],t);
			}
		}
		
	}
	
	int l=0;
	
	for(int i=0; i<m; i++){
		
		if(pre[i+1]>l){
			l = pre[i+1];
		}
		l += last[i+1];
		cout << l << ' ';
		
	}
    
}

