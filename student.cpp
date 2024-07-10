#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

class Student {
    private:
        unsigned int id;
        string name;
        unsigned int age;

    public:
        Student(unsigned int , string, unsigned int );
        void setId(unsigned int );
        void setName(string);
        void setAge(unsigned int);
        unsigned getId() const;
        string getName() const;
        unsigned getAge() const;
        void displayInfo();
};

Student::Student(unsigned int newId, string newName, unsigned int newAge) 
    : id(newId), name(newName), age(newAge) {}

void Student::setId(unsigned int newId) {
    id = newId;
}

void Student::setName(string newName) {
    name = newName;
}

void Student::setAge(unsigned int newAge) {
    age = newAge;
}

unsigned Student::getId() const {
    return  
}

string Student::getName() const {
    return name;
}

unsigned int Student::getAge() const {
    return this->age;
}

void Student::displayInfo() {
    cout << setw(20) << "Student ID: " << id << endl;
    cout << setw(20) << "Name: " << name << endl;
    cout << setw(20) << "Age: "  << age << endl;
}

class StudentManagementSystem {
    private:
        // Student* students[100];
        vector<Student*> students;

    public:
        void addStudent(unsigned int Id, string name, unsigned int age) {
            Student* studentPtr;
            studentPtr = new Student(Id, name, age);
            students.push_back(studentPtr);
            cout << "Student added successfully." << endl;
        }

        void displayAllStudents() {
            if(students.size() == 0) {
                cout << "No students to display." << endl;
            }
            else {
                for(Student* student: students) {
                    student->displayInfo();
                    cout << endl;
                }

            }
        }

        Student* searchStudent(unsigned int idToSearch) {
            for(Student* student: students) {
                int id = student->getId();
                if(id == idToSearch) {
                    student->displayInfo();
                    return student;
                }
            }
        }

        void deleteStudent(unsigned int Id) {
        for (auto student = students.begin(); student != students.end(); ++student) {
            if ((*student)->getId() == Id) {
                delete *student; // Delete the student object
                students.erase(student); // Remove the pointer from the vector
                cout << "Student with ID " << Id << " deleted successfully." << endl;
                return;
            }
        }
        cout << "Student with ID " << Id << " not found." << endl;
    }

    ~StudentManagementSystem() {
        for(Student* student: students)
            delete student;
    }
};
    
        
int main () {

}