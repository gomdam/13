#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student
{
	int ID;
	char name[20];
	double grade;
};

void main(void)
{
	struct student stud = {10, "yudam", 4.3};
	

	stud.ID = 17;
	strcpy(stud.name, "KO");
	stud.grade = 2.0;
	
	printf("ID : %i\n", stud.ID);
	printf("name : %s\n", stud.name);
	printf("grade : %lf\n", stud.grade);
	
	return 0;
}
