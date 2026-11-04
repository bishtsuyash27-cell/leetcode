class Solution {
public:
bool isIsomorphic(string &s1, string &s2) {

    if (s1.size() != s2.size()) return false;

    vector<int> mapping(256, -1);
    vector<bool> used(256, false);

    for (int i = 0; i < s1.size(); i++) {

        int u = s1[i];
        int v = s2[i];

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