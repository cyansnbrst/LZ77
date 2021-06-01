#include <lz77.h>

Triple::Triple(int back, int to, char c){
    this->back = back;
    this->to = to;
    this->c = c;
}

Triple Triple::from_text(std::string from, int index){
    std::string match = from.substr(index, from.length());
    std::string check = from.substr(0, index);
    std::cout << check  << " to " << match << std::endl; 
    int back = 0, to = 0;
    char c = match[0];
    int biggest = 0;
    for(int i = 0; i < std::min(match.length(), check.length()); i++){
        for(int j = biggest; j < index; j++){
            std::cout << check.substr(i, i+j+1)  << "==" << match.substr(0, j+1) << std::endl; 
            if(check.substr(i, i+j) == match.substr(0, j)){
                back = index-i;
                to = j+1;
                c = match[j+1];
                biggest = j;
                if(j == index-1){
                    return Triple(back, to, c); 
                }
            }
        }
    }
    return Triple(back, to, c);
}

void Triple::display(){
    std::cout << "back: " << back << " to: " << to << " c: " << c << std::endl;
}