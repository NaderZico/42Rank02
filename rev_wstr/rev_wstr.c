#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

void rev_wstr(char *str)
{
    int i = 0;
    int end = 0;
    while(str[end])
        end++;
    while(end > 0)
    {
        i = end;
        while(!is_space(str[i - 1]) && i > 0)
            i--;
        write(1, &str[i], end - i);
        if(i > 0)
            write(1, " ", 1);
        end = i - 1;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        rev_wstr(argv[1]);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return 0;
}
