//minimise the maximum difference between the heights
// https://www.youtube.com/watch?v=bXD-ADPo1SI
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        // code here
        // first element
        sort(arr, arr + n);
        int a = arr[0];
        // last element
        int b = arr[n - 1];

        int diff = b - a;
        int maxval, minval;
        int x, y;
        for (int i = 1; i < n; i++)
        {
            //to keep track of largest value ki largest value humesha end main rahe aur max value ,aim vah ivalue ho
            //aur minimum value main bhi
            //eg hum isme har baari 1st elements ke andar k ko add karte hai aur last vale main se subtract to hum
            //yeh check kar rahe hai ki agar hum a ko badha rahe hai i.e a+k matlab min ko badha rahe hai to hume 
            //minimum dekhna hai a+k aur y-k main jab hum y ko decrease karde  
            x = arr[i - 1]; //1st element
            y = arr[i];     //2nd element
            //for y-k>=0 matlab hume negative elements nahi cvhaiye isliye y-k jab >=0 hoga tab hi hume andar jayemge
            if (y - k >= 0)
            {
                //we are checking ki kahi jab hum x+k kar rahe hai kahi voh maximum value to nahi exceed kar raha 
                //max value is b-k kyunki b last element in sorted position to largest humne usme main se k ko - kata
                //ab agar x+k exceed kargaya to hum maxval main x+k le lenge kyunki voh bada hai
                //aisa humesha humara array sorted rahega aur upper bound humesha bada hoga
                maxval = max(b - k, x + k);
                //min(CurrentUpperbound,UpperboundWeAreTryingToAcheive)
                minval = min(a + k, y - k);
                //min(CurrentLowerbound,LowerboundWeAreTryingToAcheive)
                diff = min(diff, maxval - minval);
            }
        }
        return diff;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends