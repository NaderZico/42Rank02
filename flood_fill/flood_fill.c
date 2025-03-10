#include "flood_fill.h"

void fill(char **tab, t_point size, int x, int y, char target)
{
    if(x < 0 || x >= size.x || y < 0 || y >= size.y || tab[y][x] != target)
        return;
    tab[y][x] = 'F';
    
    fill(tab, size, x + 1, y, target);
    fill(tab, size, x - 1, y, target);
    fill(tab, size, x, y + 1, target);
    fill(tab, size, x, y - 1, target);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x];
    
    if(target == 'F')
        return ;

    fill(tab, size, begin.x, begin.y, target);
}

#include <stdlib.h>
#include <stdio.h>

char **make_area(char **zone, t_point size)
{
    char **area = malloc(sizeof(char *) * size.y);
    for (int i = 0; i < size.y; i++)
    {
        area[i] = malloc(sizeof(char) * (size.x + 1));
        for (int j = 0; j < size.x; j++)
            area[i][j] = zone[i][j * 2];
        area[i][size.x] = '\0';
    }
    return area;
}

void print_area(char **area, t_point size)
{
    for (int i = 0; i < size.y; i++)
        printf("%s\n", area[i]);
}

int main(void)
{
    char *zone[] = {
        "1 1 1 1 1 1 1 1",
        "1 0 0 0 1 0 0 1",
        "1 0 0 0 1 0 0 1",
        "1 0 1 1 0 0 0 1",
        "1 1 1 0 0 0 0 1"
    };

    t_point size = {8, 5};
    t_point begin = {2, 1};
    char **area = make_area(zone, size);

    printf("Before flood fill:\n");
    print_area(area, size);

    flood_fill(area, size, begin);

    printf("\nAfter flood fill:\n");
    print_area(area, size);

    return 0;
}