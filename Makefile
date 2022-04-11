all: sine.exe

# define a target to link the application
#
sine.exe: sine.o
        g++ -g -lm sine.o -o sine.exe

# define targets to compile the source code
#
sine.o: sine.cc Makefile
        g++ -g -c sine.cc -o sine.o

# define a target to clean the directory
#
clean:
        rm -f sine.o sine.exe
