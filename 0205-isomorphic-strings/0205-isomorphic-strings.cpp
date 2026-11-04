class Solution {
public:
int getIndex(char c) {

    if (c >= 'a' && c <= 'z') {
        return c - 'a';
    }

    if (c >= '0' && c <= '9') {
        return 26 + (c - '0');
    }

    return -1;
}
    bool isIsomorphic(string s1, string s2) {
       
    if (s1.size() != s2.size()) return false;

    vector<int> mapping(256, -1);
    vector<bool> used(256, false);

    for (int i = 0; i < s1.size(); i++) {

        int u = (unsigned char)s1[i];
        int v = (unsigned char)s2[i];

        if (mapping[u] == -1) {

            if (used[v]) {
                return false;
            }

            mapping[u] = v;
            used[v] = true;
        }

        else if (mapping[u] != v) {
            return false;
        }
    }

    return true;
    }
};