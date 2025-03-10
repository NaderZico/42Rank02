#include <unistd.h>

int is_present(char *str, char c, int max_index)
{
    int i = 0;
    while (i < max_index)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void ft_union(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i])
    {
        if(!is_present(s1, s1[i], i))
            write(1, &s1[i], 1);
        i++;
    }

    while (s2[j])
    {
        if(!is_present(s1, s2[j], i) && !is_present(s2, s2[j], j))
            write(1, &s2[j], 1);
        j++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
