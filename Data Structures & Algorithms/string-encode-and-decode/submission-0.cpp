class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for (string s : strs)
        {
            int n = s.length();
            encoded += to_string(n);
            encoded += "#";
            encoded += s; 
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        int n = s.length();
        while (i < n)
        {
            string len;
            int j = i;
            while (s[j] != '#')
            {
                len += s[j];
                j++;
            }
            int l = stoi(len);
            string word;
            j++;
            for (int k = 0; k < l; k++)
            {
                word += s[j];
                j++;
            }
            decoded.push_back(word);
            i = j;
        }
        return decoded;
    }
};
