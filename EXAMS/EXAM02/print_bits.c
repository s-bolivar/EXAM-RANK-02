void	print_bits(unsigned char octet)
{
    int i = 7;
    char bit;

    while (i >= 0)
    {
        bit = ((octet >> i) & 1) + '0';
        write (1, &bit, 1);
        i--;
    }
}

int main()
{
    unsigned char byte = 0b10110101;
    print_bits(byte);
    return (0);
}