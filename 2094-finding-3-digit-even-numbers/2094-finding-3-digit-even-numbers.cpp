class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {

    vector<int>freq(10,0);
vector<int>ans ;

    for(int i = 0 ; i<digits.size();i++){
        freq[digits[i]]++;
    }

    for(int i = 100; i<=998;i+=2){

        int a = i/100 ;
        int b = (i/10)%10 ;
        int c = (i%10);

        vector<int>need(10,0);
        need[a]++;
        need[b]++;
        need[c]++;
        bool possible = true ;
        for(int j = 0 ;j<10;j++){
            if(need[j]>freq[j]){
                possible = false ;
            }

        }
        if(possible){
            ans.push_back(i);
        }
    }

return ans ;
    }
};