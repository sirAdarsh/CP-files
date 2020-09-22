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
    int n;
    cin >> n;
    char arr[n][n];
    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		cin >> arr[i][j];
		}
	}
	char ch0 = arr[0][0];
	char ch1 =arr[0][1];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			
			if(i==j || (i+j)==n-1){
				if(arr[i][j]!=ch0){
					cout <<"NO";
					return 0;
				}
			}
			else{
				if(arr[i][j]!=ch1){
					cout<<"NO";
					return 0;
				}
			}
		}
	}
		
	cout <<"YES"<<endl;
	
}

