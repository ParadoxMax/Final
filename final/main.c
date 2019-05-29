#include <stdio.h>
#include <string.h>
int student_id(char student_name[10], int quiz, int midterm, int final) {
    printf("Please enter the student name:\n");
    scanf("%s", &student_name);
    printf("Please enter the Midterm grade:\n");
    scanf("%d", &midterm);
    printf("Please enter the quiz grade:\n");
    scanf("%d", &quiz);
    printf("Please enter the final grade:\n");
    scanf("%d", &final);
    if ( (midterm <= 100 && 0<= midterm) || (quiz<= 100 && 0<= quiz) || (final <= 100 && 0<= final) ) {
        printf("The student ID: \n 0001\n");
    } else {
        printf("Invalid Inputs try again");
    }
    return student_id;
}
int course_grade(int quiz, int midterm, int final) {
    float grade;
    printf("Please enter the Midterm grade:\n");
    scanf("%d", &midterm);
    printf("Please enter the quiz grade:\n");
    scanf("%d", &quiz);
    printf("Please enter the final grade:\n");
    scanf("%d", &final);
    if ( (midterm <= 100 && 0<= midterm) || (quiz<= 100 && 0<= quiz) || (final <= 100 && 0<= final) ) {
        grade = ( (midterm * 20) /100 ) + ( (quiz * 10) / 100 ) + ( (final * 70) / 100);
        printf("your course grade is :%f", grade);
    } else {
        printf("Invalid Inputs try again");
    }
    return grade;
}
int main (void) {
    int quiz, midterm, final;
    char student[10];
    student_id(student[1], quiz, midterm, final);
    course_grade(quiz, midterm, final );

    return 0;
}