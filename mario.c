/** Joseph P. Gomez (skunkgasstudio)
 * 18 May 2019
 * Problem Set 1 Mario
 *
 *Ask for height of mario pyramid
 *Go back one step if user inputs a value for height that is less than 1 or greater than 8 
 *Use the value from step one to print i hashes and then begin a newline
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declaring variables
    int height;
    int spaces;
    int hashes;
    //Get height 
    do
    {
        height = get_int("Height: ");
    }
    //Condition
    while (height < 0 || height > 23);
    //Row
    for(int i=1; i<=height;i++)
    {
    //spaces
        for (spaces = (height - i); spaces > 0; spaces--)
        {
            printf(" ");
        }
        //hashes
        for (hashes = 1; hashes <= (i + 1); hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;

}

