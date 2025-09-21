int check_column(int final[4][4], int col, int top_expected, int bottom_expected)
{
    int arr[4];
    int i = 0;
    while (i < 4)
    {
        arr[i] = final[i][col];
        i++;
    }
    if (count_visible_from_array(arr) != top_expected)
        return (0);
    i = 0;
    while (i < 4)
    {
        arr[i] = final[3 - i][col];
        i++;
    }
    if (count_visible_from_array(arr) != bottom_expected)
        return (0);
    return (1);
}
