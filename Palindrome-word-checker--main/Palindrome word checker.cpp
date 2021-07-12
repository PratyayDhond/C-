//Roll no. 1907011
#include<iostream>
using namespace std;

class palindrome{
            char str1[20];
            char str2[20];
            int l;
            char *p;
        public:
            void getd();
            void compare();
            void palin(int);
        //  void sd(){cout<<str2;}
};

void palindrome :: getd(){
        cout<<"Enter a word : ";
        cin>>str1;
    
        l = 0;
        p = &str1[0];
        while(*p != '\0'){
            l++;
            p++;
        }
        
    
        for(int i=0;i<l;i++){
            p--;
            str2[i] = *p;
            
if(i==l-1){
                str2[i+1] = '\0';
            }
        }
}

void palindrome :: compare(){
        for(int i=0;i<l;i++){
            if(str1[i] != str2[i]){
                palin(0);
                return;
            }
        }
        palin(1);               
}

void palindrome :: palin(int i){
        if(i==0){
            cout<<"The word "<<str1<<" is not Palindrome"<<endl;
        }
        else{
            cout<<"The word "<<str1<<" is Palindrome"<<endl;
        }
}   

int main(){
        int choice;
        
        do{
            
            palindrome word;
            word.getd();
            word.compare();
            cout<<endl;
            cout<<"Enter 1 to continue : ";
            cin>>choice;
            cin.ignore();
        }while(choice == 1);
        cout<<"Program exitted successfully!";
    
return 0;
}