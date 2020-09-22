/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	char arr[8][8];
    	for(int i=0; i<8; i++){
    		for(int j=0; j<8; j++){
    			arr[i][j]='.';
			}
		}
		arr[7][7]='O';
		int diff = 64-n;
		bool e =false;
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				if(diff==0){
					e=true;
					break;
				}
				diff--;
				arr[i][j]='X';
			}
			if(e){
				break;
			}
		}
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				cout << arr[i][j];
			}
			cout << endl;
		}
		
	}
    
}

