int check_col(int final[4][4], int col, int val)
{
    int r = 0;
    while (r < 4)
    {
        if (final[r][col] == val)
            return (0);
        r++;
    }
    return (1);
}