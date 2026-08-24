class Solution {
public:
    bool isBalanced(string num) {
        int sumodd=0;
        int sumeven=0;
        for(int i=0;i<num.size();i++)
        {
            if(i%2==0)
            {
                sumeven+=num[i]-'0';
            }
            else
            {
                sumodd+=num[i]-'0';
            }
        }
        if(sumeven==sumodd)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};