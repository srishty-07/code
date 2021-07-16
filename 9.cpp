// The c++ algorithm libraries make this really easy to solve. There is a ready made function for each of these steps;

// Find first unsorted element using std::is_sorted_until
// Find first larger element using either std::upper_bound or std::find_if
// Swap the elements using either std::iter_swap or std::swap
// Reverse the range using std::reverse


// 2nd way 
// https://www.youtube.com/watch?v=LuLCLgMElus
// steps are as follows:

// a[i]<a[i+1] store index1
// a[ind2]>a[ind1] store ind2
// swap(a[ind1],a[ind2])
// reverse(begin()+ind1+1,last)


#include<bits/stdc++.h>
#include<vector>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),k,l;
        // pehle humne right se iterate kiya jo bhi num bada hai k+1 se humne uska index store kar liya
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        // agar pura array traverse karne ke baad bhi hume koi no aise nahi mila jo a[i]<a[i+1] hai to matlab voh case decneding ordee ka hai usko directly inverse kardo
        if(k<0){
            reverse(nums.begin(),nums.end());
        }else{
            // aur agar yeh nahi hai to hum ek loop lagayenge jo humne upar index dekha tha usse bada no dekhne ke liye hum iske liye bhi right se iterate karenge aur fir jo bada mila usse usko iske saath swap kardenge
        for(l=n-1;l>k;l--){
            if(nums[l]>nums[k]){
                break;
            }
        }
        // jab hume voh element mil gaya uske baad humne usko swap kar diya 
        swap(nums[k],nums[l]);
        // aur fir uske left main jitne bhi elements hai unko reverse kardiya taki uska next number aye
        reverse(nums.begin()+k+1,nums.end());
        }
    }
};