class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res =0;
        for (char ch : columnTitle){
            res = res*26 + (ch + 1 - 'A');
        }
        return res;
    }
};