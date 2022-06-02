#include <stdio.h>
int main()
{
    int d;
    printf("Enter the month : ");
    scanf("%d",&d);
    switch(d)
    {
        case 1:
        printf("Number of days in January : 31 ");
        break;
        case 2:
        printf("Number of days in Febuary : 28");
        break;
        case 3:
        printf("Number of days in March : 31");
        break;
        case 4:
        printf("Number of days in April: 30 ");
        break;
        case 5:
        printf("Number of days in May : 31 ");
        break;
        case 6:
        printf("Number of days in June: 30 ");
        break;
        case 7:
        printf("Number of days in July : 31 ");
        break;
        case 8:
        printf("Number of days in August : 31 ");
        break;
        case 9:
        printf("Number of days in September : 30 ");
        break;
        case 10:
        printf("Number of days in Octuber : 31 ");
        break;
        case 11:
        printf("Number of days in November : 30 ");
        break;
        case 12:
        printf("Number of days in December : 31 ");
        break;
        default:
        printf("Please enter the correct month.")
        return 0;

    }
}