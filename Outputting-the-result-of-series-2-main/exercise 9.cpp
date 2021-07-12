#include<iostream>
#define MAX 1000
using namespace std;

long double factorial(int n){
	long double fact;
	if(n == 1){
		return 1;
	}else{
		fact = n* factorial(n-1); 
	}
	return fact;
}

int main(){
	int n = 100;
	long double fact;
	int i=1;
	long double sum = 0;
	while(i<=MAX){
		long double f = factorial(i);
		long double temp = 1/float(f);
		if(i%2 != 0){
			sum += temp;
		}else{
			sum -= temp;	
		}
		i++;
	}
	
	cout<<sum;
	

return 0;
}
