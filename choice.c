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
       case 2:
            printf("you chose AIML.\n");
            break;
       case 3:
           printf("you chose ECE.\n");
          break;
       case 4:
           printf("you chose Mechanics.\n")
           break;
       default:
           printf("invalid choice\n")
   }
    return 0;
}