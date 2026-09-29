1bool isUgly(int n) {
2  if(n<=0) return false;
3  while(n % 2 == 0) n /= 2;
4  while(n % 3 == 0) n /= 3;
5  while(n % 5 == 0) n /= 5;
6  return n==1;
7}