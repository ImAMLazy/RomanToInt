#pragma once
#pragma once
#include <vector>
#include <string>

class RomToInt
{
    const std::vector<char> chars = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
    const std::vector<char> extra = { 'I', 'X', 'C' };
    const std::vector<int> vals = { 1, 5, 10, 50, 100, 500, 1000 };

    int i = 0;
    std::string s;

    int getExtraValue();
    int getNormalValue();
    bool thisIsExtra();
public:
    int romanToInt(std::string s1);
};
