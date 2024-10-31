//Program to create read the names and marks of students
/*Authour:felix muhoro
Reg no:CT101/G/23895/24
Date: 27/10/2024
*/


#include <stdio.h>
#include <stdlib.h>
int main()
{


int main() {
    FILE *marks;
    char name[30];
    int marks;

    // Open file in write mode
   marks= fopen ("C:\\users\\Muhoro\\Desktop\\C programs\\students.txt", "w")

    if (marks==null){
        printf("Error opening file!\n");
        return 1;
    }

    // Read names and marks of 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter the marks of student %d: ", i + 1);
      fscanf("%d", &marks);

        // Write data to file
        fprintf(file, "Student %d: Name = %s, Marks = %d\n", i + 1, name, marks);
    }

    fclose(marks);

    printf("Data successfully written to students.txt\n");
    return 0;
}

}