class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int ch[2] = {0,0};
        for (int i=0; i<n; i++){
            switch(bills[i]){
                case 5:
                    ch[0]++;
                    break;
                case 10:
                    if(ch[0]<1){return false;}
                    ch[0]--;
                    ch[1]++;
                    break;
                case 20:
                    if(ch[1]>0 && ch[0]> 0){
                        ch[1]--;
                        ch[0]--;
                        break;
                    }
                    else if(ch[0]>=3){
                        ch[0]-=3;
                        break;
                    }
                    else return false;
                default:
                    return false;
            }
        }
        return true;
    }
};