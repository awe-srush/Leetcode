class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string first = strs[0];
        int n = strs.size();
        string last = strs[n-1];
        int common = min(first.size(), last.size());
        int i = 0;
        while(i<common && (first[i]==last[i]))
            i++;
        return first.substr(0,i);
        }
};