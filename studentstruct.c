#include<stdio.h>
struct student
{
    int id;
    char name[20];
    int m1,m2,m3;
}s1;
int main(){
    int total;
    float avg;
    printf("Enter Student Name: ");
    scanf("%s",s1.name);
    s1.id=290;
    s1.m1=45;
    s1.m2=49;
    s1.m3=43;
    total=s1.m1+s1.m2+s1.m3;
    avg=total/3;
    printf("Student Name-%s\nStudent Id  =  %d\nSubject 1 Marks=%d\nSubject 2 Marks=%d\nSubject 3 Marks=%d\nTotal=%d\nAverage Marks=%.3f\n",s1.name,s1.id,s1.m1,s1.m2,s1.m3,total,avg);
return 0;
}
