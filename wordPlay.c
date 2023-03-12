#include <cs50.h>
#include <stdio.h>

int main (void)
{
    char c = get_char("Do you want to play a game? ");

    if (c == 'y' || c == 'Y')
        {
            int favNum = get_int("Great! Lets begin. What is your favorite number? ");
            int leastFavNum = get_int("Peculiar choice... What is your least favorite number? ");
                if (favNum > leastFavNum)
                    {
                        printf("Your favorite number, %d, is much grander then that small shrip of a number %d\n", favNum, leastFavNum);
                    }
                else if (favNum < leastFavNum)
                    {
                        printf("Your favorite number, %d, is tiny compared to the machoness of %d\n", favNum, leastFavNum);
                    }
                else
                    {
                        int i = 0;
                        while (i < favNum)
                          {
                        printf("Silly child, your favorite number and least favorite number can not be the same...\n");
                        i++;
                          }
                    }
        }
    else if (c == 'n' || c == 'N')
        {
            printf("Your loss. Now you'll never know if your favorite number is great then, equal to, or less then your least favorite number.\n ");
        }
}