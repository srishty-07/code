// find two unique numbers in an array in which every no except two no are preset twice
#include <iostream>
using namespace std;
int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
    unique(arr, 8);
    return 0;
}


// with explanation

// #include <iostream>
// using namespace std;

// int BitIsSet(int n,int pos){
//     // isme hume voh ssare no return karne hai jinke us pos pe value set hai i.e 1 hai 
//     return ((n & (1 << pos)) != 0);
//     // ab jo us pos pe lement hai (1<<pos) hum uska and karnege n ke saath agar to 1 hoga to return hojayeg avarna nahi 
// }
// void getxor(int a[],int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^a[i];
//     }
//     // xorsum se end main humare pass do ka xor milenga jo bache honge that will be 7(0111) and 5(0101) ka xor
//     // that is equal to 0010 to tempxor main 0010 store karenge last vala find karne ke liye 
    
//     // to get thr righmost set bit
//     int tempxor=xorsum;
//     int setbit=0;
//     int pos=0;
//     // ab yeh whileloop tab tak chalega jab tak hume set bit ki pos nahi mil jati 
//     while(setbit!=1){
//         setbit=xorsum&1;
//         // to sabse pehle humne setbit ko increnent kiya by xorsum&1 kyunki agar to vaha us setbit pe 1 hoga to setbit 1&1=1
//         // ho jayega aur agar 0 hoga to 0&1=0 ho jayega
//         pos++;
//         // fir humne pos++ kiya kyunki vaha pe setbit nahi hai to next pos 
//         xorsum=xorsum>>1;
//         // ab hume yeh pata chal gaya ki setbit nahi thi voh humne pos bhi ++ kardi ab hum rightshift kardenge xorsum ko
//         // that is now 0010 will now become 001 
//         // iske baad dubar loop main check karega aur ab yeh set hai isliye loop se bahar
//     }
//     int newxor=0;
//     for(int i=0;i<n;i++){
//         // ab hume yeh to pata chal gaya ki setbit kidhar hai matlab konse pos pe hai ab hume yeh dekhna ki kon konse element hai 
//         // jinke us particular pois pe 1 hai voh humne BitIsSet function se check karenge
//         // ek ek kar ke hum array ke saare elemnt check karenfe is fnkn ke through
//         if(BitIsSet(a[i],pos-1)){
//             newxor=newxor^a[i];
//             // ab jab hume pata chal gaya ki konse konse elemnt ke us pos pe 1 hai to hum unka xor karte jayenge aur 
//             // fir jo same hinge voh to kat jayenge aur jo bachega usko humne newxor main store kara hua hai 
//         }
//     }
//     cout<<newxor<<endl;
//     // ab hume ek value mil hgayi abh hum is value ko jo hume upar xorsum mila tha un do unique no vali 
//     // value se jo humne tempxor main store kara tha ab hum use xor karenge us ek no ke sath jo hume mila that is
//     // newxor ke saath to fir hume ab dusra unique no bhi mil jaygea
//     int restxor=newxor^tempxor;
//     cout<<restxor<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     getxor(a,n);
//     return 0;
// }
