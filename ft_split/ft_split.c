#include <stdlib.h>

int is_space(char c)
{
    return (c == ' ' || c == '\n' || c == '\t');
}

int ft_wordcount(char *str)
{
    int i = 0;
    int wordcount = 0;
    while(str[i]) {
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' && str[i])
            i++;
        if(str[i])
            wordcount++;
        while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
            i++;
    }
    return wordcount;
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int word = 0;
    int size = ft_wordcount(str);
    char **arr;
    arr = malloc(sizeof(char *) * (size + 1));
    while(str[i] && word < size)
    {
        while(is_space(str[i]) && str[i])
            i++;
        while(!is_space(str[i + j]) && str[i])
            j++;
        arr[word] = malloc(sizeof(char) * j + 1);
        if(!arr[word])
            return NULL;
        j = 0;
        while(!is_space(str[i]) && str[i])
            arr[word][j++] = str[i++]; 
        arr[word][j] = '\0';
        word++;
    }
    arr[word] = NULL;
    return arr;
}


// #include <stdio.h>

// int main()
// {
//     char str[] = "  Hello  , world  this is   a test  ";
//     char **words = ft_split(str);
//     int i = 0;

//     // Print the split words
//     while (words[i])
//     {
//         printf("Word %d: %s\n", i, words[i]);
//         free(words[i]); // Free each allocated word
//         i++;
//     }
//     free(words); // Free the array of pointers

//     return 0;
// }
