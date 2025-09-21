int check_views(int final[4][4], int param[16])
{
    int i;
    i = 0;
    while (i < 4)
    {
        if (!check_line(final, i, param[8 + i], param[12 + i]))
            return (0);
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if (!check_column(final, i, param[i], param[4 + i]))
            return (0);
        i++;
    }
    return (1);
}
