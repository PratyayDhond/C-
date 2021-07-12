# using-destructor-to-destroy-object-created-at-runtime
Using new to create object using constructor and using delete to destroy the object using destructor


sample is a class with public data members.

Pointer : 
    
    student *p;


constructor :   
      
       sample()  
		  .{       
		  	p = new student;  
		  	getdata();  
	  	}
    
    
destructor : 

      ~sample(){
			delete p;
			cout<<"The object has been deleted successfully";
		}    
		
