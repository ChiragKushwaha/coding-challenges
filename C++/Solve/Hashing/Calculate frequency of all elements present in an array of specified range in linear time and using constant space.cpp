#include <iostream>
using namespace std;

void findFrequency(int A[], int n)
{

    for (int i = 0; i < n; i++) {
        A[A[i] % n] += n;
    }


    for (int i = 0; i < n; i++)
        if (A[i]/n != 0)
            cout<<i<<" appears "<<A[i]/n<<" times\n"<<endl;
    for (int i = 0; i < n; i++)
        A[i] = A[i] % n;
}

int main(void)
{
    int A[] ={ 2, 3, 3, 2, 1 };
    int n = sizeof(A) / sizeof(A[0]);

    findFrequency(A, n);

    return 0;
}