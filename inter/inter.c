int is_present(char *str, char c, int max_index)
{
    int i = 0;
    while(i < max_index)
    {
        if(str[i] == c) 
            return 1;
        i++;
    }
    return 0;
}

void inter(char *s1, char *s2)
{
    int i = 0;
    int j;
    
    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
            {
                if(!is_present(s1, s1[i], i))
                {
                    write(1, &s1[i], 1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
}

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int tab[256] = {0};

    if (argc == 3)
    {
        while (argv[2][i])
        {
            tab[(int)argv[2][i]] = 1;
            i++;
        }
        i = 0;
        while (argv[1][i])
        {
            if (tab[(int)argv[1][i]] == 1)
            {
                write(1, &argv[1][i], 1);
                tab[(int)argv[1][i]] = 2;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}














