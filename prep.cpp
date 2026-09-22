#include <iostream>
#include <unordered_map>
#include <unordered_set>

bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t){
        return true;
    } else {
        return false;
    }
}

unordered_map<char, int> getFrequency(string s) {
    unordered_map<char, int> freq;
    unordered_set<char> unique;
    for (char sym : s) {
        if (unique.find(sym) == unique.end()){
            freq[sym]++; 
        } else {
            unique.insert(sym);
            freq[sym] = 0;
        }
    }
    return freq;
}

bool hasDuplicate(vector<int>& nums) {  
  unordered_set<int> unique;
  for (int num : nums) {
    if (unique.find(num) == unique.end()) {
      unique.insert(num);
    } else {
      return true;
    }
   }
   return false;
}

int main(){}
