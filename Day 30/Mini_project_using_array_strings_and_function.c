#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void inputStudents(struct Student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void displayStudents(struct Student s[], int n)
{
    int i;

    printf("\n------ Student Details ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll Number : %d", s[i].roll);
        printf("\nName        : %s", s[i].name);
        printf("\nMarks       : %.2f\n", s[i].marks);
    }
}

float averageMarks(struct Student s[], int n)
{
    float sum = 0;
    int i;

    for(i = 0; i < n; i++)
        sum += s[i].marks;

    return sum / n;
}

int main()
{
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    inputStudents(s, n);

    displayStudents(s, n);

    printf("\nAverage Marks = %.2f\n", averageMarks(s, n));

    return 0;
}



