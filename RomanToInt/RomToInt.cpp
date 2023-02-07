#include "RomToInt.h"

int RomToInt::getExtraValue()
{
    if (s[i] == 'I')
    {
        if (s[i + 1] == 'V')
        {
            i++;
            return 4;
        }
        else if (s[i + 1] == 'X')
        {
            i++;
            return 9;
        }
        else
        {
            return getNormalValue();
        }
    }

    if (s[i] == 'X')
    {
        if (s[i + 1] == 'L')
        {
            i++;
            return 40;
        }
        else if (s[i + 1] == 'C')
        {
            i++;
            return 90;
        }
        else
        {
            return getNormalValue();
        }
    }

    if (s[i] == 'C')
    {
        if (s[i + 1] == 'D')
        {
            i++;
            return 400;
        }
        else if (s[i + 1] == 'M')
        {
            i++;
            return 900;
        }
        else
        {
            return getNormalValue();
        }
    }
    return -9999;
}

int RomToInt::getNormalValue()
{
    for (int j = 0; j < chars.size(); j++)
    {
        if (s[i] == chars[j])
        {
            return vals[j];
        }
    }

    return -99999;
}

bool RomToInt::thisIsExtra()
{
    for (int j = 0; j < extra.size(); j++)
    {
        if (s[i] == extra[j])
        {
            return true;
        }
    }
    return false;
}

int RomToInt::romanToInt(std::string s1) {
    s = s1;
    int res = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (i < s.length() - 1)
        {
            if (thisIsExtra())
            {
                res += getExtraValue();
            }
            else
            {
                res += getNormalValue();
            }
        }
        else if (i == s.length() - 1)
        {
            if (thisIsExtra())
            {
                res += getExtraValue();
                return res;
            }
            else
            {
                res += getNormalValue();
            }

        }
        else if (i == s.length() - 1)
        {
            res += getNormalValue();
        }
    }
    return res;
}
