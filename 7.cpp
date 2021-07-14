#include <iostream>
using namespace std;

int main()
{
    // enter no of charactaters in a sentence
    int n;
    cin>>n;
    cin.ignore();
    
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i=0;
    int currLen=0;
    int maxLen=0;
    for(int i=0;i<n;i++){
        if(a[i]== ' ' || a[i]== '\0'){
            if(currLen>maxLen){
                maxLen=currLen;
            }
            currLen=0;
        }
        else{
            currLen++;
        }
        if(a[i]=='\0'){
            break;
        }
        
    }
    
    cout<<maxLen<<endl;
    return 0;
}

// now we have to print the longest word element also we will do it using two pointers



#include <iostream>
using namespace std;

int main()
{
    // enter no of charactaters in a sentence
    int n;
    cin>>n;
    cin.ignore();
    
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i=0;
    int currLen=0;
    int maxLen=0;
    int st=0;
    // starting character of a word
    //starting index of the currLen word
    int maxst=0; 
    // maxst: jiski sabse jyada length hai uska starting character 
    // isliye jaise hi maxlen badi hoti hai currlen se to hum maxst ko value dete hai of st  
    //starting index of the max lem word
    for(int i=0;i<n;i++){
        if(a[i]== ' ' || a[i]== '\0'){
            if(currLen>maxLen){
                maxLen=currLen;
                // jaise hi hume pata chala ki currLen>maxlen aur maxlen ki value currLen ke equal hai isliye 
                // humne maxst ki jo value hogi voh st ke equal ho jayenge
                // maxst isliye lagaya kyunki jiski maxlen hogi vahi pe maxtst vala pointrer hoga
                maxst=st;
            }
            currLen=0;
            st=i+1;//+1 space ke chodne ke liye aur next word pe jaane ke liye 
            // now we will increment st by i 
        }
        else{
            currLen++;
        }
        if(a[i]=='\0'){
            break;
        }
        
    }
    
    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++){
        cout<<a[i+maxst];
    }
    return 0;
}


// for explanation
// https://www.youtube.com/watch?v=TkTgo_7ab0M&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=30