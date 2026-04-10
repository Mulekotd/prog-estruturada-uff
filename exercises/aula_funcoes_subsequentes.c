int verify(int t1, int v1[t1], int t2, int v2[t2])
{
	if (t2 > t1)
		return 0;

	for (int i = 0; i <= t1 - t2; i++)
	{
		int j = 0;

		while (j < t2 && v1[i + j] == v2[j])
			j++;

		if (j == t2)
			return 1;
	}

	return 0;
}
