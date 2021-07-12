#include<iostream>
using namespace std;

int main(){
	long long int no;
	long long int binary[20] = {0};
	int temp;
	cin>>no;
	cout<<"Inputted decimal number : "<<no<<endl;
	int i = 0; 
	int count=0,max=0;

	while(no>0){
		temp = no%2;
		no=no/2;		
		binary[i] = temp;
		i++;
	}
	int j = 0;
	while(j<i){
		
		if(binary[j]!=0){
			count++;
			if(count>=max)
				max = count;
		}
		else{
			count = 0;
		}
	j++;
	}
	cout<<"Binary number : ";
	for(;i>=0;i--){
		cout<<binary[i];
	}
	cout<<endl;
	cout<<"No. of max consecutive one's : "<<max<<endl;
return 0;
}
