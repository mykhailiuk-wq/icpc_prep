#include <iostream>

bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t){
        return true;
    } else {
        return false;
    }
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
