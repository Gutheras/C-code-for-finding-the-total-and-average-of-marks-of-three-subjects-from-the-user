#include <stdio.h>

int main (void)
{
    char reg_no[30];
    int m1, m2, m3;
    int total;
    float avg;

    //Prompting the user for reg no and writing it from the console
    printf("Input your reg_no: ");
    scanf("%s", &reg_no);

    //Asking the user for the marks of three subjects
    printf("Enter the marks of three subjects: \n");
    scanf("%d %d %d", &m1, &m2, &m3);

    //Finding the total of the subjects
    total = m1 + m2 + m3;
    printf("Total is: %d\n", total);
    avg = total / 3;
    printf("Avg is: %d\n", avg);
    
    return 0;
}