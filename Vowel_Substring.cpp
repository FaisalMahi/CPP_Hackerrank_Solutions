#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string maxVowelSubstring(const string &s, int k) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int n = s.size();
    
    if (n == 0 || k == 0 || k > n) {
        return "Not found!";
    }

    int maxVowels = 0;
    int currentVowels = 0;
    int startIndex = 0;

    // Initialize the first window
    for (int i = 0; i < k; ++i) {
        if (vowels.count(s[i])) {
            ++currentVowels;
        }
    }
    maxVowels = currentVowels;

    // Slide the window
    for (int i = k; i < n; ++i) {
        if (vowels.count(s[i])) {
            ++currentVowels;
        }
        if (vowels.count(s[i - k])) {
            --currentVowels;
        }
        if (currentVowels > maxVowels) {
            maxVowels = currentVowels;
            startIndex = i - k + 1;
        }
    }

    if (maxVowels == 0) {
        return "Not found!";
    }

    return s.substr(startIndex, k);
}

int main() {
    string s1 ; cin>>s1;
    int k1; cin>>k1;
    cout << maxVowelSubstring(s1, k1) << endl; // Output: "erqii"

    // string s2 = "aeiouia";
    // int k2 = 3;
    // cout << maxVowelSubstring(s2, k2) << endl; // Output: "aei"

    return 0;
}
