# NavSim

>## 2D Navigation Simulation

This software was created by members of the University of Alabama in Huntsville's Space Hardware Club (Project ASTRA) for the purposes of having a rover environment with which to test autonomous navigation algorithms and develop a prototype base station for the University Rover Challenge. 
Please feel free to contact us with any questions or feedback.

### Installation

After cloning this project, please create a folder in the same directory as the project folder labelled `cinder2019`.

Clone cinder inside that directory with the following command:
```bash
  git clone --recursive https://github.com/cinder/Cinder.git
```

### Compiling

In order to run the project, you must first compile cinder with the proper configuration. This only needs to be done once.
1. Navigate to `cinder2019/proj/vc2019` and open `cinder.sln`.
2. Build cinder for each configuration that is necessary. In our case, `Debug for x64` and `Release for x64`.
3. Once builds succeed, you can open the NavSim project to compile and run the simulation.

### Known Issues

+ Our project includes the cinder block `Clipper`. When compiling, the compiler might not be able to locate the header files for the Clipper block. If that happens, use the error messages to find the broken `#include` statements and prepend `../include/` to the path to solve the issue.