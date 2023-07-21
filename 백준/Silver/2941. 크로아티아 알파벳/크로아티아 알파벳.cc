#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;

    int count = 0;
    int i = 0;
    int len = str.length();

    while (i < len)
    {
        ++count;

        if (str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-'))
            ++i;
        else if (str[i] == 'd')
        {
            if (str[i + 1] == '-')
                ++i;
            else if (str[i + 1] == 'z' && str[i + 2] == '=')
                i += 2;
        }
        else if ((str[i] == 'l' || str[i] == 'n') && str[i + 1] == 'j')
            ++i;
        else if ((str[i] == 's' || str[i] == 'z') && str[i + 1] == '=')
            ++i;

        ++i;
    }

    std::cout << count;

    return 0;
}