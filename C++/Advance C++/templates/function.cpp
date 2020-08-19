#include<iostream>
using namespace std;

// template<class T>
// T Large(T n1, T n2)
// {
//     return (n1 > n2) ?n1:n2;
// }
template<typename T>
int compare(const T &value1,const T &value2)
{
    if(value1 < value2) return -1;
    if(value1 > value2) return 1;
    return 0;
}
// int main(){
//     int i, j;
//     float x, y;
//     char a, b;

//     cout<< "Enter two integers :"<<endl;
//     cin>> i>>j;
//     cout<<Large(i,j)<<" is larger"<<endl;

//     cout<<"Enter two floats :"<<endl;
//     cin>>x>>y;
//     cout<<Large(x,y)<<" is larger"<<endl;


//     cout<<"Enter two character :"<<endl;
//     cin>>a>>b;
//     cout<<Large(a,b)<<" is larger"<<endl;


// }
int main()
{
    cout<<compare<int>(10,20)<<endl;
    
}