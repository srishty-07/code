
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int si = 0;
        int curr =0;
        int net = 0;
        
        for(int i=0;i<cost.length();i++){
            net += cost[i]-gas[i];
            curr += cost[i]-gas[i];
            if(curr<0){
                si = i+1;
                curr = 0;
            }
        }
        if(net < 0){
            return -1;
        }
    }
};
