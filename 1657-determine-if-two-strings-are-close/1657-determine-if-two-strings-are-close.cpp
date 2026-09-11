class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()){
            return false ;
        }
    unordered_map<char,int>mp1 ;
    unordered_map<char,int>mp2 ;

    unordered_map<int,int>freq1 ;
    unordered_map<int,int>freq2 ;

    for(int i = 0 ; i<word1.size();i++){
        mp1[word1[i]]++;
        mp2[word2[i]]++; 
    }
    for(auto x : mp1){
        if(mp2.find(x.first)==mp2.end()){
            return false ;
        }
    }

    for(auto x : mp2){
        if(mp1.find(x.first)==mp1.end()){
            return false ;
        }
    }

    for(auto x :mp1){
        freq1[x.second]++;
    }

    for(auto x : mp2){
        freq2[x.second]++;
    }

    return freq1==freq2;

    }
};