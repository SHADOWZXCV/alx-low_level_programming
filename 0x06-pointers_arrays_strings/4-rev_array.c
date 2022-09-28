/**
 * reverse_array - reverses array
 * @a: the array tp reverse.
 * @n: length of array.
 */
void reverse_array(int *a, int n)
{
	int holder, i = 0, end = n - 1;

	for (; i < n / 2; i++, end--)
	{
		holder = a[i];
		a[i] = a[end];
		a[end] = holder;
	}
}
