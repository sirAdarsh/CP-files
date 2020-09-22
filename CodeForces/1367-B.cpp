/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
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
    	int arr[n];
    	int oddProb=0, evenProb=0;
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
    		if(i%2 && !(arr[i]%2)){
    			oddProb++;
			}
			if(!(i%2) && (arr[i]%2)){
				evenProb++;
			}
		}
		if(evenProb==oddProb){
			cout<<evenProb<<endl;
		}
		else{
			cout<<-1<<endl;
		}
		
	}
}

