#include <lz77.h>

int main(){
    std::string s = "ababcbababaa";
    Triple t(0, 0, s[0]);
    for(int i = 0; i < s.length(); i++){
        std::cout << i << ": " << s.substr(0, i) << std::endl;
        t = Triple::from_text(s, i);
        t.display();
    }
}