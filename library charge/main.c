/* A library charges a fine for every book returned late. For first
5 days the fine is 50 paise, for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees. If you return the book after 30
days your membership will be cancelled. Write a program to
accept the number of days the member is late to return the
book and display the fine or the appropriate message.
Author Majid Mujahid Hussain dated 26th December 2020. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float days,fine;
    printf("Hello world!\n");
    printf("Please enter the number of days the book is late:\n");
    scanf("%f",&days);

    if(days <= 5)
    {
        fine = 0.5 * days;
        printf("The fine is 50 paise per day and the total fine is:%.2f\n",fine);
    }
     if(days > 6 &&days < 10)
    {
        fine = days;
        printf("The fine is 1 rupees per day and the total fine is:%.2f\n",fine);
    }
     if(days > 10)
    {
        fine = 5 * days;
        printf("The fine is 5 rupees per day and the total fine is:%.2f\n",fine);
    }
    if(days >= 30)
    {
        printf("The Library Membership is cancelled.\n");
    }


    return 0;
}
