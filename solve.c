int solve(int final[4][4], int pos, int param[16])
{
    int row = pos / 4;
    int col = pos % 4;
    int val;

    if (pos == 16)
        return (check_views(final, param));

    val = 1;
    while (val <= 4)
    {
        if (check_row(final, row, val) && check_col(final, col, val))
        {
            final[row][col] = val;
            if (solve(final, pos + 1, param))
                return (1);
            final[row][col] = 0;
        }
        val++;
    }
    return (0);
}
