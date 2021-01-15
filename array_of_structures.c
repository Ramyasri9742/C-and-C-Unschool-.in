#include<stdio.h>
#include<string.h>
struct employee
{
int empid;
char empname[10];
int empsal;
};
int main()
{
    int i;
    struct employee emp[5];
    printf("enter the details of employees\n");
    for(i=0;i<5;i++)
        {
            printf("enter the name of employee %d",i+1);
            scanf("%s",&emp[i].empname);
            printf("enter the id of employee %d",i+1);
            scanf("%d",&emp[i].empid);
            printf("enter the salary of employee %d",i+1);
            scanf("%d",&emp[i].empsal);
        }
        void display()
        {
            for(i=0;i<5;i++)
            {
            printf("employee[%d] name : %c\n",i+1,emp[i].empname);
            printf("employee[%d] id : %d\n",i+1,emp[i].empid);
            printf("employee[%d] salary : %d\n",i+1,emp[i].empsal);
            }
        }
return 0;

}
