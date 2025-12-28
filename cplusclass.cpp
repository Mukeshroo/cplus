#include <iostream>
using namespace std;

class student {
private:
    string name;   
    int roll_no;
    float per;

public:
    void store();
};
     void student::store(){
        cout << "Enter your name, roll number and percentage: " << endl;
        cin >> name >> roll_no >> per;

        cout << "\n--- Student Details ---" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << roll_no << endl;
        cout << "Percentage : " << per << endl;
    }


int main() {
    student s;
    s.store();
    return 0;
}
