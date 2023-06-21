# cFuck
Single-header brainfuck-like library for C. A simple Hello World! -program is included in `test.c`.

## Usage
Firstly include the `cFuck.h`-file in you `main.c`.
Then define a main function (`int main() { ... `).
Inside there you start writing in this glorious library.

### "API"
Now imagine that the program keeps track of two states at one time: The memory of the program (an array of length `CFUCK_MEMORY_LEN` of unsigned ints) and the current memory location (Starts automtically from 0).
<br>
Macros:
 - P Add 1 to current memory location.
 - M Subtract 1 to current memory location.
 - R Move current memory location right by one.
 - L Move current memory location left by one.
 - D Print the number of the current memory location.
 - C Print the ASCII-value of the current memory location.
 - O Begins a loop. Loop continues until the value of the current memory location is zero.
 - E ends the loop.
 - I takes user input and writes it into the the current memory location.
