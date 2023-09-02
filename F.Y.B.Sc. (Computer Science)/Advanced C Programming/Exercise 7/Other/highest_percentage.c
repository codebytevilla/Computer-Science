#include <stdio.h>

struct student
{
    char name[20];
    int rollno;
    int marks[3];
    float perc;
};

int main()
{
    int i, j, sum;
    struct student s[10];
    float highest_percentage = 0.0;
    int highest_percentage_index = 0;

    printf("\n Enter the details of the 10 students \n");
    for (i = 0; i < 10; i++)
    {
        printf("\n Enter the name and roll number \n");
        scanf("%s %d", s[i].name, &s[i].rollno);
        printf("\n Enter marks for three subjects:");
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &s[i].marks[j]);
            sum = sum + s[i].marks[j];
        }
        s[i].perc = (float)sum / 3;

        // Check if the current student has a higher percentage than the highest recorded so far
        if (s[i].perc > highest_percentage)
        {
            highest_percentage = s[i].perc;
            highest_percentage_index = i;
        }
    }

    /* Display details of students */
    printf("\n\n Name \t Roll no\t Percentage");
    printf("\n================================\n");
    for (i = 0; i < 10; i++)
    {
        printf("\n%s\t%d\t%f", s[i].name, s[i].rollno, s[i].perc);
    }

    // Display details of the student with the highest percentage
    printf("\n\nStudent with the highest percentage:\n");
    printf("Name: %s\n", s[highest_percentage_index].name);
    printf("Roll no: %d\n", s[highest_percentage_index].rollno);
    printf("Percentage: %f\n", s[highest_percentage_index].perc);
}
