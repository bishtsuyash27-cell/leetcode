class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> groups;
        vector<string> keys;

        for (int i = 0; i < strs.size(); i++) {

            string sortedWord = strs[i];
            sort(sortedWord.begin(), sortedWord.end());

            bool found = false;

            for (int j = 0; j < keys.size(); j++) {

                if (keys[j] == sortedWord) {
                    groups[j].push_back(strs[i]);
                    found = true;
                    break;
                }
            }

            if (!found) {
                keys.push_back(sortedWord);

                vector<string> newGroup;
                newGroup.push_back(strs[i]);

                groups.push_back(newGroup);
            }
        }

        return groups;
    }
};