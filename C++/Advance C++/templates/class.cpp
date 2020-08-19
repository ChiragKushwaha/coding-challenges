#include<iostream>
using namespace std;
// template<class T>
// class Calculator{
//     private:
//         T num1, num2;
//     public:
//         Calculator(T a, T b)
//         {
//             num1 = a;
//             num2 = b;
//         }
//     void display()
//     {
//         cout<<"The values are "<<num1<<" and "<<num2<<endl;
//         cout<<"Addition is :"<<add()<<endl;
//         cout<<"Subtraction is :"<<subtract()<<endl;
//         cout<<"Product is :"<<multiply()<<endl;
//         cout<<"Division is :"<<divide()<<endl;
//     }

//     T add(){
//         return num1 + num2;
//     }
//     T subtract(){
//         return num1 - num2;
//     }
//     T multiply(){
//         return num1 * num2;
//     }
//     T divide(){
//         return num1 / num2;
//     }
// };

// int main()
// {
//     Calculator<int> intCalc(2, 1);
//     Calculator<float> floatCalc(2.4, 2.5);

//     cout<<"Integer value Results :"<<endl;
//     intCalc.display();

//     cout<<endl<<endl<<"Float  value Results :"<<endl;
//     floatCalc.display();
 
// }

// template<typename T>
// void func(T value)
// {
//     const T &ref = value;
//     T *p new T;
//     T temp(23);
// }

// void func(int value)
// {
//     const int& ref = value;
//     int *p = new int ;
//     int temp(23);
// }

// template<int i>
// class A{
// };
// template<double *dp>
// class B{
// };
// template<void (*func)(int)>
// void c(){
// }

// A<3>a3;
// A<sizeof(string)>as;
// double d;
// B<&d>bpd;
// B<NULL> bn;
// void myfunc(int);
// struct MyClass{
//     static void staticfunc();
// };
// int main()
// {
//     c<&myfunc>();
//     c<&MyClass::staticfunc()>;
// }


template<template<typename T>
class ContainerType>
class MyClass
{
    ContainerType<int>
    int Container;
    ContainerType<string>
    stringContainer
};
int main()
{

}