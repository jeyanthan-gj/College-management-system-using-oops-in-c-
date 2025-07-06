# College Management System using OOPS in C++

This project is a **College Management System** implemented in C++ using Object-Oriented Programming principles. It is a console-based application that manages students, teachers, classes, marks, and administrative tasks for a college environment.

## Features

- **Admin, Teacher, and Student Login:**  
  Separate login processes for principals (admin), teachers, and students, each with relevant privileges.

- **Student Management:**  
  - Add new students  
  - View student details  
  - Organize students by department and section

- **Teacher Management:**  
  - Add new teachers  
  - Store teacher credentials and information

- **Marks Management:**  
  - Enter and update marks for various exams  
  - View marks by class, section, and exam

- **File-based Data Storage:**  
  All data (students, teachers, marks, etc.) are stored and managed using text files, enabling persistent storage without a database.

- **OOP Design:**  
  Features classes for students, teachers, admins, subjects, and processes, with inheritance and encapsulation.

## Usage

1. **Compile the code**  
   Use any standard C++ compiler. Example with g++:
   ```bash
   g++ main.cpp -o college_mgmt
   ```

2. **Run the executable**  
   ```bash
   ./college_mgmt
   ```

3. **Follow the menu**  
   - Choose between Principal (admin), Teacher, or Student login.
   - Enter credentials as prompted.
   - Use the provided options to manage students, teachers, and marks.

## File Structure

- `student.txt` – Stores student records
- `teacher.txt` – Stores teacher records
- `Admin.txt` – Stores admin credentials
- `[DEPT]-[SECTION].txt` – Stores students by department and section (e.g., `ECE-A.txt`)
- `[DEPT][SECTION][EXAM].txt` – Stores marks for a specific class, section, and exam
- Other auxiliary files for authentication and data management

## Code Structure

The code is organized into several classes:

- `viewstudent` – View student details by class and section
- `markview` – View marks for a specific exam/class/section
- `marks` – For entering and updating marks
- `sectionprocess`, `studentprocess`, `addstudent` – Helper classes for processing and organizing student data
- `addteacher` – For adding teacher data
- `studentlogin`, `teacherlogin`, `admin` – Handles login and menu flows for each user type

## Notes

- This is a **console-based application**. All interactions are through the terminal.
- Data is stored in plain text files for simplicity.
- Make sure the program has permission to read/write files in the working directory.

## How to Extend

- You can add more departments or sections by modifying the source code accordingly.
- For enhanced security, consider hashing passwords instead of storing them as plain text.
- The current system uses `goto` for some control flow; refactoring to avoid `goto` is encouraged for maintainability.

## Example

```
*******WELCOME TO JS COLLEGE********
1.PRINCIPAL LOGIN
2.TEACHER LOGIN
3.STUDENT LOGIN

Please enter your choice: 
```

## License

This project is for educational purposes. Feel free to use and modify as needed.
