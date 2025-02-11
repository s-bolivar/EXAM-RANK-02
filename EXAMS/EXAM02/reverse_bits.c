unsigned char	reverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char reversed = 0;

    while (i < 8)
    {
        reversed <<= 1;
        reversed |= (octet & 1);
        octet >>= 1;
        i++;
    }
    return (reversed);
}

int main()
{
    unsigned char octet = 0b00011001;  // Ejemplo: 00011001 (25 en decimal)
    
    // Imprimir el octeto original
    printf("Original: %u (0x%X)\n", octet, octet);
    
    // Llamar a la función reverse_bits para invertir los bits
    unsigned char reversed = reverse_bits(octet);
    
    // Imprimir el octeto invertido
    printf("Reversed: %u (0x%X)\n", reversed, reversed);

    return 0;
}