    #include<iostream>
    using namespace std;
    int main(){
    	int t;
    	cin >> t;
    	while(t--){
    		
    		int n0,n1,n2;
    		cin >> n0>>n1>>n2;
    		
    		int last = -1;
    		
    		if( n2 != 0 )
    		for(int i=0; i<=n2; i++){
    			cout << 1;
    			last = 1;
			}
			
			if(n1!=0){
			
			if( last != -1 )  // this means last is definitely '1'
			{
				int p =1;
				for(int i=0; i<n1; i++){
					if(p%2){
						cout<<0;
						p++;
						last = 0;
					}
					else{
						cout<<1;
						p++;
						last = 1;
					}
				}
			}
			else{
				
				int p = 1;
				for(int i=0; i<=n1; i++){
					if(p%2){
						cout<<0;
						p++;
						last = 0;
					}
					else{
						cout<<1;
						p++;
						last = 1;
					}
				}
				
			}
		}
			
			if(n0!=0){
				if(last == 0){
				
					for(int i=0; i<n0; i++){
						cout<<0;
					}
				
				}else{
					for(int i=0; i<=n0; i++){
						cout<<0;
					}
				}
				}
			cout<<endl;
    		}
    }
