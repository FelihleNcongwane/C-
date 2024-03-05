#include <iostream>
using namespace std;

class Student{
	
    private:
    	std::string name;
    	int age;
    	double GPA;
    public:
    	Student(std::string n, int s, double g):name(n),age(s),GPA(g){
		}
		Student(){
		}
    	
    	std::string getName(){
    		return name;
		}
		
		
		int getAge(){
			return age;
		}
		
		double getGPA(){
			return GPA;
		}
};
