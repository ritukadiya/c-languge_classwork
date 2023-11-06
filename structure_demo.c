#include<stdio.h>

struct student
{
	int rollno;
	char name[20];
};

main()
{
	struct student s1;  // "s1" is structure variable
	
	struct student s2;
    s1.rollno=101;
    strcpy(s1.name,"ssss");
    printf("\n\n .......Info of student1........");
    printf("\n\n Rollno : %d",s1.rollno);
    printf("\n\n name : %s",s1.name);
    
    s2.rollno=102;
    strcpy(s2.name,"ssss");
    printf("\n\n .......Info of student1........");
    printf("\n\n Rollno : %d",s2.rollno);
    printf("\n\n name : %s",s2.name);
}
