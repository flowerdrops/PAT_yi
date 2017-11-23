#include <stdio.h>

struct Message
{
	char name[11];
	char ID[11];
	int grade;
}student[1000];

int main(int argc, const char* argv[])
{
	int stdnum=0,i=0;
	int indmax=0,indmin=0;
	scanf("%d",&stdnum);

	for (i=0;i<stdnum;i++)
	{
		scanf("%s %s %d",student[i].name,student[i].ID,&student[i].grade);
		if (student[i].grade>student[indmax].grade)
		{
			indmax=i;
		}
		if (student[i].grade<student[indmin].grade)
		{
			indmin=i;
		}
	}
	printf("%s %s\n",student[indmax].name,student[indmax].ID);
	printf("%s %s\n",student[indmin].name,student[indmin].ID);
	return 0;
}















