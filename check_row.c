int check_row(int final[4][4], int row, int val)
{
    int c = 0;
    while (c < 4)
    {
        if (final[row][c] == val)
            return (0);
        c++;
    }
    return (1);
}


