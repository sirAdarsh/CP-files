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
    	cout <<"D";
    	int n;
    	cin >> n;
    	cout <<"p";
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		
		unordered_map<int,int> prime_occurences;
		
		cout <<"ds";
		for(int i=0; i<n; i++){
			
			int num = arr[i];
			cout <<" a";
			for(int j=2; j*j <=num; j++){
				cout <<"b";
				if( num%j == 0 ){
					
					int count = 0;
					while(num%i==0){
						
						num/=j;
						count++;
						cout << 'd';
					}
					
					if(prime_occurences[j] < count ){
						prime_occurences[j]=count;
					}
					
				}
			}
			
		}
		
		for(auto i : prime_occurences){
			cout <<i.first<<" "<<i.second<<endl;
		}
    	
	}
    
}

