1class Solution {
2public:
3
4    // Encodes a URL to a shortened URL.
5    map<string,string> mp;
6    int id = 0;
7    string encode(string longUrl) {
8      id++;
9      string shturl = "http://tinyurl.com/" + to_string(id);
10      mp[shturl] = longUrl;
11      return shturl;
12    }
13
14    // Decodes a shortened URL to its original URL.
15    string decode(string shortUrl) {
16        return mp[shortUrl];
17    }
18};
19
20// Your Solution object will be instantiated and called as such:
21// Solution solution;
22// solution.decode(solution.encode(url));