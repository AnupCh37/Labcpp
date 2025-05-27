/*Write a program in c to read name, rollno, address, and phone number of each student
in your class using structure. Store the information in file so that you can
recover the information later. While recovering the information from the file
sort the information alphabetically according to the name.*/
#include<iostream>
#include<stdlib.h>
struct Student{
char name[50];
int rollno;
int phno;
char address[50];
};
int main(){
struct Student s[48];
int n,i;
FILE *fp=fopen("student.txt","w");
if(fp==NULL){
printf("Error opening file:");
exit(1);
}
printf("Enter the number of student: \n");
scanf("%d",&n);
printf("Enter the detail (Name/rollno/phno/address):\n");
for(int i=0;i<n;i++){
scanf("%s %d %d %s",s[i].name,&s[i].rollno,&s[i].phno,s[i].address);
fwrite(&s,sizeof(Student),1,fp);
}
fclose(fp);
return 0;
}


