# Student Management System

This repository contains a C-based application for managing student records. The application includes functionality for creating, displaying, modifying, and deleting student records. It also includes a simple password protection mechanism.

## Features

- **Password Protection**: Prevents unauthorized access to the system.
- **Student Record Management**:
  - Create new student records.
  - Display all student records.
  - Modify existing student records.
  - Delete student records.

## Project Structure

The main functions of the application are:

- `password()`: Function to handle password authentication.
- `main_menu()`: Displays the main menu options.
- `add_student()`: Adds a new student record.
- `delete_student()`: Deletes an existing student record.
- `display_all()`: Displays all student records.
- `modify_student()`: Modifies an existing student record.
- `menu_choice()`: Handles user input for menu choices.
- `main()`: Main function that runs the application.

## Usage

Upon running the application, you will be prompted to enter a password. The default password is 123. You have three attempts to enter the correct password before the application exits.
Main Menu

  1. Create New Student Record: Allows you to add a new student record by entering the student's name, number, and marks.
  2. Display All Student Records: Displays a list of all student records with their details and average marks.
  3. Modify Student Record: Allows you to modify the details of an existing student record.
  4. Delete Student Record: Allows you to delete a student record.
  5. Exit: Exits the application.

Adding a Student
                  
    add_student();

Deleting a Student

    delete_student();

Displaying All Students

    display_all();

Modifying a Student

    modify_student();

## Contact

For any questions or suggestions, feel free to contact me:

  Name: Yacine Kermame
  Email: yacineyoyoker@gmail.com
