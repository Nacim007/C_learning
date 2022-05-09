#include <string>
#include <iostream>
using namespace std;

class MyClass{
    public:
    MyClass();
    void myPrint();
    void myAge(int age);
};

/////////////////////////////////////////////////////////

class MyClass2{
    public:
    void myPrint() const;
};

/////////////////////////////////////////////////////////

class MyClass3{
    public:
        MyClass3(int a,int b);
    private:
        int regVar;
        const int constVar;
};

/////////////////////////////////////////////////////////

class Birthday{
    public:
        Birthday(int m,int d,int y)
        : month(m), day(d), year(y) 
        {}
        void printDate(){
            cout << month << "/" << day << "/" << year << endl;
        }
    private:
        int month;
        int day;
        int year;
};

class Person {
    public:
        Person(string n, Birthday b)
        : name(n),bd(b)
        {}
        void printInfo(){
            cout << name << endl;
            bd.printDate();
        }
    private:
        string name;
        Birthday bd;
};

///////////////////////////////////////////////////////////

class FriendClass{
    public:
        FriendClass(){
            regVar = 0;
        }
    private:
        int regVar;

    friend void someFunc(FriendClass &obj);
};

void someFunc(FriendClass &obj){
    obj.regVar = 42;
    cout << obj.regVar << endl;
}

////////////////////////////////////////////////////////////

class ClassPointer{
    public:
        ClassPointer(int a): var(a)
        {}
        void printInfo() {
            cout << "var :" << var <<endl;
            cout << "this-> :" << this->var <<endl;
            cout << "(*this).var :" << (*this).var <<endl;
            }
    private:
        int var;
};