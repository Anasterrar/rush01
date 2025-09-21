int check_line(int final[4][4], int row, int left_expected, int right_expected)
{
    int arr[4];
    int i = 0;
    while (i < 4)
    {
        arr[i] = final[row][i];
        i++;
    }
    if (count_visible_from_array(arr) != left_expected)
        return (0);
    i = 0;
    while (i < 4)
    {
        arr[i] = final[row][3 - i];
        i++;
    }
    if (count_visible_from_array(arr) != right_expected)
        return (0);
    return (1);
}
