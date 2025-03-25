#include <stdio.h>

int main() {
    int choice;

    printf("Choose a branch:\n");
    printf("1. CSE\n");
    printf("2. AIML\n");
    printf("3. ECE\n");
    printf("4. Robotics\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose CSE.\n");
            break;