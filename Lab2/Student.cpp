/** Full Name: Felihle Ncongwane
 * Student ID: 80832025
*/

#include <iostream>
#include <string>
#include <cstring>

class Student {
private:
    std::string studentId;
    char* fullName;
    int age;

public:
    // Parameterized constructor
    Student(const std::string& id, const char* name, int studentAge) : studentId(id), age(studentAge) {
        fullName = new char[strlen(name) + 1];
        strcpy(fullName, name);
    }

    // Copy constructor
    Student(const Student& other) : studentId(other.studentId), age(other.age) {
        fullName = new char[strlen(other.fullName) + 1];
        strcpy(fullName, other.fullName);
    }

    // Destructor
    ~Student() {
        std::cout << "Student with ID " << studentId << " has been destroyed." << std::endl;
        delete[] fullName;
    }

    // Equality operator overloading
    bool operator==(const Student& other) const {
        return (studentId == other.studentId && age == other.age);
    }
};

int main() {
    // Create an array of pointers to Student objects
    Student* students[3];

    // Allocate memory for each Student object dynamically and initialize them with data
    students[0] = new Student("123", "Smugger", 20);
    students[1] = new Student("123", "Smugger", 20);
    students[2] = new Student("456", "Nono", 22);

    // Use the overloaded equality operator to compare two Student objects
    bool isEqual1 = (*students[0] == *students[1]);
    bool isEqual2 = (*students[1] == *students[2]);

    // Print the results of the equality comparisons
    std::cout << "Students 1 and 2 are " << (isEqual1 ? "equal." : "not equal.") << std::endl;
    std::cout << "Students 2 and 3 are " << (isEqual2 ? "equal." : "not equal.") << std::endl;

    // Deallocate the dynamically allocated memory for the Student objects and delete the pointers
    for (int i = 0; i < 3; i++) {
        delete students[i];
    }

    std::cout << "Memory for Student objects and full names deallocated." << std::endl;

    return 0;
}
