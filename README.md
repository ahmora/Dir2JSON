# Dir2JSON
A small program written on C++ to gather information about the files on a directory in a JSON file.

The program creates a file containing the names and sizes of the files of a given directory. If directories are contained, this are ignored.

### Prerequisites
* c++
* Boost library for c++

### Installation
Once you have installed the prerequisites, you just need to clone this repository to your local computer and you are all set.

### Executing the project
To execute the project you can use the Makefile provided.
To compile and run the program with default parameters use:
```
$ make
$ make run
```

To execute the program with your own parameters you must complile with ```make``` first and then execute:
```
$ ./listdir.o dir
```
where ```dir``` is an existing directory

### File Manifest
We can see the organization of the tiny project next.
The ```src``` directoy contains the ```.cpp``` files where the main program can be found. Basically it's just the main method. The directory ```lib``` contains the ```.hpp``` files, most of the work is contained in this directoty, due to the object called ```JsonDir``` which iterates the directory passed as parameter.
.
├── elem
│   ├── file2.txt
│   └── file.txt
├── lib
│   └── JsonDir.hpp
├── Makefile
├── nueva
│   └── nueva2
├── README.md
└── src
    └── json.cpp
5 directories, 6 files

Th directory ```elem``` contains two foo files, just to play a little with the program, as well as the directory ```nueva``` which is empty; this one is for testing purposes.

### Testing the project
A small set of tests can be executed. To do so type on the terminal:
```
$ make
$ make test
```
This is a not fully tested project

### Version
Version 1.0
Not fully tested.
Version 1.0

## Solution
The solution it's pretty basic. A JsonDir object is created which contains the name of the objective directory and creates an iterator of this. So when the program is executed the iterator iterates the directory and gathers the information to create the output file called ```dir.json``` that contains a ```JSON``` object with the names and sizes of all the files contained on the directory passed as parameter. All the subdirectories are ignored.