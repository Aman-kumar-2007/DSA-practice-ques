1class MedianFinder {
2public:
3    priority_queue<int> maxHeap;
4    priority_queue<int, vector<int>, greater<int>> minHeap;
5    int median = 0;
6    MedianFinder() {}
7
8    void addNum(int num) {
9        if (minHeap.size() == 0 || num < maxHeap.top()) {
10            maxHeap.push(num);
11        } else {
12            minHeap.push(num);
13        }
14
15        if (maxHeap.size() >= 2 + minHeap.size()) {
16            minHeap.push(maxHeap.top());
17            maxHeap.pop();
18        }
19
20        if (minHeap.size() >= 2 + maxHeap.size()) {
21            maxHeap.push(minHeap.top());
22            minHeap.pop();
23        }
24    }
25
26    double findMedian() {
27        if (minHeap.size() > maxHeap.size()) {
28            return (double)minHeap.top();
29        } else if(minHeap.size() == maxHeap.size()){
30            double a = (maxHeap.top() + minHeap.top());
31            return a / 2.0;
32        } else {
33          return (double)maxHeap.top();
34        }
35    }
36};