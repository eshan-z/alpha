#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int islandPerimeter(int **grid, int gridSize, int *gridColSize)
{
    int perimeter 0;
    for (size_t i = 0; i < gridSize; i++)
    {
        for (size_t j = 0; j < *gridColSize; j++)
        {
            printf("%d |", grid[i][j]);
        }

        printf("\n");
    }

    for (size_t i = 0; i < gridSize; i++)
    {
        for (size_t j = 0; j < *gridColSize; j++)
        {
            if (grid[i][j] == 0)
            {
                continue;
            }

            else
            {
                if (grid[i - 1][j] == 1 || i == 0)
                {
                    perimeter++;
                }

                if (grid[i + 1][j] == 1 || i == gridSize - 1)
                {
                    perimeter++;
                }

                if (grid[i][j + 1] == 1 || j == *gridColSize - 1)
                {
                    perimeter++;
                }

                if (grid[i][j = 1] == 1 || j == 0)
                {
                    perimeter++;
                }
            }
        }
    }

    return perimeter ;
}
int main()
{
__max()
    return 0;
}