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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    while(t--){
    	int n,l;
    	cin >> n >> l;
    	double a[n];
    	for(int i=0; i<n; i++){
    		cin >> a[i];
		}
		
		double velX=1, velY=1;
		
		double posX=0, posY=l;
		
		ll left=0, right=n-1;
		
		double totalTime=0;
		
		while(right>=left){
			
			double tX, tY;
			
			tX = (a[left]-posX)/velX;
			
			tY = (posY-a[right])/velY;
			
			
			
			double time = min(tX,tY);
//			cout << "left - "<<left << ' ' << "right - "<<right << endl;
//			cout << "posX - "<<posX << ' ' << "posY - "<<posY << endl;
//			cout << "tX - "<<tX << ' ' << "tY - "<<tY<< endl;
			
//			cout << time << endl;
			totalTime += time;
//			cout << posX << ' ' << posY << endl;
			
			posX += (velX*time);
			
			posY -= (velY*time);
			
			if(tX<tY){
				velX++;
				left++;
			}
			else if(tY<tX){
				velY++;
				right--;
			}
			else{
				velX++; velY++;
				right--;
				left++;
			}
		}
		
		
		double tmpTime;
		
		
//		cout << endl << posX << ' ' << posY <<endl;
		
		tmpTime = (posY-posX)/(velX+velY);
		totalTime += tmpTime;
		
		printf("%.6f\n",totalTime);
		
	}
}

