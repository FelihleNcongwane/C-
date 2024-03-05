/*
* Full Name: Felihle Ncongwane
* Student ID: 80832025
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Student class
class Student {
protected:
    int studentID;
    string name;

public:
    // Constructor for the Student class
    Student(int id, string n) : studentID(id), name(n) {}

    // Getter function for the student's name
    string getName() const {
        return name;
    }

    // Getter function for the student's ID
    int getStudentID() const {
        return studentID;
    }

    // Function to enroll the student in a course
    void enrollCourse(const string& courseName) const {
        cout << name << " (Student ID: " << studentID << ") enrolled in " << courseName << endl;
    }
};

// Course class
class Course {
protected:
    string courseCode;
    string courseName;
    vector<Student> enrolledStudents;

public:
    // Constructor for the Course class
    Course(const string& code, const string& name) : courseCode(code), courseName(name) {}

    // Function to add a student to the course
    void addStudent(const Student& student) {
        enrolledStudents.push_back(student);
    }

    // Function to retrieve and display the course details
    void getCourseDetails() const {
        cout << "Course: " << courseCode << " - " << courseName << endl;
        cout << "Enrolled Students:" << endl;
        for (const auto& student : enrolledStudents) {
            cout << "Student Name: " << student.getName() << endl;
            cout << "Student ID: " << student.getStudentID() << endl;
        }
    }
};

// TeachingAssistant class
class TeachingAssistant {
protected:
    int taID;
    string taName;

public:
    // Constructor for the TeachingAssistant class
    TeachingAssistant(int id, const string& name) : taID(id), taName(name) {}

    // Function to assign a teaching assistant to a course
    void assignTA(const string& courseName) const {
        cout << "Teaching Assistant " << taName << " (ID: " << taID << ") assigned as TA for course " << courseName << endl;
    }
};

// CourseManagement class
class CourseManagement : public Student, public TeachingAssistant {
public:
    // Constructor for the CourseManagement class
    CourseManagement(int studentID, const string& studentName, int taID, const string& taName)
        : Student(studentID, studentName), TeachingAssistant(taID, taName) {}

    // Function to assign a student to a course
    void assignStudentToCourse(const string& courseName) const {
        enrollCourse(courseName);
    }

    // Function to retrieve and display the course details along with the assigned teaching assistant
    void getCourseDetails(const string& courseCode, const string& courseName) const {
        Course course(courseCode, courseName);
        course.addStudent(*this);
        course.getCourseDetails();
        assignTA(courseName);
    }
};

int main() {
    // Creating instances of the CourseManagement class
    CourseManagement student1(80832025, "Felihle Ncongwane", 906788, "Silas Sangmin");
    CourseManagement student2(899822024, "Nokwanda Tokwen", 908345, "Linda Dlathu");

    // Assigning students to their respective courses
    student1.assignStudentToCourse("CS345 - Intermediate Computer Programming(C++)");
    student2.assignStudentToCourse("CS123 - Data Structures and Algorithms(JAVA)");

    // Retrieving and displaying course details
    student1.getCourseDetails("CS345", "Intermediate Computer Programming(C++)");
    student2.getCourseDetails("CS123", "Data Structures and Algorithms(JAVA)");

    return 0;
}
