class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<std::array<int, 26>, std::vector<std::string>> anagrams;

    for (const auto& str : strs) {
        std::array<int, 26> char_freq{};
        for (char c : str) {
            char_freq[c - 'a']++;
        }
        anagrams[char_freq].push_back(str);
    }
    
    std::vector<std::vector<std::string>> output;
    for (auto& str : anagrams) {
        output.push_back(str.second);
    }


    return output;
    }
};
