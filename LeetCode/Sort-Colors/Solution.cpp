1class Solution {
2    public void sortColors(int[] a) {
3       for(int i=0;i<a.length;i++){
4            for(int j=i+1;j<a.length;j++){
5                if(a[i]>a[j]){
6                    int t=a[i];
7                    a[i]=a[j];
8                    a[j]=t;
9                }
10            }
11        }
12    }
13}