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
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	
	int rest = 0;
	
	int prev = -1;
	
	for(int i=0; i<n; i++){
		
		
		if(arr[i]==0){
			prev=-1;
			rest++;
		}
		
		else if(prev!=-1){
			
			if(arr[i]==prev){
				rest++;
				prev=-1;
			}
			
			else if(arr[i]==3){
				if(prev==1){
					prev=2;
				}
				else if(prev==2){
					prev=1;
				}
			}
			
			
			else{
				prev=arr[i];
			}	
		}
		
		else if(prev==-1){
			
			if(arr[i]!=3){
				prev=arr[i];
			}
			
		}
		
	}
	
	cout << rest << endl;
}

