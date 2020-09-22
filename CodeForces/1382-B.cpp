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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
    	
    	int count=0;
    	bool turn =0;
    	
    	for(int i=0; i<n-1; i++){
    		if(arr[i]==1){
    			turn = !turn;
			}
			else{
				break;
			}
		}
    	cout << (turn==0?"First":"Second")<<endl;
	}
    
}

