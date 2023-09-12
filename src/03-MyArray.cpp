#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
     Person(){}
     Person(string name, int age)
     {
         this->m_Name = name;
         this->m_Age = age;
     }
public:
     string m_Name;
     int m_Age;
};

#include "03-MyArray.hpp"

void printArray(MyArray<int> & arr)
{
    for(int i =0; i < arr.getSize(); i++)
    {
        cout << arr[i] << endl;
    }
}

void printPersonArray(MyArray<Person> &arr)
{
    for(int i = 0; i < arr.getSize(); i++)
    {
        cout << "The name is: " << arr[i].m_Name << ", and the age is : " << arr[i].m_Age<< endl;
    }
}

void test01()
{
    MyArray<int> arr1(5);
    // MyArray<int> arr2(arr1);
    // MyArray<int> arr3(100);
    for (int i = 0 ;i < 5; i++)
    {
        arr1.push_Back(i);
    }
    cout << "Pint arr1:" << endl;
    printArray(arr1);
    cout << "The capacity of arr1:" << arr1.getCapacity() << endl;
    cout << "The Size of arr1:" << arr1.getSize() << endl;

    MyArray<int> arr2(arr1);
    arr2.pop_Back();
    printArray(arr1);
    cout << "Pint arr2:" << endl;
    cout << "The capacity of arr2:" << arr2.getCapacity() << endl;
    cout << "The Size of arr2:" << arr2.getSize() << endl;
}


void test02()
{
    MyArray<Person> arr(10);
    Person p1("Tom", 99);
    Person p2("Jack", 48);
    Person p3("xiaoming", 20);
    Person p4("NgkK", 19);
    Person p5("Dacry", 9);

    arr.push_Back(p1);
    arr.push_Back(p2);
    arr.push_Back(p3);
    arr.push_Back(p4);
    arr.push_Back(p5);

    printPersonArray(arr);
    cout << "The capacity of arr:" << arr.getCapacity() << endl;
    cout << "The Size of arr:" << arr.getSize() << endl;

}
int main()
{
    //test01();
    test02();
    return 0;
}

