// check whether an array is sorted or not using recursion

void dec(int n) {
if (n == 1) {
cout << "1" << endl;
return;
}
cout << n << endl;
dec(n - 1);
}
void inc(int n) {
if (n == 1) {
cout << "1" << endl;
return;
}
inc(n - 1);
cout << n << endl;

  
  // sum of n natural no using recursion

#include <iostream>

using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPower = n * power(n,p-1);
    // kyunki power till n will be n*(n^p-1)
    return prevPower;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);

    return 0;
}
  
  
  // sum of n natural no using recursion

#include <iostream>

using namespace std;
int fact(int n){
    if(n==1){
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

