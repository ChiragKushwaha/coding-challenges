#include <iostream>
#include <unordered_map>
using namespace std;

string longestPalindrome(string const &str)
{
    unordered_map<char, int> freq;
    for (char ch: str) {
        freq[ch]++;
    }
    char mid_char;
    string left;
    for (auto p: freq)
    {
        cout<<p.first<<" "<<p.second<<" "<<mid_char<<endl;
        char ch = p.first;
        int count = p.second;
        if (count & 1) {
            mid_char = ch;
        }
        left.append(count/2, ch);
    }
    string right(left.rbegin(), left.rend());
    return (left + mid_char + right);
}

int main()
{
    string str = "CABBDABCC";
    cout << "The Longest Palindrome is " << longestPalindrome(str);
    return 0;
}