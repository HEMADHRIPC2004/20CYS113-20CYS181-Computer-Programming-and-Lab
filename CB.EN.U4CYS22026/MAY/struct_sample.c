/*student struct 72
name
rollno
father name
mother name
emrg no.
sem1 sgpa
sem2 sgpa
cgpa
input number of students (for loop) {except sgpa,cgpa}
for loop - function
get marks 6 subs, calc sem1 sem2 sgpa, cgpa.
*/
#include<stdio.h>
#include<string.h>
struct student
	{
		char name[50],father[50],mother[50];
		int rollnumber,emergencynumber;
		double sem1,sem2,cgpa;
		double math,phy,chem,cyber,english,cs;
	};
void main(){
	struct student s[72];
	int numberofstudents;
	printf("Enter number of students : \n");
	scanf("%d",&numberofstudents);
	for(int i=0;i<numberofstudents;i++){
		s[i].sem1=0;
		printf("Enter name of student %d : \n",(i+1));
		scanf("%s",&s[i].name);
		printf("Enter your father's name : \n");
		scanf("%s",&s[i].father);
		printf("Enter your mother's name : \n");
		scanf("%s",&s[i].mother);
		printf("Enter your rollnumber : \n");
		scanf("%d",&s[i].rollnumber);
		printf("Enter your emergency contact number : \n");
		scanf("%d",&s[i].emergencynumber);

		do{
			printf("Enter appropriate math mark : \n");
			scanf("%lf",&s[i].math);
		}
		while(s[i].math>100||s[i].math<0);
		s[i].sem1+=s[i].math;
		do{
			printf("Enter appropriate physics mark : \n");
			scanf("%lf",&s[i].phy);
		}
		while(s[i].phy>100||s[i].phy<0);
		s[i].sem1+=s[i].phy;
		do{
			printf("Enter appropriate chemistry mark : \n");
			scanf("%lf",&s[i].chem);
		}
		while(s[i].chem>100||s[i].chem<0);
		s[i].sem1+=s[i].chem;
		do{
			printf("Enter appropriate english mark : \n");
			scanf("%lf",&s[i].english);
		}
		while(s[i].english>100||s[i].english<0);
		s[i].sem1+=s[i].english;
		do{
			printf("Enter appropriate CS mark : \n");
			scanf("%lf",&s[i].cs);
		}
		while(s[i].cs>100||s[i].cs<0);
		s[i].sem1+=s[i].cs;
		do{
			printf("Enter appropriate cyber mark : \n");
			scanf("%lf",&s[i].cyber);
		}
		while(s[i].cyber>100||s[i].cyber<0);
		s[i].sem1+=s[i].cyber;
		s[i].sem1/=60;
		s[i].cgpa=s[i].sem1;
		printf("SGPA and CGPA of student '%s' is %.2f & %.2f: \n",s[i].name,s[i].sem1,s[i].cgpa);
	}
}
	
	
