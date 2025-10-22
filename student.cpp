
#include "student.h"
using namespace std;

// Function to copy text (for reuse)
void copyName(char dest[], const  char src[]) {
    int i;
    for (i = 0; src[i] != '\0' && i < 29; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

// Default Constructor
student::student() {
    copyName(name, "Unknown");
    age = 0;
    roll_numb = 0;
    gpa = 0.0;
}

// Parameterized Constructor
student::student( const char n[], int a, int r, float g) {
    copyName(name, n);
    age = a;
    roll_numb = r;
    gpa = g;
}

// Setter
void  student::setdata(const char n[], int a, int r, float g) {
    copyName(name, n);
    age = a;
    roll_numb = r;
    gpa = g;
}

// Getters
char* student::getname() {
    return name;
}
int student::getage() {
    return age;
}
int student::getroll_numb() {
    return roll_numb;
}
float student::getgpa() {
    return gpa;
}

// Display Info
void student::displayinfo() {
    cout << "Name: " << name << " | Age: " << age << " | Roll No: " << roll_numb << " | GPA: " << gpa;
}

// Show Grade
void student::show_grades() {
    char grade;
    if (gpa >= 3.7) grade = 'A';
    else if (gpa >= 3.0) grade = 'B';
    else if (gpa >= 2.0) grade = 'C';
    else grade = 'F';

    cout << " | Grade: " << grade << endl;
}

// Destructor
student::~student() {
    cout << "\nDestructor called for " << name << endl;
}