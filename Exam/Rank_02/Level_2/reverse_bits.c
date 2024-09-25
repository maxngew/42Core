/*
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100  0001
     ||
     \/
 1000  0010
 */

unsigned char	reverse_bits(unsigned char octet)
{
	int				x;
	unsigned char	res;

	x = 8;
	res = 0;
	while (x--)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (res);
}