#include<iostream>
using namespace std;
template<typename T>
struct link{
    T data;
    link * next;
};

template<class T>
class linklist{
    private:
        link<T> * first;
    public:
        linklist()
        {
            first = NULL;
        }
    void additem(T d);
    void display();
};

template<class T>
void linklist<T>::additem(T d)
{
    link<T> *newlink = new link<T>;
    newlink -> data = d;
    newlink->next = first;
    first = newlink;
}
template<class T>
void linklist<T> ::display()
{
    link<T> * current = first;
    while (current != NULL)
    {
        cout<<current->data<<endl;
        current= current->next;
    }
    
}
int main(){

    linklist<int> li;
    li.additem(2);
    li.additem(4);
    li.display();

    linklist<char> lc;
    lc.additem('a');
    lc.additem('b');
    lc.display();

}