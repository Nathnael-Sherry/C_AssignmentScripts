#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_COURSES 5

struct Course {
    char name[50];
    float grade;
};

struct Student {
    char name[50];
    int reg_number;
    struct Course courses[MAX_COURSES];
    float gpa;
};

struct Student students[MAX_STUDENTS];
int num_students = 0;

// Function to add a new student
void addStudent() {
    // Add logic to input student details and courses
}

// Function to calculate GPA for a student
void calculateGPA(struct Student *student) {
    // Add logic to calculate GPA based on grades
}

int main() {
    // Add menu and user interaction logic here
    return 0;
}

