// https://www.youtube.com/watch?v=9rt-hFcXd0M&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ
#include <iostream>
using namespace std;
int countPath(int s,int e){
    // base case when starting point will reach the end i.e s==e
    if(s==e){
        return 1;//1 path hoga na s to e jab dono ek hi hai
    }
    if(s>e){
        return 0;
    }
    
    int count=0;
    // for no of dice 
    for(int i=1;i<=6;i++){
        count += countPath(s+i,e);
    }
    return count;
}
int main()
{
    int s,e;
    cin>>s>>e;
    cout<<countPath(s,e)<<endl;
    return 0;
}
