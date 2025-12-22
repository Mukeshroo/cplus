#include<iostream>
using namespace std;

class student{
    public:
    int a,b,c;

    void sum(){
        cout<<"enter the two number";
cin>>a>>b;
c = a+b;
cout<<"add of a+b="<<c;

    }

};


int main(){
    student s;
    s.sum();

    return 0;

}