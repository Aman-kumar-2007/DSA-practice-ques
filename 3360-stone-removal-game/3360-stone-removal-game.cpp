class Solution {
public:
    bool canAliceWin(int n) {
        int a = 10;
        bool ans = true;
        while(a != 0 && n >= a){
            n -= a;
            ans = !ans;
            a--;
        }
        return !ans;
    }
};