class Solution {
public:
    vector<string> cellsInRange(string s) {
        // Number of columns =>m , Number of rows =>n 
        int m=(s[3]-s[0]+1),n=(s[4]-s[1]+1); 
        vector<string> res(m*n); //Need to return in 1D form
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                // n*i+j => Representation of 2D indices i,j in 1D form
                res[n*i+j]=(char)(s[0]+i)+to_string(s[1]-'0'+j);
            }
        }
        return res;
    }
};