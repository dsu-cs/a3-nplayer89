# Binary Search Trees

## Details
For this assignment you will be developing a C++ program which implements a 
binary search tree. Your program will read in a text file called `cmd.txt` that will 
tell your program what operations to run. Your program will take this file
as a command line argument. Your program should implement a C++ class which will be 
used to represent your binary search tree. This repo contains the following directories: 
* `src` - Contains the source code for the assignment and the files you will need to
complete. Any modifications you make to complete your assignment should be made
inside this directory.  
* `tests` - This directory contains the code that is used to test your program. 
You should not modify any code inside of this directory as it could give you
incorrect results. The code in this directory can be compiled and executed when
you beleive your assignment is complete.  

### Files  
Inside of the `src` directory you will find the following files  
* `main.cpp` - This file is the driver of your program. It creates an instance of
your class and then performs various operations that your class implements. It 
reads information from `cmd.txt` which instructions the program on what actions 
to take. This file has already been completed for you and should not be modified.  
* `node.hpp` - This file defines and implements the `Node` class which is the
basic building block used to create our data structure. This file has already
been completed and should not be modified. Be sure to review the functions that 
this class implements.
* `bst.hpp` - This file defines and implements the `BST` class. You are responsible 
for implementing all functions of this class as they are shown in the class prototype 
at the top of the .hpp file.
* `makefile` - This is the file that can be used to build your program. This file 
has already been completed and should not be modified.
* `cmd.txt` - This file is a sample cmd file that can be used to test your program's 
functionality. You may use it as is or add or change values in order to test
different edge cases.  

In short, the following files are the only ones that you should modify for this
assignment:  
* `bst.hpp` 
* `cmd.txt`

No other file should be modified!

### Interface
Below is the prototype for the class you are to implement. It can also be found
in the .hpp file for the class. If you have any questions as to the expected 
behavior of a function please do not hesitate to ask  

```C++
template<class T>
class BST{
public:
    // Constructor for the BST class, creates an empty tree
    BST(void);
    // Destructor for the BST class, destroys the tree
    ~BST(void);
    // Inserts data into the tree
    // param: The data to be inserted into the tree
    void insert(T);
    // Removes data from the tree
    // param: The data to be removed from the tree
    void remove(T);
    // Performs an inorder traversal
    // returns: pointer to a vector containing the tree traversal
    std::vector<T> *inorder(void);
    // Performs an postorder traversal
    // returns: pointer to a vector containing the tree traversal
    std::vector<T> *postorder(void);
    // Performs an preorder traversal
    // returns: pointer to a vector containing the tree traversal
    std::vector<T> *preorder(void);
    // Searches the tree for a given value
    // param: the data to search for
    // returns: a pointer to the node containing the data or NULL if the data
    //          was not found
    Node<T> *search(T);
    // Gets the current number of nodes in the tree
    // returns: the number of nodes in the tree
    int get_size(void);
};
```  
## cmd File Format
The cmd file for this assignment consists of two columns of numbers. The first
column indications the function that should be called, and the second column
indications the operand that that function may take. If the function takes no 
operand then the entry will be blank. The first column number to function 
mapping is as follows
```
1   insert
2   remove
3   inorder
4   postorder
5   pre order
6   search
7   get_size
```

The path to the command file will be read in from the command line. The name 
of the file should NOT be hardcoded into your program.

## Building Your Program  
GNU Make is used to build our program for us. To support that a complete make
file has already been provided for you. In order to build your program perform 
the following steps:  
* cd into the source director `cd src`  
* Type `make` to build your program.  

## Runing unit tests
The unit tests that will be used to grade your program have already been included 
in this repo. If you beleive your program to be functioning correctly you may
 run them localy in order to verify your programs correctness. To run them, first 
 `cd` into the tests directory. 
 Then type `make` which will build the unit tests for your program, this may take 
 a minute as multiple executables are being compiled. Then finally type `./run_tests.sh` 
 to execute the unit tests and report back if they passed or failed.  

## Deliverables
Commit the final version of your code and push it to the github repository
before the due date of the assignment

## Expections
* Your code should build and run, no points will be awarded to code that does
not compile
* No use of any prebuilt tree libraries
* Your code should be well formatted, points may be taken for sloppy code
* Your output should match the output provided in output.txt
* Your code should be fairly robust and be able to handle obvious edge cases 
such as searching for a number which is not in the tree.
* Passing all unit tests does not gaurentee you will be awarded full points for 
assignment. Points may be deducted for poor coding practices, unresolved compilation 
warnings, poor formatting, or other syntax or semantic errors

## Special behavior
There is a unique case to think about when dealing with a BST. That is what 
happens if we try to insert a number that is already in the tree into the tree
again? It is expected that only one occurance of a number or node should ever
appear in a tree, so if you ever try to insert the same node into a tree twice
then your program should not insert the duplicate node into the tree.
