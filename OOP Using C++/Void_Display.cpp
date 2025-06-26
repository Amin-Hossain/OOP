#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
class student {
public :
    int id;
    double gpa;
    void display (){

    cout << id <<"   " << gpa << endl;

    }



};
int main (){
student Amin;
Amin.id = 81;
Amin.gpa = 2.10;
Amin.display ();

student Liana ;
Liana.id = 22 ;
Liana.gpa = 2.58;
Liana.display ();




}
