#include<bits/stdc++.h> 
using namespace std; 
  
int main() { 
int res; 
// move value to register %eax 
// move value to register %ebx 
// subtracting and storing result in res 
__asm__ ( "movl $20, %%eax;"
                "movl $10, %%ebx;"
                "subl %%ebx, %%eax ":"=a"(res)); 
    cout<<res; 
   return 0; 
}