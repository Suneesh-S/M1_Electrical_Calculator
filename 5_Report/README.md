## Introduction
 * Electrical Calculator is a conversion calculator provide a one-stop resource for numerous computations in the electronics industry. Whether you're looking for a 4 band resistor or seeking to figure out how long a battery lasts, this electrical calculator can assist. 
 * This project first takes the user to a index page where the available contents on type of calculator are listed and asks the user to give input for the respective topic he wants to calculate. User can also try run the example code by him/herself. User can also give suggestion to us. 

## Research
### Electrical Calculator...
* This is a simple project which simply provide required electrical parameters value to the user after taking input from the user. 
* This calculator is using various formulas for different functions,research are done in the particular calculation and theres need to be perequites before entering to the program

![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/f2cda815554c041bf7139979462159bb732afc52/1_Requirements/resistor_code.gif)
-------------------------------------------------------------------------------------------------
![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/256f5675952ce21aabe37ecf476e453ace6db5f4/1_Requirements/led-series-table.jpg)

## Cost and Features
* This project has various features, like it can provide electrical parameters like volatge,current resistor value,battery life etc.. 
* In Resistor color code Calculator,it can give values of any band upto 6 bands.
* In ohms law Calculator,user can enter any two parameters(V,I,R,P) and can get other two parameter values.
* In LED series resistor Calculator,user can get resistor value to drive the LED by entering parameters.
* In Batter life Calculator,user can get the battery life in hours by entering the parameter.
#### above features are shown in the below screenshot. 
![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/9f8aba398f1a0cc5bcde30190051daae5f0a3664/1_Requirements/index.png)

## Defining Our System
* System bacically takes input from the user and executes the particular function the user selected, and then print the values.
* There are 4 types of functions in this Calculator
  * Resistor Color Code Calculator
  * Ohms law Calculator
  * LED series Resistor Calculator
  * Battery Life Calculator


## SWOT ANALYSIS
![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/ce31353fb25e1129f81ab9baa3c5cf5c7dae40e5/1_Requirements/SWOT%20analysis.png)

# 4W&#39;s and 1&#39;H

## Who:

* All the Electrical and Electronics enthusiasts for work and projects.

## What:

* Electrical calculator to find the electrical and electronics parameter like voltage,resistor color code value,battery life etc.

## When:

* During the step-In training, this is the final project assessment and development started on 20th of march.

## Where:

* This can be used in all over the globe. any student/working professional of any age can use it.

## How:

* users can use this code to easy their work and project in electrical.

# Detail requirements
## High Level Requirements:

| ID | Description | Status (Implemented/Future)
|:---:|:---:|:---:|
|HLR-1| User shall be able to select the band the user need to get value in resistor code calculator. |Implemented|
|HLR-2| System ask choice to continue after getting value from one calculator. |Implemented|
|HLR-3| user shall be able to get any two parameter value after giving any other two value in ohms law calculator. |Implemented|
|HLR-4| user shall be able to get battery life in hours and in minutes. |Implemented|
|HLR-5| user shall be able to get the history of the calculation. |Future|



##  Low level Requirements:

| ID | Description | Status (Implemented/Future)
|:---:|:---:|:---:|
|LLR-1| User shall be able to enter the value. |Implemented|
|LLR-2| User shall be able to create their account. |Future|
|LLR-3| User should be able to manage their data. |Future|

# Design

## High Level Design 
-----------------------------------------------------------
### Structural and Behavioural Diagram
#### Usecase behavioural diagram
<img src="https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/b6be8ebcd710ec63bc2d0fa40b03db4be3976f73/2_Design/High%20level%20diagram%201.png" width="1080" height="720">

#### Activity behavioural diagram
<img src="https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/1fb8d9e8a2b9f4867f17d96dd94579214c13e2bb/2_Design/high%20level%20flowchart%202.png" width="1080" height="480">



## Low Level Design 
-----------------------------------------
### Structural and Behavioural Diagram
#### Component structure Diagram
<img src="https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/5727bf16e483ce4250fd6540b839c39aacaba188/2_Design/Low_level_Design.png" width="1080" height="720">
-----------
# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Is user able to get values from the 4,5 and 6 band Resistor color code calculator |Samp ip|exp i/p| act i/p | Requirement based |
|  H_02       | Is the user able to get values from ohms law calculator| Samp i/p | exp i/p| act i/p  | Requirement based  |
|  H_03       | Is the user able to get values from LED series resistor calculator| Samp i/p | exp i/p| act i/p  | Requirement based  |
|  H_04       | Is the user able to get values from Battery life calculator| Samp i/p | exp i/p| act i/p  | Requirement based |
|  H_04       | Is the user able to get correct comment when they enter wrong value| Samp i/p | exp i/p| act i/p  | Requirement based |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | is the user able to get into the contents | 1-4 | respective topic | respective topic|Requirement based |

## Screen shots
---------------------

### unit testing output
![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/230444c2429c07c011b05d97fedc78753bbbc431/4_TestPlanAndOutput/test_output%20(2).png)

----------------------------------
### Sample input and output
![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/0a0941232bc45bbdf9db89652d754efa88cca388/4_TestPlanAndOutput/sample%20op1.png)
![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/0a0941232bc45bbdf9db89652d754efa88cca388/4_TestPlanAndOutput/sampleop2.png)
![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/0a0941232bc45bbdf9db89652d754efa88cca388/4_TestPlanAndOutput/sam%20op3.png)

----------------------------------

### index page. from here the user can go to different topics.
![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/afe33ca57d7a206f19a0dfe76185a0fa4f81f700/1_Requirements/index.png)

-------

# Badges Gained

Build | Code Quality | Unity | [Git Inspector](using github.io option)
------|----------|-------|--------------
[![Build CI-Linux](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/c-cpp.yml) [![Build CI-windows](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/c-cpp-windows.yml/badge.svg)](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/c-cpp-windows.yml) | [![CodeQuality-StaticCode-CppCheck](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/cpp-check.yml/badge.svg)](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/cpp-check.yml) [![CodeQuality Dynamic-Code valgrind](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/c-dynamic.yml/badge.svg)](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/c-dynamic.yml) | [![Unit Testing - Unity](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/unity.yml/badge.svg)](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/unity.yml)| [![Contribution Check - Git Inspector](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/c-gitinspector.yml/badge.svg)](https://github.com/Suneesh-S/M1_Electrical_Calculator/actions/workflows/c-gitinspector.yml)
