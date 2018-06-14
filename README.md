# Unscented Kalman Filter Project Starter Code
Self-Driving Car Engineer Nanodegree Program

In this project utilize an Unscented Kalman Filter to estimate the state of a moving object of interest with noisy lidar and radar measurements. Passing the project requires obtaining RMSE values that are lower that the tolerance outlined in the project rubric. 

A manual how to use this project can be downloaded [here](https://github.com/jensakut/CarND-Unscented-Kalman-Filter-Project/blob/master/Project_rubric.md)

# Overview

Comparing to the extended linear Kalman Filter, the unscented Kalman Filter enables non-linear process models like the constant velocity magnitude model used in this exercise. Besides creating a UKF-tracking-class, the process noise parameters were tuned.  
The resulting mean squared errors are quite constant in the intervals 1...3 for the acceleration noise and 0.3 ... 0.7 for the angular acceleration noise. 
The following picture show the NIS precision distribution. An ideal Kalman-Filter shows only 5 percent of the samples above the red line, which value depends on the degrees of freedom of the measurement vector. 
Both radar measurements and Lidar measurements show good distribution.
![alt text](https://github.com/jensakut/CarND-Unscented-Kalman-Filter-Project/blob/master/Radar_NIS.png)
![alt text](https://github.com/jensakut/CarND-Unscented-Kalman-Filter-Project/blob/master/Radar_NIS.png)

The unscented kalman-filter beats the required precision. 


## Other Important Dependencies
* cmake >= 3.5
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./UnscentedKF` Previous versions use i/o from text files.  The current state uses i/o
from the simulator.

## Editor Settings

We've purposefully kept editor configuration files out of this repo in order to
keep it as simple and environment agnostic as possible. However, we recommend
using the following settings:

* indent using spaces
* set tab width to 2 spaces (keeps the matrices in source code aligned)

## Code Style

Please stick to [Google's C++ style guide](https://google.github.io/styleguide/cppguide.html) as much as possible.



