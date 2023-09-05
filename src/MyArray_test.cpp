#include <iostream>
using namespace std;

#include "MyArray.hpp"

void test01()
{
    MyArray<int> arr1(5);
    MyArray<int> arr2(arr2);
}

int main()
{
    std::cout << "Hello world" << std::endl;
    return 0;
}

