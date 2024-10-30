#include <iostream>
#include <cctype>
#include <cstring>
#include <stdio.h>

using namespace std;

int main()
{
    char S[1000];
    gets(S);

    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
        {
            S[i] = toupper(S[i]);
        }
        else if (S[i] >= 'A' && S[i] <= 'Z')
        {
            S[i] = tolower(S[i]);
        }
        else if (S[i] == ',')
        {
            S[i] = ' ';
        }
    }

    puts(S);

    return 0;
}
