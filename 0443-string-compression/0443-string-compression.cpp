class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0 ;


        for(int i = 0 ;i<n;i++){
            int count = 0 ;
            char ele = chars[i];

            while(i<n && ele==chars[i]){
                i++;
                count++;
            }
            i--;

            chars[write] = ele ;
            write++;
            
            
            if(count>1){
                string v = to_string(count);

                for(int j = 0 ; j<v.size();j++){
                    chars[write] = v[j];
                    write++;
                   
                }

            }
            
        }
        return write ;
    }
};