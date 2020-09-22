#include<iostream>#include<cmath>
using namespace std;

    double my_sqrt(double n) {
        double xk = 1;
     
        for(int i = 0; i < 10; ++i) {
            xk = ( xk + n / xk ) / 2;
        }
     
        return xk;
    }
    
    int main(){
    	double k;
    	cin>>k;
    	double a=1+(8*k);
    	cout<<my_sqrt(a);
	}
