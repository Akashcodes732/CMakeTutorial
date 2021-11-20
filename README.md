This tutorial covers the basic of getting started with CMake.

## Compiling
Clone the repo and do the following:
``` bash
~/CMakeTutorial$ mkdir build && cd build
~/CMakeTutorial$  cmake .. && make
```

## Running
The executable is placed under the ```build/``` directory. To run it simply:
``` bash
~/CMakeTutorial$ cd build/
~/CMakeTutorial/build$ ./MY_FIRST_CMAKE
```

## Testing
Here ```gtest``` is used to write unit tests. One can run it after running the make file.
``` bash
~/CMakeTutorial/build$ ctest -VV
```