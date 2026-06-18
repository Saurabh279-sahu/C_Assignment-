// Student Result (Switch Case)
#include<stdio.h>

int main()
{
    int marks;
    printf("enter your number : ");
    scanf("%d",&marks);
    if(marks>=60)
    {
        printf("you are first division 👍🎉\n", marks);
    }
    else if(marks >= 45 && marks < 60)
    {
    printf("you are second division 👍\n",marks);
    }
    else if(marks >= 45 && marks < 45)
    {
    printf("you are third devison: 😊\n",marks);
    }
    else if(marks < 30)
    {
    printf("you are fail: 😭\n",marks);
    }
    return 0;
}