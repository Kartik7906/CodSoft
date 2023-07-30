# CodSoft
Virtual Intern at CodSoft:

"The 4-week virtual internship at CodeSoft offers hands-on experience in C++ programming. Interns work on various projects, utilizing the company's C++ based software, gaining valuable skills in software development and virtual interface design."


# Task1: Number Guessig Game:
1.Initialize the random number generator and generate a random number between 1 and 100.
2.Prompt the user to enter a guess and compare it with the random number.
3.Provide feedback to the user if the guess is too high or too low.
4.Repeat steps 2 and 3 until the guess matches the random number, then display the number of attempts it took the user to guess correctly.


# Task2: Simple Calculator:
1. User input:
   - Prompt the user to enter two numbers and an operation.
   - Read the input and store them in `number1`, `number2`, and `operation`.

2. Perform the operation:
   - Declare a variable `result` to store the result.
   - Use a `switch` statement to perform the operation based on the value of `operation`.
   - Add, subtract, multiply, or divide `number1` and `number2` based on the chosen operation.
   - Store the result in `result`.

3. Display the result:
   - Output the result using `cout` if the operation is valid.
   - If the operation is division and the second number is zero, display an error message.

4. End the program:
   - Return 0 to indicate successful program execution.
  

# Task3: Student Grading System:
1. Define a struct `GradeSystem` to store student information.
2. Prompt the user to enter student names and scores, and store them in a vector of `GradeSystem` instances.
3. Display the results by iterating over the vector and calculating the average, highest, and lowest scores for each student.
4. Terminate the program.


# Task4: Word Count:
This C++ code is designed to count the total number of words in a text file. It follows a simple four-step process:

Step 1: Importing necessary libraries
The required C++ libraries, including `iostream`, `fstream`, `string`, and `sstream`, are imported to handle input/output operations, file handling, and string manipulation.

Step 2: Defining the `countWords` function
The `countWords` function takes a filename as input, opens the file, and reads its content line by line. It then uses an `istringstream` to parse each line into individual words and increments the word count for each word encountered. The function returns the final word count.

Step 3: Getting the filename from the user
In the `main` function, the user is prompted to enter the filename of the text file they wish to process. The input is stored in the `givenfile` variable.

Step 4: Counting and displaying the total words
The `main` function calls the `countWords` function with the provided filename, receives the total word count, and displays it on the console if there are no errors. If the file cannot be opened, an error message is shown, and the program returns -1. Otherwise, it prints the total number of words in the file.
