#include<stdio.h>
#include<string.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};
void addStudent(struct Student students[], int *count);
void displayStudent(struct Student students[], int count);
void searchStudent(struct Student students[], int count);
int main()
{
    struct Student students[100];
    int count = 0, choice;
    while(1)
    {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student \n");
        printf("2. Display All Students \n");
        printf("3. Search Student by Roll \n");
        printf("4. Exit \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
               addStudent(students, &count);
               break;
            case 2:
               displayStudent(students, count);
               break;
            case 3:
               searchStudent(students, count);
               break;
            case 4:
               printf("Existing program...\n");
               return 0;
            default:
               printf("Invalid choice! Try again.\n");
               
        }
    }
}
void addStudent(struct Student students[], int *count)
{
    printf("\n Enter Roll Number: ");
    scanf("%d",&students[*count].roll);
    getchar();
    printf("Enter Name: ");
    scanf("%[^\n]",students[*count].name);
    printf("Enter Marks: ");
    scanf("%f",&students[*count].marks);
    (*count)++;
    printf("student added successfully!\n");
}
void displayStudent(struct Student students[], int count)
{
    if(count==0)
    {
        printf("\n No students available!\n");
        return;
    }
    printf("\n---Student List---\n");
    for(int i=0;i<count;i++)
    {
        printf("Roll: %d | Name: %s| Marks: %.2f \n", students[i].roll, students[i].name, students[i].marks);
    }
}
void searchStudent(struct Student students[], int count)
{
    int roll;
    printf("\n Enter Roll Number to Search: ");
    scanf("%d",&roll);
    for(int i=0;i<count;i++)
    {
        if(students[i].roll==roll)
        {
            printf("\n Student Found! \n");
            printf("Roll: %d \n",students[i].roll);
            printf("Name: %s \n",students[i].name);
            printf("Marks: %.2f \n",students[i].marks);
            return;
        }
    }
    printf("Student not found! \n");
}