int parse_input(char *s, int param[16])
{
    int i = 0;
    int j = 0;
    while (s[i])
    {
        if (s[i] >= '1' && s[i] <= '4')
        {
            if (j >= 16)
                return (0);
            param[j++] = s[i] - '0';
        }
        else if (s[i] != ' ')
            return (0);
        i++;
    }
    return (j == 16);
}
