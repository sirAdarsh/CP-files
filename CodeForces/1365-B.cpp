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
    	bool ch[n];
    	
    	int temp[n];
    	
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
    		temp[i]=arr[i];
		}
		
		for(int i=0; i<n; i++) cin>>ch[i];
		
		
		sort(temp,temp+n);
		int p=0;
		for(int i=0; i<n; i++){
			if(temp[i]==arr[i]){
				p ++ ;
			}
		}
		if(p==n){
			cout <<"Yes"<<endl;
		}
		else{
			
		int cert = false;
		
		for(int i=0; i<n; i++){
			
			bool smallerFound = false;
			
			int sm = arr[i] ;
			
			bool good = false;
			
			int goodIndex;
			
			for(int j=i+1; j<n; j++){
				
				if( arr[j] < arr[i] && arr[j] < sm ){
					
					smallerFound = true;
					
					if( ch[j]!=ch[i] ){
						good = true;
						sm = arr[j];
						goodIndex = j;
					}
					
				}
				
			}
			
			if( smallerFound ){
				
				if(!good){
//					cout<<"Dwdw";
					cout << "No"<<endl;
					cert = true;
					break;
				}
				
				else{
					
					int temp = arr[i];
					arr[i] = arr[goodIndex];
					arr[goodIndex] = temp;
					
					bool tt = ch[goodIndex];
					ch[goodIndex] = ch[i];
					ch[i] = tt;
					
				}
				
			}
			
			
		}
		
    	if( !cert ){
    		
    		int prev = arr[0];
    		
    		bool e = false;
    		for(int i=1; i<n; i++){
    			if( arr[i] < prev ){
    				cout <<"No"<<endl;
    				e = true;
    				break;
				}
				prev= arr[i];
				
			}
			if(!e){
				cout << "Yes"<<endl;
			}
    		
		}
    	    	
    	
	}
}
    
}

