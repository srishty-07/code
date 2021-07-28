// https://www.youtube.com/watch?v=oSQbwlepoCU&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ
// calculater factorial of the given no using recursion

#include <iostream>

using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    int Prevfact = n * fact(n-1);
    
    return Prevfact;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);

    return 0;
}

// print the nth fibonncai no usinf recursion
// find nth fibonacci no
#include <iostream>

using namespace std;
int fib(int n){
    // bcoz 0th fibonnaci no is 0 and 1th fibonacci no is 1
    if(n==0 || n==1){
        return n;
    }
    
    int Prevsum = fib(n-1) + fib(n-2);
    
    return Prevsum;
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}

