/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to set.
 * @index: The position to set.
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= (1ul << index);

	return (1);
}
