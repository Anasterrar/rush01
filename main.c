#include <unistd.h>

int     parse_input(char *s, int param[16]);
int     check_row(int final[4][4], int row, int val);
int     check_col(int final[4][4], int col, int val);
int     count_visible_from_array(int arr[4]);
int     check_line(int final[4][4], int row, int left_expected, int right_expected);
int     check_column(int final[4][4], int col, int top_expected, int bottom_expected);
int     check_views(int final[4][4], int param[16]);
int     solve(int final[4][4], int pos, int param[16]);
void    print_grid(int final[4][4]);

int     main(int argc, char **argv)
{
    int param[16];
    int final[4][4];
    int i;
    int j;

    if (argc != 2)
    {
        write(1, "Error\n", 6);
        return (1);
    }
    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            final[i][j] = 0;
            j++;
        }
        i++;
    }

    if (!parse_input(argv[1], param))
    {
        write(1, "Error\n", 6);
        return (1);
    }

    if (solve(final, 0, param))
        print_grid(final);
    else
        write(1, "Error\n", 6);

    return (0);
}
