#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
    MyArray(int capacity)
    {
        cout << " Construction function with parameters." << endl;
        this->m_Capacity = capacity;
        this->m_Size = 0;
        this->pAddress = new T[this->m_Capacity]; 
    }

    MyArray(const MyArray& arr)
    {
        cout << " Construction function with Copy." << endl;
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity];

        for(int i = 0; i < this->m_Size ; i++)
        {
            this->pAddress = arr.pAddress[i];
        }
    }

    MyArray& operator=(const MyArray& arr)
    {
        cout << " Recontruct operator = with deep copy." << endl;
        if (this->pAddress != NULL)
        {
            delete [] this->pAddress;
            this->pAddress = NULL;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }

        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity];

        for(int i = 0; i < this->m_Size ; i++)
        {
            this->pAddress = arr.pAddress[i];
        }
        return *this;
    }


    ~MyArray() 
    {
        cout << " Destruction function." << endl;
        if (this->pAddress != NULL)
        {
            delete [] this->pAddress;
            this->pAddress = NUL;
        }
    }

private:
    T * pAddress;
    int m_Capacity;
    int m_Size;

};

