//program to read and store students details
/*
Authour:felix mohoro
Reg no:CT101/G/23895/24
Date: 27/10/2024
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *hr;
    char name[50];
    int marks, n;

    // Open file in append mode
    hr= fopen("C:\\users\\Mungai\\Desktop\\C programs\\student.txt","a");

    if (hr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    // Read the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Read names and marks of 'n' students
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks);

        // Append data to the file
        fprintf(fking, "Student %d: Name = %s, Marks = %d\n", i + 1, name, marks);
    }

    fclose(hr);

    printf("Data successfully appended to students.txt\n");
    return 0;
}
