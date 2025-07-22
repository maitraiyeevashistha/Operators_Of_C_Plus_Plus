# Basic Operations in C++

## Name: Maitraiyee Vashistha
## PRN: 24070123057
## Division: ENTC-A3
## Title: Understanding Operators and Conditional Statements of C++  ( Tools: MS Visual Studio Code )
---

##  Overview

In this project explores the use of different **operators** and **conditional statements** in C++. Operators are special symbols that carry out computations and logic, while conditional statements help control the flow of the program based on specific conditions.




##  Operators in C++

Operators are fundamental to performing tasks in C++ programs. Some of the most commonly used operators are given below :
### 1.  Arithmetic Operators

Used to perform basic mathematical calculations

 -  `+`       ***Addition   :***   Adds two values                          
 -  `-`       ***Subtraction  :***  Subtracts the second value from the first    
 -  `*`       ***Multiplication :***  Multiplies two values                    
 -  `/`       ***Division    :***  Divides the first value by the second    




### 2.  Relational (Comparison) Operators

Used to compare two values. The result is always either `true` or `false`.

 -  `==` ***Equals to***    :  Checks if two values are equal    
 -  `!=` ***Not Equals to***    :  Checks if two values are not equal
 -  `<`   ***Smaller Than***    : Checks if the left value is smaller
 -  `>`   ***Greater Than***    : Checks if the left value is greater
 -  `<=`  ***Smaller than equal to***   : Checks if left value is less than or equal to right
 -  `>=`  ***Greater than equal to***   : Checks if left value is greater than or equal to right




### 3.  Logical Operators

Used to combine multiple conditions into one.


 - `&&`      ***Logical AND :***  Returns true only if both conditions are true                  
  - `||`     ***Logical OR :***  Returns true if at least one of the conditions is true        
 -  `!`      ***Logical NOT :*** Reverses the result of a condition (true becomes false, etc)   



### 4.  Assignment Operator


 -  `=`   ***Equals :***    Assigns a value to a variable            


##  Conditional Statements in C++ 

Conditional statements allow the program to make decisions based on inputs or situations. They execute different blocks of code based on whether a condition is `true` or `false`.

### Types of conditional statements :

- `if` – Executes a block of code if a condition is true  
- `else if` – Checks another condition if the previous one was false  
- `else` – Executes if none of the conditions above are true  

## Summary of the Programs
### 1. Grade Calculator
This program takes marks of five subjects from the user, calculates the average, and displays the respective grade using multiple nested if-else conditions. We use basic arethimatic operators like addition and division to get the grades , which are then compared to a highest valuse and the lowest value of a grade group .

#### Sample Output 

Enter marks of subject 1: 56              
Enter marks of subject 2: 78               
Enter marks of subject 3: 98             
Enter marks of subject 4: 65            
Enter marks of subject 5: 45                 
Average: 68.4                  
The grade is: C                  
               
### Key Concepts Used:

 - Arithmetic operations
 - Average calculation
 - Multiple if-else blocks
 - Relational and logical operators

## 2. Finding whether a number is positive, negative or zero
This  program checks whether the entered number is positive, negative, or zero using simple conditional logic (if else , compared to zero ).

### Sample Output
Enter a number: -8                 
The number is negative

### Key Concepts Used:

 - Basic condition checking
 - if-else structure
 - Use of comparison operators
## 3. Quadrant Locator
This program intakes both the coordiantes of a point from user and returns the quadrant in which it lies . It also handles edge cases like origin or axes.

### Sample Output
Value of x is: -1            
Value of y is: -56                 
(x,y) is in 3rd Quadrant          

### Concepts Used:

 - Compound conditions using &&
 - Multiple else if branches
 - Understanding real-world geometry through logic

## Conclusion
This assignment gave hands-on practice with different types of operators and conditional logic in C++. By creating programs that relate to real-life situations like grading, number analysis, and coordinate tracking, I learned how to write decision-making code. 
