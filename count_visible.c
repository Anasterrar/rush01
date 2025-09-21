int count_visible_from_array(int arr[4])
{
    int i = 0;
    int max = 0;
    int visible = 0;
    while (i < 4)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            visible++;
        }
        i++;
    }
    return (visible);
}
