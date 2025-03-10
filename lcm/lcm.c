unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int m_a = a;
    unsigned int m_b = b;
    if(a == 0 || b == 0)
        return 0;
    while(m_a != m_b)
    {
        if(m_a < m_b)
            m_a += a;
        else
            m_b += b;
    }
    return m_b;
}

#include <stdio.h>
int main(void)
{
    printf("%d", lcm(30, 6));
}