# About this folder

This file explains about contents of this folder. 
When this repo is imported, 10 projects will be shown on Project Explorer pane in MCUXpresso IDE.   
Each of those projects have name of "**FRDM_MCXA153**" or "**FRDM_MCXN947**" which can be a target microcontroller boards. 

## _r01lib_frdm_mcx[A153|N947]
- _r01lib_frdm_mcxa153
- _r01lib_frdm_mcxn947  

These 2 projects are library projects which abstracts MCU hardware. These are build as libraries which will be linked from next application projects. These **cannot be executed by itself**. 

## P3T1755_FRDM_MCX[A153|N947]_demo
- P3T1755_FRDM_MCXA153_demo
- P3T1755_FRDM_MCXN947_demo  

These are **main projects** to demonstrate the temperature-sensor (P3T1755) with MCX microcontroller. Operation deteil is available on README.md in root of this repository (`dm-i3c-temperature-sensor/README.md`). 

## P3T1755_FRDM_MCX[A153|N947]_demo_DAA
- P3T1755_FRDM_MCXA153_demo_DAA
- P3T1755_FRDM_MCXN947_demo_DAA  

These are **feature extended version** of "**P3T1755_FRDM_MCX[A153|N947]_demo**".  
These application performs "**Dyamic Address Assignment (DAA)**" to give address for I3C devices. This application allows to have upto three P3T1755 and one LM75B (or compatible) on same bus.  

## P3T1755_FRDM_MCX[A153|N947]_simple
- P3T1755_FRDM_MCXA153_simple
- P3T1755_FRDM_MCXN947_simple  

These are sample code to show basical usage of `P3T1755 class`. The P3T1755 class abstracts device specific register level operations. The source of the P3T1755 class is availavle in `_r01lib_frdm_mcx[A153|N947]source/r01device/temp_sensor/TempSensor.[cpp|h]`

## P3T1755_FRDM_MCX[A153|N947]_basic_operation
- P3T1755_FRDM_MCXA153_basic_operation
- P3T1755_FRDM_MCXN947_basic_operation

These are sample code to operate P3T1755 without its class library. Since no abstraction layer available, the register level operation is transparent using `I3C class` library API.  
`_r01lib_frdm_mcx[A153|N947]source/r01lib/i3c.[cpp|h]`

# API reference

The sample code projects are using API calls in `r01lib`.  
Those API reference is available in the library project folder.  
It can be found in `_r01lib_frdm_mcx[A153|N947]source/r01lib_docs/annotated.html`. 

# Summary
This sample contains projects to demo the I3C in several ways.    
Next list shows the projects and those features.   

Project name|Target board|Purpose|I3C operation|LED operation|IBI|DAA|
---|---|---|---|---|---|---
P3T1755_FRDM_MCXA153_demo             |FRDM-MCXA153 |I3C demo with LED blink color change         |✅|✅|✅|From static address
P3T1755_FRDM_MCXA153_demo_DAA         |FRDM-MCXA153 |I3C demo with LED blink color change         |✅|✅|✅|Dynamic
P3T1755_FRDM_MCXA153_simple           |FRDM-MCXA153 |To show P3T1755 device class basic operation |✅|  |  |From static address
P3T1755_FRDM_MCXA153_basic_operation  |FRDM-MCXA153 |To show I3C class basic operation            |✅|  |  |From static address
P3T1755_FRDM_MCXN947_demo             |FRDM-MCXN947 |I3C demo with LED blink color change         |✅|✅|✅|From static address
P3T1755_FRDM_MCXN947_demo_DAA         |FRDM-MCXN947 |I3C demo with LED blink color change         |✅|✅|✅|Dynamic
P3T1755_FRDM_MCXN947_simple           |FRDM-MCXN947 |To show P3T1755 device class basic operation |✅|  |  |From static address
P3T1755_FRDM_MCXN947_basic_operation  |FRDM-MCXN947 |To show I3C class basic operation            |✅|  |  |From static address
_r01lib_frdm_mcxa153                  |FRDM-MCXA153 |Library to be linked from application projects|  |  |  |  
_r01lib_frdm_mcxn947                  |FRDM-MCXN947 |Library to be linked from application projects|  |  |  |  


