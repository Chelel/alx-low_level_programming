 C - Dynamic libraries

Dynamic libraries in C are precompiled code modules that can be linked to an executable program at run time,
instead of being statically linked at compile time.
Dynamic libraries contain code and data that can be shared by multiple applications, reducing disk space and memory usage.

How to Create a Dynamic Library (Linux)
To create a dynamic library in Linux, simply type the following command:
    `gcc *.c -c -fPIC`

This command  generates one object file .o for each source file .c .
The -fPIC flag ensures that the code is position-independent.

Using Dynamic Libraries (Linux)
To use DL; you can compile the code as follows:
     