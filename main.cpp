#include "student.h"

int main() {
    cout << "students detail";

        // Default Constructor
        student s1("maniha", 20, 101, 3.8);
    s1.displayinfo(); s1.show_grades();

    // Parameterized Constructor
    student s2;
    s2.displayinfo(); s2.show_grades();

    // Setter
    student s3;
    s3.setdata("hussniya", 19, 102, 2.9);
    s3.displayinfo(); s3.show_grades();


    return 0;
}