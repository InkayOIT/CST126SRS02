# CST126SRS02
Reverse


Class ID: Inkay

SRS ID: CST126SRS02

Unresolved Issues: Does not print out names.

Notes: Could not figure out how to use peek or any other way to accomplish the task.


---

Purpose:  

Learn to use heap memory and properly clean up your data without leaks or corruption.  
Redirect cin and cout to file i/o.

Instructions:  

Read lines of text from std::cin into a ragged cstring array until the end of line is reached.  

Each element of the ragged array must be allocated on the heap.  

Each line can have zero, one, or multiple names.  

For example:  

Doublade Drilbur Hippopotas Inkay Jigglypuff lllumise Magcargo Mespirit  
Mudkip Ninetales  
  
Persian Phantump Seadra  
Shelmet  
Sliggoo Solrock Spearow Spheal Staryu Tangela Tentacool  

Process the data stored in the ragged array to std:cout in reverse order.

Mespirit Magcargo lllumise Jigglypuff Inkay Hippopotas Drilbur Doublade  
Mudkip Ninetales  
  
Seadra Phantump Persian  
Shelmet  
Tentacool Tangela Staryu Spheal Spearow Solrock Sliggoo  

A name can be a maximum of 256 characters.  

There is no limit on the number of lines or the number of names per line.  

Be certain to properly clean up any allocated memory. Leaks and memory corruption will be graded harshly.  
