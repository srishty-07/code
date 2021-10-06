// https://www.youtube.com/watch?v=MiJdgxTWaFs&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=33
// find the particular bit at that position
// GET BIT
#include <iostream>
using namespace std;

int getpos(int n,int pos){
    // & operation and << will automatically convert no into binary digit and will give us bit
    // 1<<pos isliye ki sirf us pos pe 1 hoga jaha pe position given hogi baki pe zero aur for hum 
    // uska and kardenge humare number se and as we know only 1&1=1 rest everthing else we and is 0 so if ans is coming to be 0 that means that we have 0 at that set bit bcoz we have fixed one in the second number when we did 1<<pos
    return((n & (1<<pos))!=0);
   
}
int main()
{
    int n;
    cin>>n;
    int pos;
    cin>>pos;
    cout<<getpos(n,pos)<<endl;

    return 0;
}
// great way
// another way of writing getpos is 
// //  if((n & (1<<pos)==0)){
//         return 0;
//     }
//     else{
//         return 1;
//     }





// 2nd is SET BIT
// isme hume position di hogi aur vaha pe hume bit set karni hai '
// set karne ka matlab hai set 1 
// aur unset kamatlab hai 0
// isme hum or use karenge kyunki
// 0|0=0
// 0|1=1
// 1|0=1
// 1|1=1
#include <iostream>

using namespace std;
int getpos(int n,int pos){
    return((n | (1<<pos)));
}
int main()
{
    int n;
    cin>>n;
    int pos;
    cin>>pos;
    cout<<getpos(n,pos)<<endl;

    return 0;
}


// 3rd is CLEAR BIT 
// matlab jo hume position de rakhi hoti hai uspe hume voh vali bit ko clear bit karna hota hai
// isme hum sabse pehle vahi step 1<<pos jisse jonsi pos se hume voh bit hatana hai usko 1 rest 0 
// ab hum jo ayega 1<<pos se uska hum one's compliment kardenge jisse humare pass jo pos given hai vaha 
// pe 0 hoga aur baki pe 1 jisse ab hum isko main ke saath and kar sakte hai as we know 0 ke saath kisi ka bhi and 
// gives us 0 so hemce that bit gets cleared

// eg n=0101 , pos=2
// 1<<i=0100
// ~0100=1011  that is calculating one's compliment
// 0101&1011=0001


#include <iostream>

using namespace std;
int getpos(int n,int pos){
    int mask=~(1<<pos);
    return(n & mask);
}
int main()
{
    int n;
    cin>>n;
    int pos;
    cin>>pos;
    cout<<getpos(n,pos)<<endl;

    return 0;
}


// 4th is UPDATE BIT
// jo pos hai uski bit update kardo 
// iske andar pehle hum us bit ko clearbit karenge
// and then do setbit vala thing

#include <iostream>

using namespace std;
int updatebit(int n,int pos,int value){
    // pehle humne clear bit kiya using upar vala clear bit vala fnkn
    int mask=~(1<<pos);
    n=n & mask;
    // fir humne set bit kiya using set bit vala cheez bas ab iske andar i ke jagah value dalde jisse hume usko update karna tha
    return(n | (value<<pos));
}
int main()
{
    int n;
    cin>>n;
    int pos;
    cin>>pos;
    int value;
    cin>>value;
    cout<<updatebit(n,pos,value)<<endl;

    return 0;
}
