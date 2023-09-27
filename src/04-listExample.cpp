#include <iostream>
#include <list>
#include <string>

using namespace std;

class Person {
public:
    Person(string name, int age, double height){
        this->_Name = name;
        this->_Age = age;
        this->_Height = height;
    }
public:
    string _Name;
    int _Age;
    double _Height;
};

bool comparePerson(Person &p1, Person &p2)
{
    if (p1._Age == p2._Age){
        return p1._Height > p2._Height;
    } else {
        return p1._Age < p2._Age;
    }
}

void printList(list<Person> &L)
{
    for (list<Person>::iterator it = L.begin(); it != L.end(); it++){
        cout << "Name: " << it->_Name ;
        cout << ", Age: " << it->_Age;
        cout << ", Height: " << it->_Height << endl;
    }
}

void test01(){
    list<Person> L; // Creat list container

    // Perpare data
    Person p1("Tom",  20, 183.2);
    Person p2("Jack", 27, 163.2);
    Person p3("Need", 51, 172.9);
    Person p4("Darcy", 51, 173.0);
    Person p5("Yu", 23, 190.2);
    Person p6("Zhang", 43, 186.6);

    // Insert data
    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);
    L.push_back(p5);
    L.push_back(p6);

    cout << "Before sort:" << endl;
    printList(L);

    cout << "------------------------" << endl;
    cout << "After sort:" << endl;

    L.sort(comparePerson);
    printList(L);
}

int main()
{
    test01();
    return 0;
}

