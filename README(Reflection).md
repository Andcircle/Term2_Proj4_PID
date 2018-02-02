# Term2_Proj4_PID

Use PID controller to drive the vehicle on track surface in simulator

## Content of this repo
- `src` source code directory:
  - `main.cpp` - communicate with simulation tool, call functions to run PID controller
  - `PID.cpp` - implementation of PID controller 
  
## PID reflection
P represent proportion to the error, it will cause overshoot. Bigger P leads to fast oscillation.

D is proportional to derivative of error, which can take care of overshoot, in other words, helps to converge  (cons: converge slow)

I is proportional to integration of error, which will make controller response faster and solve system bias problem (cons overshoot)

The process I tuned the PID is as following:

1. Apply P contoller, test it on relatively straight part of the track.

2. Only P controller can not handle vehicle well, especially at sharp turn, I term can effectively solve this problem as expected, but will cause even more severe oscillation.

3. A relatively large D is applied to smooth out the oscillation.

Finally, the parameters I use is: P 0.7,  I 0.004,  D 20

## How to run the code
Clone this repo and perform
```
mkdir build && cd build
cmake ../src/  && make
./pid 
```




