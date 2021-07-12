# Palindrome-word-checker-
This program checks whether the inputted word is palindrome or not

  Code used for reversing string:
      
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
          
   Code used for comparing strings:
   
        void palindrome :: compare(){
        for(int i=0;i<l;i++){
            if(str1[i] != str2[i]){
                palin(0);
                return;
              }
           }
        palin(1);               
        }
        
        // 0 and 1 represent false and true respectively.
