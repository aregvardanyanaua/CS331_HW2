# CS331_HW2
https://github.com/aregvardanyanaua/CS331_HW2/new/main

ex0.c
This assignment explored multiple fork() calls. Each call duplicates the process, so three sequential forks created 8 processes. Printing PIDs and PPIDs showed the parent-child hierarchy clearly

ex1.c
The program creates one child with fork(). The child runs ls using execl(), replacing its process image. The parent waits and prints a message, showing sequential execution and process replacement

ex2.c
Two fork() calls create two children
Each child runs a separate command using execl
wait(NULL) ensures the parent waits for both children before printing its message

ex3.c
fork() creates a child process
Child executes echo with the argument "Hello from the child process" using execl
Parent waits until child finishes, then prints its own message

ex4.c
fork() creates a child process
Child uses execl to run grep "main" test.txt
Parent waits for the child to finish, then prints its message
