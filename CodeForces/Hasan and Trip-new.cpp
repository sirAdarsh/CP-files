    /*----- || Hare Krishna || -----*/
     
    /*  "WHY DO WE FALL, BRUCE?"  */
     
    //#pragma GCC optimize("Ofast")
    //#pragma GCC target("avx,avx2,fma")
     
    #include<bits/stdc++.h>
    #define ll long long
    #define endl '\n'
    #define elif else if
    #define pb push_back
    #define pf push_front
    #define PI 3.1415926535897932384
    #define MOD 1000000007
    using namespace std;
     
    char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
     
    string s;
    int t;
     
    double dp[3005];
    struct city{
    	double X,Y,F;
    };
     
    vector<city> cities(3005);
     
    int main(){
    	ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
        int n;
        cin >> n;
        for(int i=1; i<n+1; i++){
        	cin >> cities[i].X >> cities[i].Y >> cities[i].F;
    	}
    	
    	for(int i=0; i<3005; i++){
    		dp[i]=-1*1e5;
    	}
    	
    	dp[1]=cities[1].F;
    	
    	for(int i=1; i<=n; i++){
    		
    		for(int j=1; j<i; j++){
    			
    			
    			dp[i] = max( dp[i], dp[j]+cities[i].F- (sqrt(pow(cities[i].X-cities[j].X,2)+pow(cities[i].Y-cities[j].Y,2))));
    		
    		
    		}
    		
    	}
    	printf("%.6f",dp[n]);
    }
