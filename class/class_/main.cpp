#include <iostream>
using namespace std;

class Mammal{
	protected:
		int age, weight;
		
	public:
		Mammal(int a, int wt): age(a), weight(wt){};
		~Mammal(){}
		
		//access functions
		void speak() const {cout << "Mammal sound\n";}
		void sleep() const {cout << "Mammal sleep\n";}
};

class Dog: public Mammal{
	public:
		Dog(int a, int wt, string n): Mammal(a, wt) {
			name = n;
		}
		
		Dog(int a, int wt): Mammal(a, wt) {
			name = "";
		}
				
		~Dog(){}
		
		void sleep() const {cout << "zzzzzzzz\n";}
		void speak() const {cout << "Bark bark\n";}
		void wagtail() const {cout << "WagWagWag\n";}
		
		int getAge(){return age;}
		string getName(){return name;}
		int getWeight(){return weight;}
		
	private:
		string name;	
};

class GermanSheperd:public Dog{

	public:
		GermanSheperd(int a, int wt, string n):Dog(a,wt,n){}
};

int main(){
	
	Dog miles(2, 20, "Miles");
	
	cout << "This dogs name is " << miles.getName()	<< endl;
	miles.Mammal::speak();
	miles.sleep();
	miles.wagtail();
	
	GermanSheperd joji(12, 20, "Joji");
	joji.Mammal::sleep();
	return 0;
}
