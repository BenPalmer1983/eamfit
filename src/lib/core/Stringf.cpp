/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Stringf.h"
/*****************************************************************************/



std::string Stringf::upper(std::string string_in)
{
    std::string string_out = string_in;
    for(int i=0; i<string_in.length(); i++)
    {
        int char_int = int(string_in[i]);
        if(char_int >= 97 and char_int <= 122)
        {
            string_out[i] = char(char_int - 32);
        }
    }
    return string_out;
}


std::string Stringf::lower(std::string string_in)
{
    std::string string_out = string_in;
    for(int i=0; i<string_in.length(); i++)
    {
        int char_int = int(string_in[i]);
        if(char_int >= 65 and char_int <= 90)
        {
            string_out[i] = char(char_int + 32);
        }
    }
    return string_out;
}


std::string Stringf::trim_left(std::string string_in)
{
    std::string empty = "";
    std::string space = " ";

    if(string_in.length() == 0)
    {
        return string_in;
    }
    else 
    {
        if(string_in.substr(0,1) != space)
        {
            return string_in;
        }
        else
        {
            for(int i=0; i<string_in.length(); i++)
            {
                if(string_in.substr(i, 1) != space)
                {
                    return string_in.substr(i, string_in.length() - i);
                }
            }
            return empty;
        }
    }    
}


std::string Stringf::trim_right(std::string string_in)
{
    std::string empty = "";
    std::string space = " ";
    int end = string_in.length() - 1;

    if(string_in.length() == 0)
    {
        return string_in;
    }
    else 
    {
        if(string_in.substr(end,1) != space)
        {
            return string_in;
        }
        else
        {
            for(int i=end; i>=0; i--)
            {
                if(string_in.substr(i, 1) != space)
                {
                    return string_in.substr(0, i+1);
                }
            }
            return empty;
        }
    }    
}



std::string Stringf::trim(std::string string_in)
{   
    return trim_right(trim_left(string_in));
}



/*****************************************************************************/