class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& word) {

       
    vector<vector<string>> ans ;

    vector<string>key ;


    for(int i = 0;  i<word.size();i++){
        string s = word[i];
        sort(s.begin() , s.end());
        bool found = false ;
        for(int j = 0 ; j<key.size();j++){
            if(s==key[j]){
                ans[j].push_back(word[i]);
                found = true ;
                break ;
            }


        }


            if(!found){
                vector<string>newgroup;
                newgroup.push_back(word[i]);
                key.push_back(s);
                ans.push_back(newgroup);
            }
    }
    return ans ;
    }
};