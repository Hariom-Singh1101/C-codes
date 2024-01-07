#include<stdio.h>
#include<string.h>

struct employee
{
    int salary;
    char name[18];
    float code;
};

void main()
{
    struct employee f1;
    {
        f1.salary =340000;
        strcpy(f1.name,"jeet Bhardwaj");
        f1.code = 100.42;
        printf("%d\n",f1.salary);
        printf("%s\n",f1.name);
        printf("%.3f\n",f1.code);
    }
}