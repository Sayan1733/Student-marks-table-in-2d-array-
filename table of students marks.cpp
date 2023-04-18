#include <stdio.h>
int main() {
    int marks[30][30];
    int m, n,i,j,total_marks,total_class_marks,max_marks;
    float average_marks,class_average;
    

    printf("Enter the number of students (m): ");
    scanf("%d", &m);
    printf("Enter the number of subjects (n): ");
    scanf("%d", &n);

    // Read in the marks for each student in each subject
    for (i = 0; i < m; i++) {
        printf("Enter marks for student %d:\n", i+1);
        for (j = 0; j < n; j++) {
            printf("Subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Print marks obtained by each student in different subjects
    printf("\nMarks obtained by each student in different subjects:\n");
    for (i = 0; i < m; i++) {
        printf("Student %d: ", i+1);
        for (j = 0; j < n; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // Calculate and print total marks and average obtained by each student
    printf("\nTotal marks and average obtained by each student:\n");
    for (i = 0; i < m; i++) {
        total_marks = 0;
        for (j = 0; j < n; j++) {
            total_marks += marks[i][j];
        }
        average_marks = (float) total_marks / n;
        printf("Student %d: Total marks = %d, Average marks = %.2f\n", i+1, total_marks, average_marks);
    }

    // Calculate and print class average
    total_class_marks = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            total_class_marks += marks[i][j];
        }
    }
    class_average = (float) total_class_marks / (m*n);
    printf("\nClass average: %.2f\n", class_average);

    // Print highest marks in each subject
    printf("\nHighest marks in each subject:\n");
    for (j = 0; j < n; j++) {
        max_marks = marks[0][j];
        for (i = 1; i < m; i++) {
            if (marks[i][j] > max_marks) {
                max_marks = marks[i][j];
            }
        }
        printf("Subject %d: %d\n", j+1, max_marks);
    }

    return 0;
}

