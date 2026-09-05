// This approach depend upon last two stack elements which are lesser than the current element if in stack only one element is present than we skip.

/* 
Approach -->
-> push the element in the stack until curr element is larger than the top element or stack is empty
-> if we found the curr element larger than the top elem we store the top elem(height of the top elem) and pop the element from the stack.
-> now we find the width from the curr element to the top elem
-> and finally calculate the water capacity by min(currHeight - topHeight)-curr )*width;

*/

class Solution{
    public:
        int trap(vector<int>& height){
            int ans = 0;
            stack<int> st;
            for(int i=0;i<height.size();i++){
                while(!st.empty() && height[i]>height[st.top()]){
                    int curr = height[st.top()];
                    st.pop();
                    if(st.empty())
                    break;
                    int width = i-st.top()-1;
                    ans += (min(height[st.top()],height[i])-curr)*width;
                }
                st.push(i);
            }
            return ans;
        }
};

// class Solution{
// public:
//     int trap(vector<int>& height){
//         int n = height.size();
//         vector<int> left(n,0);
//         vector<int> right(n,0);
//         left[0]=height[0];
//         for(int i=1;i<n;i++)
//         {
//             left[i]=max(left[i-1],height[i]);
//         }
//         right[n-1]=height[n-1];
//         for(int i=n-2;i>=0;i--)
//         {
//             right[i]=max(right[i+1],height[i]);
//         }
//         int count=0;
//         for(int i=0;i<n;i++)
//         {
//             count+=(min(left[i],right[i])-height[i]);
//         }
//         return count;
//     }
// };