#include <stdio.h>

int main() {
    int students, days;

    printf("Enter number of students: ");
    scanf("%d", &students);

    printf("Enter number of days: ");
    scanf("%d", &days);

    int attendance[students][days];

    // Input attendance
    printf("\nEnter attendance (1 = Present, 0 = Absent):\n");
    
    for(int i = 0; i < students; i++) {
        printf("\nStudent %d:\n", i + 1);
        for(int j = 0; j < days; j++) {
            int input;
            do {
                printf("Day %d: ", j + 1);
                scanf("%d", &input);
                if(input != 0 && input != 1) {
                    printf("Error: Only 1 (Present) or 0 (Absent) allowed. Try again.\n");
                }
            } while(input != 0 && input != 1);
            attendance[i][j] = input;
        }
    }

    // Display attendance

    printf("\nAttendance Record:\n");
    printf("\n 1: present, 0: absent\n");
    for(int i = 0; i < students; i++) {
        printf("Student %d: ", i + 1);
        for(int j = 0; j < days; j++) {
            printf("%d ", attendance[i][j]);
        }
        printf("\n");
    }

    // Calculate percentage
    printf("\nAttendance Percentage:\n");
    for(int i = 0; i < students; i++) {
        int present = 0;

        for(int j = 0; j < days; j++) {
            if(attendance[i][j] == 1) {
                present++;
            }
        }

        float percentage = ((float)present / days) * 100;
        printf("Student %d: %.2f%%\n", i + 1, percentage);
    }

    return 0;
}