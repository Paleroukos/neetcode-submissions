class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> big;
        for (string s : strs){
            vector<int> count(26, 0); //create an array of 26 zeros. Each 0 represents the number of times a letter appears

            for (char c: s){
                count[c - 'a']++; // find what letter it is by using the binary numbers of each letter. and add 1 for each letter
            }
            string key="";  
            //create the key which is a string its gonna look like this: "1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0," (for eat)
            for (int n: count){
                key+=to_string(n); // for each number it just adds to to the string and after we just add a comma
                key += ',';
            }

            big[key].push_back(s); //add s (the string) to our hashmap
        }
        vector<vector<string>> res; // make the hashmap into a list
        for (auto& p : big) {
            res.push_back(p.second);
        }
        return res;

        
    }
};
