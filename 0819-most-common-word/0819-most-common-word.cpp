class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> count;
        string w, res; int maxFreq = 0;
        for (char &c : p) c = isalpha(c) ? tolower(c) : ' ';
        stringstream s(p);
        while (s >> w) 
            if (!ban.count(w) && ++count[w] > maxFreq) 
                maxFreq = count[w], res = w;      
        return res;
    }
};