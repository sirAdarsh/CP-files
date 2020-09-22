#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[6][6];
    for(int i=0; i<6; i++){
    	for(int j=0; j<6; j++){
    		cin >> arr[i][j];
		}
	}
	
	int max_sum = 0;
	
	for(int i=0; i<4; i++){
		
		for(int j =0; j<4; j++){
			
			int sum = 0;
			
			sum += arr[i][j];
			sum += arr[i][j+1];
			sum += arr[i][j+2];
			sum += arr[i+1][j+1];
			sum += arr[i+2][j];
			sum += arr[i+2][j+1];
			sum += arr[i+2][j+2];
			
			if(sum >max_sum){
				max_sum = sum;
			}
			
		}
		
	}
    cout<<max_sum<<endl;
}

