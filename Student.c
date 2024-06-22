#include <stdio.h>
#include <stdlib.h>
 void password() {
    char entered_password[20];
    char correct_password[20] = "123";
    int tries = 0;
    while (tries < 3) {
        printf("Enter password: ");
        scanf("%s", entered_password);
        if (strcmp(entered_password, correct_password) == 0) {
            printf("Access granted!\n");
            break;
        } else {
            printf("Incorrect password!\n");
            tries++;
        }
    }
    if (tries == 3) {
        printf("Too many attempts! Exiting...\n");
        exit(0);
    }}
void main_menu() {
    printf("\nstudent  system\n");
    printf("1. create new student record\n");
    printf("2. display all student records\n");
    printf("3. modify student record\n");
    printf("4. delete student record\n");
    printf("5. exit\n");
    printf("enter your choice: ");
}
void add_student() {
    char name[20];
    int student_num;
    int marks[5];
    
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter student number: ");
    scanf("%d", &student_num);
    	printf("Enter marks <=20 \n ");
    	
    printf("Enter marks for Algorithmique: ");
    scanf("%d", &marks[0]);
    printf("Enter marks for POO: ");
    scanf("%d", &marks[1]);
    printf("Enter marks for SI: ");
    scanf("%d", &marks[2]);
    printf("Enter marks for Anglais: ");
    scanf("%d", &marks[3]);
    printf("Enter marks for TL: ");
    scanf("%d", &marks[4]);

    FILE *file = fopen("students.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

   
    fprintf(file, "%s %d %d %d %d %d %d\n", name, student_num, marks[0], marks[1], marks[2], marks[3], marks[4]);

    fclose(file);

    printf("Student record added successfully!\n");
}
void delete_student() {
    char name[20];
    int student_num;
    int marks[5];
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter student number: ");
    scanf("%d", &student_num);
    FILE *file1 = fopen("students.txt", "r");
    FILE *file2 = fopen("temp.txt", "w");
    if (file1 == NULL || file2 == NULL) {
        printf("Error opening file!\n");
        return;
    }
   int found = 0;
    char buffer[100];
    while (fgets(buffer, 100, file1)!= NULL) {
scanf(buffer, "%s %d %d %d %d %d %d", name, &student_num, &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
if (student_num != student_num) {
fputs(buffer, file2);
} else {
found = 1;
}
}
fclose(file1);
fclose(file2);
remove("students.txt");
rename("temp.txt", "students.txt");


if (found) {
printf("Student record deleted successfully!\n");
} else {
printf("Student record not found!\n");
}
}
void display_all() {
    char name[20];
    int student_num;
    int marks[5];
    float moy;
    FILE *file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("Student Number\tName\tAlgorithmique\tPOO\tSI\tAnglais\tTL\tAverage\n");
    while (fscanf(file, "%s %d %d %d %d %d %d", name, &student_num, &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]) != EOF) {
        moy = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5.0;
        printf("%d\t\t%s\t%d\t\t%d\t%d\t%d\t%d\t%.2f\n", student_num, name, marks[0], marks[1], marks[2], marks[3], marks[4], moy);
    }
    fclose(file);
}

void modify_student() {
    char name[20];
    int student_num;
    int marks[5];
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter student number: ");
    scanf("%d", &student_num);
    printf("\nerror,Enter marks <=20\n ");

    	printf(" Enter marks <=20 \n ");
    printf("Enter new marks for Algorithmique: ");
    scanf("%d", &marks[0]);
    printf("Enter new marks for POO: ");
    scanf("%d", &marks[1]);
    printf("Enter new marks for SI: ");
    scanf("%d", &marks[2]);
    printf("Enter new marks for Anglais: ");
    scanf("%d", &marks[3]);
    printf("Enter new marks for TL: ");
    scanf("%d", &marks[4]);
    FILE *file1 = fopen("students.txt", "r");
    FILE *file2 = fopen("temp.txt", "w");
    if (file1 == NULL || file2 == NULL) {
        printf("Error opening file!\n");
        return;
    }
    int found = 0;
    char buffer[100];
    while (fgets(buffer, 100, file1 )!= NULL) {
       scanf( buffer," %s %d %d %d %d %d %d", name, &student_num, &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
        if (student_num == student_num) {
            fprintf(file2, "%s %d %d %d %d %d %d\n", name, student_num, marks[0], marks[1], marks[2],marks[3], marks[4]);
            found = 1;
        } else {
            fputs(buffer, file2);
        }
    }
}



void menu_choice() {
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
           add_student();
            break;
        case 2:
            display_all();
            break;
       
        case 3:
            modify_student();
            break;
        case 4:
            delete_student();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
    }
}


int main() {

   password();
   while(1){
   	main_menu();
   	menu_choice();
   }
	return 0;
}
