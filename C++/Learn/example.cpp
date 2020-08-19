#include <iostream>
#include <iterator>
#include <exception>
#include <vector>
#include <algorithm>
using namespace std;
// void print (initializer_list<int> vals)
// {
// for (auto p=vals.begin(); p!=vals.end(); ++p) { // process a list of values
// std::cout << *p << "\n";
// }
// }
// class P
// {
//     public:
//         P(int a, int b) {
//             cout<<"int int"<<endl;
//         }
//         explicit P(int a, int b, int c) {
//             cout<<"int int int"<<endl;
//     }
// };
// void fp(const P&){
//     cout<<"fp"<<endl;
// }
template <typename T>
void printElements (const T& coll)
{
for (const auto& elem : coll) {
cout << elem << endl;
}
}
int main(){
    vector<int> val ={2,4,5,5,6,6,7,8,8,8,8};
    printElements(val);
    // print({2,4,5,5,6,6,7,8,8,8,8,});
    
    
// fp({47,11}); // OK, implicit conversion of {47,11} into P
// fp({47,11,3}); // ERROR due to explicit
// fp(P{47,11}); // OK, explicit conversion of {47,11} into P
// fp(P{47,11,3}); // OK, explicit conversion of {47,11,3} into P
//     P x(77,5); // OK
//     P y{77,5}; // OK
//     P z {77,5,42}; // OK
//     P v = {77,5}; // OK (implicit type conversion allowed)
    // try{
    //     P w ={77,5,42}; // ERROR due to explicit (no implicit type conversion allowed)
    // }
    // catch(exception e){
    //     cout<<e.what()<<endl;
    // }
    return 0;
}

// class P
// {
// public:
// P(int,int){cout<<"P int int "<<endl;}
// P(std::initializer_list<int>){cout<<"P initializer_list"<<endl;}
// };

// P p(77,5); // calls P::P(int,int)
// P q{77,5}; // calls P::P(initializer_list)
// P r{77,5,42}; // calls P::P(initializer_list)
// P s = {77,5};// calls P::P(initializer_list)


