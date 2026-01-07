#include <stdio.h>
int main()
{
    int attendance[50];
    int n, i;
    int present = 0, absent = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter attendance for student %d (1 = Present, 0 = Absent): ", i + 1);
        scanf("%d", &attendance[i]);
    }
    printf("\nStudent Attendance:\n");
    for (i = 0; i < n; i++)
    {
        if (attendance[i] == 1)
            printf("Student %d : Present\n", i + 1);
        else
            printf("Student %d : Absent\n", i + 1);
    }
    for (i = 0; i < n; i++)
    {
        if (attendance[i] == 1)
            present++;
        else
            absent++;
    }
    printf("\nTotal Present Students: %d", present);
    printf("\nTotal Absent Students : %d\n", absent);
    return 0;
}