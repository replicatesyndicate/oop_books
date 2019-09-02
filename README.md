Exercise created by Arkadiusz W. in https://www.udemy.com/video-course-c-from-beginner-to-expert/  
Meant to be used with bash on Linux.  
CMake and relevant GCC compiler is required to build and run the files! `sudo apt install cmake`   
-------------------------------------------------------------------------------------------------
Open a terminal in the main directory.  
To read or edit the contents of the project files, `cd src`, then open a file by your favorite text editor.   
To run a specific example, edit the CMakeLists.txt file, line 3 to change "#" to the exercise number:  
```
set(SOURCE src\oop_books_step_#.cpp)
```  
  
Save the file, then `cd build`, `cmake ..`, and `make`. Run the executable by `.\oop_books`.