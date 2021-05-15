#include "fun.h"
#include <iostream>
#include <cmath>
using namespace std;

unsigned int faStr1(const char* str)
{

    int i = 0, count = 0;
    bool good;
    while(str[i] != '\0' )
    {
        good =true;
        if (str[i] != ' ')
        {
            while (str[i] != ' ')
            {
                if ((str[i] < 58) && (str[i] > 47))
                {
                    good = false;
                    i++;
                }
                else i++;
            }
            if (!good) count++;
        }
        else i++;
    }
    return count;
}

unsigned int faStr2(const char* str)
{
    int i = 0, count = 0;
    bool good;
    while (str[i] != '\0')
    {
        good = false;
        if (str[i] != ' ')
        {
            if ((str[i] < 91) && (str[i] > 64))
            {
                i++;
                good = true;
                while (str[i] != ' ')
                {
                    if ((str[i] > 122) || (str[i] < 95)) good = false;
                    i++;
                }
                if (!good) count++;
            }
            else i++;
        }
        else i++;
    }
    return count;
}


unsigned int faStr3(const char* str)
{
    bool isWord = false;
    int i = 0, countWords = 0, countSymbols = 0, helpwhole;
    bool good; 

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            i++;
            countSymbols++;
            if (str[i + 1] == ' ') countWords++;
        }
        else i++;
    }
    if (countSymbols == 0) return 0;
    else
    {

        helpwhole = int((double)countSymbols / countWords + 0.5);
        return helpwhole; 
    }
}
