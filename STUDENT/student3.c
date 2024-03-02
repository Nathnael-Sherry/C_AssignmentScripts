#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_COURSES 50

typedef struct {
    char name[100];
    float grades[MAX_COURSES];
} Student;

typedef struct {
    char name[100];
    float weight;
} Course;

void add_student(Student students[], int *num_students);
void add_course(Course courses[], int *num_courses);
void input_grades(Student students[], int num_students, Course courses[], int num_courses);
void print_report(Student students[], int num_students, Course courses[], int num_courses, FILE *fp);

int main() {
    Student students[MAX_STUDENTS];
    Course courses[MAX_COURSES];
    int num_students = 0, num_courses = 0;
    int choice;
    FILE *fp;

    fp = fopen("report.txt", "w");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    while (1) {
        printf("\n1. Add Student\n2. Add Course\n3. Input Grades\n4. Print Report\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_student(students, &num_students);
                break;
            case 2:
                add_course(courses, &num_courses);
                break;
            case 3:
                input_grades(students, num_students, courses, num_courses);
                break;
            case 4:
                print_report(students, num_students, courses, num_courses, fp);
                break;
            case 5:
                fclose(fp);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void add_student(Student students[], int *num_students) {
    printf("Enter student name: ");
    scanf("%s", students[*num_students].name);
    (*num_students)++;
}

void add_course(Course courses[], int *num_courses) {
    printf("Enter course name: ");
    scanf("%s", courses[*num_courses].name);
    printf("Enter course weight: ");
    scanf("%f", &courses[*num_courses].weight);
    (*num_courses)++;
}

void input_grades(Student students[], int num_students, Course courses[], int num_courses) {
    int i, j;

    for (i = 0; i < num_students; i++) {
        printf("\n%s\n", students[i].name);
        for (j = 0; j < num_courses; j++) {
            printf("%s: ", courses[j].name);
            scanf("%f", &students[i].grades[j]);
        }
    }
}

void print_report(Student students[], int num_students, Course courses[], int num_courses, FILE *fp) {
    int i, j;
    float total, weighted_sum = 0;

    fprintf(fp, "\nStudent Report\n");
    fprintf(fp, "Name\t\t\tTotal\t\tGPA\n");
    fprintf(fp, "---------------------------------------------\n");

//    for (i = 0; i < num_students; i++) {
//        total = 0;
//        for (j = 0; j < num_courses; j++) {
//            total += students[i].grades[j];
//        }
//        fprintf(fp, "%s\t\t%.2f\t\t%.2f\n", students[])
