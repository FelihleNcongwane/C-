#include <iostream>

using namespace std;

// base class
class mammal 
{
	public: 
     	mammal(int age = 0,int wt = 0):itsAge(age),itsWt(wt){}
		~mammal(){}
	
		//access functions
    	int getAge() const {return itsAge;}
    	int getWt() const {return itsWt;}
    
   		void speak() const{ cout <<"mammal sound!" << endl;}
    	void sleep() const{ cout <<"zzzzzzzzzzzz!"<<endl;}
	
	private:
		int itsAge, itsWt;
};

//derived class
class dog:public mammal
{
	public:
		dog(int age, int wt, string name):
   			mammal(age,wt)
   			{
                  itsName = name;
	  	    }
        
        dog(int age = 0, int wt = 0):mammal(age,wt)
        {
        	  itsName = "";
		}
        ~dog(){ //cout << "Destructor for dog is called: " << getAge() <<endl;	
		}
        
        void speak() const{  cout << "ARF ARF"<<endl;}
        void wagtail() const{ cout <<"wag wag wag"<<endl;}
    private:
	   string itsName;		
};

int main(){
	dog bowser(3, 25, "Bowser");
	
	bowser.speak();
	bowser.mammal::speak();
	bowser.wagtail();
	bowser.sleep();
	return 0;
}
