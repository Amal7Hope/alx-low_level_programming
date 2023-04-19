/**
 * int_index - searsh for integer
 * @array: arr of int
 * @size: num of elm in arr
 * @cmp: pointer ti fuction udes to compare values
 * Return: int , -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (a = 0; a < size; a++)
		{
			cmp(array[a]);
			if (cmp(array[a]) > 0)
			{
				res = a;
				break;
			}
			if ((cmp(array[a]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}
