#ifndef LZ77_H
#define LZ77_H
#include <string>
#include <algorithm>    
#include <iostream>

class Triple{
    public:
    Triple(int back, int to, char c);
    static Triple from_text(std::string from, int index);   
    static Triple from_raw(std::string data);
    std::string uncompress(std::string sofar);
    void display();
    private:
    int back, to;
    char c;
};

#endif