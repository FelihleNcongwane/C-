#include <iostream>
#include "Student.cpp"

using namespace std;
	
int main()
{
	int numStudents = 3;
	Student s[3];
	
	Student *s1 = new Student("umut", 42, 4.00);
	Student *s2 = new Student("silas", 25, 3.89);
	Student *s3 = new Student("kofi", 22, 3.00);

    s[0] = *s1;
    s[1] = *s2;
    s[2] = *s3;
    
    for (int i = 0; i < numStudents; i++)
        cout << "Name: " << s[i].getName() <<","
             << " Age: " << s[i].getAge() <<","
             << " GPA: " << s[i].getGPA()
             << endl;
    
    Student sw[numStudents] = {
	    Student("umut2", 42, 4.00),
	    Student("silas2", 25, 3.89),
	    Student("kofi2", 22, 3.00)
	};
       
	 for (int i = 0; i < numStudents; i++)
        cout << "Name: " << sw[i].getName() <<","
             << " Age: " << sw[i].getAge() <<","
             << " GPA: " << sw[i].getGPA()
             << endl;    
   
    delete s1;
    delete s2;
    delete s3;
    
    
	return 0;
}


