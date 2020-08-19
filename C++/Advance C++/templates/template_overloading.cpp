#include<iostream>
using namespace std;
template<class T>
void f(T x, T y)
{
    cout<<"Template"<<endl;
}
void f(int w, int f)
{
    cout<<"Non - Template"<<endl;
}
int main()
{
    f(1,3);
    f('a','b');
    f(1, 'b');
}