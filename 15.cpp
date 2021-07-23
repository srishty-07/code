// prime no till n using seive of erantosis
#include <iostream>
using namespace std;

void seive(int n){
    
    cout<<"Prime no are: ";
    
    int prime[100]={0};
    //defining another array and iniitailaisng it with 0 inintiallly and then marking elements acc to their pos
    // as 1 if they are prime
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                // iska matlab hai j i2 se directly start hoga aur voh j=j+i tak sabko 1 mark karta jayega 
                // that is lesss than n uske baad i++ hoga aur dubara se j vala loop chalega
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    seive(n);
    return 0;
}




// SMALLEST PRIME FACTOR

#include <iostream>
using namespace std;
// 20--(/2)-> 10--(/2)-> 5--(/5)-> 1

// ans=  2 5
void seive(int n){
    int spf[n+1]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
        // isme hum initialise kar rahe hai spf(i.e smallest prime factor ko)
    }
    // ab hume spf vala array bana diya ab hume bas kya karna hai smallest prime factor nikalne ke liy ehume 
    // jo bhi no ka spf nikalna hai us no ko uske spf se divide karte jayemge jab tak 1 ni ajata isse jumara nas aa jayega
    // ab spf nikalne ke liye hum dubara se for loop lagayenge jo humne lagaya tha seive of eratomesie ke liye
    
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
        for(int j=i*i;j<=n;j+=i){
            if(spf[j]==j){
                // then we will check ki agar ki jo value spf of j ki hai agar voh j pe hai to humne
                // to hum spf[j] ko i kardenge kyunki j=i*i isliye ab spf[j] main hum i daldenge matlab uska spf
                spf[j]=i;
            }
        }
            
        }
    }
    
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
        // kyunki hume prime factor nikalna hai isliye hume usko spf se divide karte jayenge
    }
}
int main()
{
    int n;
    cin>>n;
    seive(n);
    return 0;
}