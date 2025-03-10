#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

void rostring(char *str)
{
    int i = 0;
    int start = 0;
    int end = 0;
    
    while (is_space(str[i]))
        i++;  
    start = i;
    
    while (str[i] && !is_space(str[i]))
        i++;
    end = i;

    while (str[i])
    {
        while (is_space(str[i])) 
            i++;  
        if (!str[i]) 
            break;      
        while (str[i] && !is_space(str[i]))
            write(1, &str[i++], 1);
        write(1, " ", 1); 
    }

    while (start < end)
        write(1, &str[start++], 1);

}

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        rostring(argv[1]);
        write(1, "\n", 1);
    }
    else
    write(1, "\n", 1);
}