#include <iostream>
#include <string>
#include <set>
bool isPalindrome(std::string& s) {
    std::set <char> se;
    for (char c : s) {
        auto itr = se.find(c);
        if (itr == se.end()) { 
            se.insert(c);
        }  
        else {
            se.erase(itr);
        }
    }
    return se.size() <= 1;
}
int main() {
    std::string s;
    std::cin >> s;
    isPalindrome(s) ? std::cout << "ZA WARUDO TOKI WO TOMARE\n" : std::cout << "JOJO\n";
    system("pause");
    return 0;
}