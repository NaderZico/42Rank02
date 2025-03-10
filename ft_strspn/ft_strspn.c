#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int j = 0;
	while(s[i])
	{
		while(accept[j])
		{
			if(accept[j] == s[i])
				break;
			j++;
		}
		if(!accept[j])
			return i;
		i++;
	}
	return i;
}


int main() {
    char *s = "abcd";
    const char *accept = "abc";
    printf("%zu", ft_strspn(s, accept));
}
