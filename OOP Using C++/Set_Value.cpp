#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
class student {
public :
    int id;
    double gpa;
    void display (){
    cout << id << "  " <<gpa <<endl;

    }
void set(int a,double b) {
id = a;
gpa = b;
}

};
int main (){
student Amin;
Amin.set(81,2.10);
Amin.display();


student Liana ;
Liana.set (22,2.58);
Liana.display();
getch ();

}
