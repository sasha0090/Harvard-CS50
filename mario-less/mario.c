#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get from the user the number of steps up to 8 pcs
    int height;
    while (true)
    {
        height = get_int("Height: ");
        printf("\n");

        if (height > 0 && height <= 8)
        {
            break;
        }
    }
    // Step printing cycle
    for (int line = 1; line <= height; line++)
    {
        // Number of spaces then line
        int spaces = height - line;
        // Print line
        for (int j = 1; j <= height; j++)
        {
            // Printing a space or # by cursor position
            if (j <= spaces)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
