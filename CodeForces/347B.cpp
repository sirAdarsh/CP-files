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
    
    int n;
    cin >> n;
    int arr[n];
    int mapped=0;
    
    for(int i=0; i<n; i++){
    	cin >> arr[i];
    	if(arr[i]==i){
    		mapped++;
		}
	}
	
		if(mapped==n){
			cout << n << endl;
		}
		else if(mapped==n-2){
			cout << n << endl;
		}
		else{
			bool e = false;
			
			for(int i=0; i<n; i++){
				if(arr[i]!=i){
					if(arr[arr[i]]==i){
						e = true;
						break;
					}
				}
			}
			if(e){
				cout << mapped+2 << endl;
			}
			else{
				cout << mapped+1 << endl;
			}
		}
			
	}
    


