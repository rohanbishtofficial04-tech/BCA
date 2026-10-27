#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string student_id;
    string name;
    string roll_no;
    int age;

public:
    void input_data() {
        cout << "Enter Student ID: ";
        cin >> student_id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display_data() {
        cout << "Student ID: " << student_id << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Age: " << age << endl;
    }

    static float calculate_average_age(Student students[], int num_students) {
        int total_age = 0;
        for (int i = 0; i < num_students; ++i) {
            total_age += students[i].age;
        }
        return static_cast<float>(total_age) / num_students;
    }
};

int main() {
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    Student* students = new Student[num_students];
    for (int i = 0; i < num_students; ++i) {
        cout << "\nEnter details for student " << i+1 << ":\n";
        students[i].input_data();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < num_students; ++i) {
        students[i].display_data();
        cout << endl;
    }

    float average_age = Student::calculate_average_age(students, num_students);
    cout << "Average Age of Students: " << average_age << endl;

    delete[] students;
    return 0;
}
