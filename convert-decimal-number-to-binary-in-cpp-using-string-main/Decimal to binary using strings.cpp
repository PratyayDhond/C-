#include<iostream>
using namespace std;

int main(){
	int no;
	//int binary[20] = {0};
	char str[20] = {};
	
	int temp;
	//string temp;
	cout<<"Enter a decimal Number : ";
	char str0[2] = {'0'};
	char str1[2] = {'1'};
	cin>>no;
	int i; 
	while(no>0){
		temp =no%2;
		no=no/2;
		if(temp == 0){
			strcat(str,str0);
		}
		else{
			strcat(str,str1);
		};
		i++;
	}
	cout<<"Binary number : ";
	
	for(i<sizeof(str);i>=0;i--){
		cout<<str[i];
	}

return 0;
}
