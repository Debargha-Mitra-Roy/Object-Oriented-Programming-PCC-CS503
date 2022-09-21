#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int roll;
    double avg;
};

int main()
{
    struct Student stu;
    struct Student *ptr;

    stu.name = "Ryzen";
    stu.roll = 10;
    stu.avg = 75.56;

    ptr = &stu;

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll: ");
    scanf("%d", &ptr->roll);

    printf("Enter average: ");
    scanf("%lf", &ptr->avg);

    printf("Name: %s\nRoll: %d\nAverage: %lf\n", ptr->name, ptr->roll, ptr->avg);

    printf("Details of First Student : \n");
    printf("%s %d %ulf", &stu.name, &stu.roll, &stu.avg);

    printf("Details of Second Student : \n");
    printf("%s %d %ulf", &ptr->name, &ptr->roll, &ptr->avg);

    return 0;
}