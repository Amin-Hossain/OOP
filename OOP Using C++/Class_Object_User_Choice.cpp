#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class student {
public:
    int id;
    double gpa;
};

int main() {
    // student info
    student Amin;
    Amin.id = 81;
    Amin.gpa = 2.00;

    student Liana;
    Liana.id = 30;
    Liana.gpa = 2.58;

    // user input
    string name;
    cout << "Amin or Liana, which student information do you need? "<<endl;
    cin >> name;
    if (name == "Amin" || name == "amin") {
        cout << setw(10) << "Amin ID :\t" << Amin.id << "Amin CGPA : " << Amin.gpa << endl;
    } else if (name == "Liana" || name == "liana") {
        cout << setw(10) << "Liana ID : \t" << Liana.id << "Liana CGPA : " << Liana.gpa << endl;
    } else {
        cout << "Invalid input. Please type 'Amin' or 'Liana'." << endl;
    }

    getch();
    return 0;
}
