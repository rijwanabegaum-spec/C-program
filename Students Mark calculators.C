#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks1, marks2, marks3;
    float total_marks;
    float percentage;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];  
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);

        printf("Enter student name: ");
        scanf("%s", s[i].name);  

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks for subject 1: ");
        scanf("%f", &s[i].marks1);

        printf("Enter marks for subject 2: ");
        scanf("%f", &s[i].marks2);

        printf("Enter marks for subject 3: ");
        scanf("%f", &s[i].marks3);

        s[i].total_marks = s[i].marks1 + s[i].marks2 + s[i].marks3;
        s[i].percentage = (s[i].total_marks / 300.0) * 100;
    }
    printf("\n\n===== Student Details =====\n");
    for (int i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_no);
        printf("Marks in Subject 1: %.2f\n", s[i].marks1);
        printf("Marks in Subject 2: %.2f\n", s[i].marks2);
        printf("Marks in Subject 3: %.2f\n", s[i].marks3);
        printf("Total Marks: %.2f\n", s[i].total_marks);
        printf("Percentage: %.2f%%\n", s[i].percentage);
    }

    return 0;
}