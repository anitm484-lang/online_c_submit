// write a program to print the colour name against the first letter enter by user using switch case
# include<stdio.h>
int main()
{
    char colour;
    printf("enter the colour name:");
    scanf("%c",&colour);
    switch(colour)
    {
        case 'r':
        printf("this is red colour");
        break ;
        case 'b':
        printf("this is blue colour");
        break ;
        case 'B':
        printf("this is Black colour");
        break ;
        case 'o':
        printf("this is orange colour");
        break ;
        case 'g':
        printf("this is gray colour");
        break ;
        case 'y':
        printf("this is yellow colour");
        break ;
        default :
        printf("you enter  is out of colour");
        break ;
    }
    return 0;
}
