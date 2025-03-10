unsigned char reverse_bits(unsigned char octet)
{
    char reversed = 0;
    int i = 8;
    while(i--)
    {
        reversed = (reversed << 1) | (octet & 1);
        octet >>= 1;
    }
    return reversed;
}



// #include <stdio.h>

// unsigned char reverse_bits(unsigned char octet);

// void print_bits(unsigned char octet)
// {
//     int i = 8;
//     while (i--)
//         printf("%d", (octet >> i) & 1);
// }

// int main(void)
// {
//     unsigned char num = 38; // Example number (150 = 10010110 in binary)
    
//     printf("Original:   ");
//     print_bits(num);
//     printf("\n");

//     unsigned char reversed = reverse_bits(num);

//     printf("Reversed:   ");
//     print_bits(reversed);
//     printf("\n");

//     return 0;
// }
