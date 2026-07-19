class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string before = "";
        string middle = "";
        string after = "";

        for (char ch : s) {
            if (ch == y)
                before += ch;
            else if (ch == x)
                after += ch;
            else
                middle += ch;
        }

        return before + middle + after;
    }
};