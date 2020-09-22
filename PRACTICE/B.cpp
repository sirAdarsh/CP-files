/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;
char ch[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
string s;
int t;

int maxThree(int a, int b, int c){
	a = max(a,b);
	return max(a,c);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		int  c =0;
		for(int i=0; i<=n; i++){
			c = c%26;
			int p;
			if(i==0){
				p = max(1,arr[i]);
				c = c%26;
				for(int j=0; j<p; j++){
					cout<<ch[c];
				}
			}
			else{
				if(i==n){
					if(arr[i-1]==0){
						c++;
					}
					p = max(1,arr[i-1]);
					c = c%26;
					for(int j=0; j<p; j++){
						cout<<ch[c];
					}
				}
				else{
					if(arr[i-1]==0){
						c++;
					}
					c= c%26;
					p = maxThree(1,arr[i],arr[i-1]);
					for(int j=0; j<p; j++){
						cout<<ch[c];
					}
				}
				
			}
			cout << endl;
		}
		
	}
    
}

