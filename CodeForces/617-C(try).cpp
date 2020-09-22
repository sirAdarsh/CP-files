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
        
        int n,x1,y1,x2,y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        
        int a,b;
        
        ll min1 = LLONG_MAX;
        
        ll min2 = LLONG_MAX;
        
        ll r1,r2;
        
        int arr[n][2];
        
        for(int i=0; i<n; i++){
        	cin >> arr[i][0];
        	cin >> arr[i][1];
    	}
    	
        
        for(int i=0; i<n; i++){
        	
        	ll d = ((arr[i][0]-x1)*(arr[i][0]-x1)) + ((arr[i][1]-y1)*(arr[i][1]-y1));
        	r1 = d;
        	r2 = 0;
        	
        	ll tm = LLONG_MAX;
        	
        	for(int j=1; j<n; j++){
        		
        		ll d1 = ((arr[j][0]-x1)*(arr[j][0]-x1)) + ((arr[j][1]-y1)*(arr[j][1]-y1));
        		
        		if(d1 > r1){
        			if( d1 > r2 ){
        				r2 = ( (arr[j][0]-x2)*(arr[j][0]-x2) )+((arr[j][1]-y2)*(arr[j][1]-y2));
					}
				}
				tm= min(r1+r2, tm);
        		
			}
			cout<<"tm = "<<tm<<endl;
			cout <<"r1 = "<<r1 <<"  r2= "<<r2<<endl;
			min1 = min( min1, r1+r2 );
			
		
		
	        d = ((arr[i][0]-x2)*(arr[i][0]-x2)) + ((arr[i][1]-y2)*(arr[i][1]-y2));
	       	r1 = d;
	       	r2 = 0;
	        	
	       	for(int j=1; j<n; j++){
	       		
	       		ll d1 = ((arr[j][0]-x2)*(arr[j][0]-x2)) + ((arr[j][1]-y2)*(arr[j][1]-y2));
	        		
	       		if(d1 > r1){
	       			if( d1 > r2 ){
	       				r2 = d1;
					}
				}
	        		
			}
			
			min2 = min(min2, r1+r2);
			cout<<"min2 ="<<min2<<endl;
		}
	    
	     min2 = min(min2, min1);
	     cout <<min2<<endl;
		    
    }
