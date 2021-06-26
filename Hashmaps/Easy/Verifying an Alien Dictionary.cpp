//https://leetcode.com/problems/verifying-an-alien-dictionary/

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        if (words.size() <= 1) return true; // base case.
        unordered_map<char, int> map;   // store char and alphabet positions in dictionary.
        for (int i = 0; i < order.size(); i++) {
            map[order[i]] = i;
        } 
        bool ans = true;
        for (int i = 0; i < words.size() - 1; i++) {
            string word1 = words[i], word2 = words[i+1];
            int j;
            if(word1==word2)continue;
            for (j = 0; j < word1.size() and j < word2.size(); j++) { // compare character by character.
                if (map[word1[j]] > map[word2[j]]) return false; // wrong order.
                else if (map[word1[j]] < map[word2[j]]) break; // correct order.
            }
            if (j == word2.size()) return false; // word1 is longer than word2
        }
        return ans;
    }
};
