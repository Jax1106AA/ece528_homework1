Aolany Acosta | 202706965 



ECE 528 Homework #1  



Fall 2026 | September 26th, 2026 



Professor Nanas  



&#x20;



1\) a. A compiler translates the source code into machine code before the program runs. An interpreter translates and executes the code. 



b. The main() function returns an integer value to the operating system. If the program reaches the end of main() without a return statement, it automatically returns 0. 



2\) Header files contain how the files are supposed to be run. The #include is to copy a copy of the code from one file to another, so it can be processed in the same file before it is run.  



3\) To declare a function in C you put the return type, name, and the parameter list and then you add a semicolon. The difference between then is a declaration tells you what the function looks like meanwhile the definition provides what the actual code for the function does. The syntax of the declaration is: 

return\_type function\_name(parameter\_list) 



meanwhile the definition of a function would basically be the body : 

return\_type function\_name(parameter\_list) { 



&#x20;   // block of code to be executed 



&#x20;   return value;  



} 



4\) Type casting basically converts one data type to another,  



\#include <stdio.h>  



// Function declaration 



int sumAsInteger(double num1, double num2); 



int main() { 



&#x20;   double a = 5.75; 



&#x20;   double b = 3.45; 



&#x20;   int result = sumAsInteger(a, b);  



&#x20;   return 0; 



} 



int sumAsInteger(double num1, double num2) { 



&#x20;   // casting the double sum to an int before returning 



&#x20;   return (int)(num1 + num2);  



} 



5\) A local variable can't be used in other functions, meanwhile a global variable can be used anywhere in the file/code, its essentially universal  



int global = 0; //global var 



void function(); 



int local = 1; //local var 



} 



6\) Strings are character arrays with a null terminator to mark the end.  

Ex: char word\[] = "Hello"; 



But is stored as : 'H' 'e' 'l' 'l' 'o' '\\0' 



7\) A pointer is a variable that stores the memory address of another variable. You declare a pointer by using an asterisk before the variable name. To pass a pointer in a function, you configure the functions parameter to accept a pointer type using the asterisk, then pass the address of your variable when calling the function. Some of the advantages of passing a pointer instead of a value because you can modify the original value, and the pointer will still hold the same value, as well as a pointer has better performance with larger data modules, such as arrays and structs.  



8\) You declare a pointer by placing an asterisk before the variable and the address of operator symbol (\&) is used to get the memory address of a regular variable. Then you can use the asterisk symbol again to modify the value stored at the memory address of the pointer value.  



9\) While loops are done before the loop body runs and the do-while loop is done after the loop body runs, so while is an entry-controlled loop and the do-while loop is an exit-controlled loop 



10\) A break statement stops the program once it reaches that statement; however, a continue statement breaks out of the loop and continues the rest of the program.  



11\) Bitwise operators work directly with individual bits. The OR operator sets a bit, AND with NOT clears a bit, XOR toggles a bit, and AND checks whether a bit is set. 



12\) PxSEL0 and PxSEL1 select whether a pin functions as GPIO or as a peripheral. To select GPIO for P1.0 and P1.7: 



P1->SEL0 \&= \~0x81; 



P1->SEL1 \&= \~0x81; 



13\)  



void P1\_1\_and\_P1\_4\_Init(void) 



{ 



&#x20;   P1->DIR \&= \~0x12; 



&#x20;   P1->REN |= 0x12; 



&#x20;   P1->OUT |= 0x12; 



} 



14\)  



void Buttons\_Init(void) 



{ 



&#x20;   P3->DIR \&= \~0x42; 



&#x20;   P3->REN |= 0x42; 



&#x20;   P3->OUT \&= \~0x42; 



&#x20; 



&#x20;   P5->DIR \&= \~0x11; 



&#x20;   P5->REN |= 0x11; 



&#x20;   P5->OUT \&= \~0x11; 



} 



15\)  



void LEDs\_Init(void) 



{ 



&#x20;   P7->DIR |= 0xFF; 



&#x20;   P7->OUT \&= \~0xFF; 

}

