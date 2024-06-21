### Solution: Let’s create a program that demonstrates the usage of static and extern keywords in C. We will split the code into two source files: externmain.c and counter.c.

Below is the path to the solution code 

## Solution Code

The solution code is in the `solution/` directory.

## Grading Rubric
---
Use the percentages to distribute the total points for the exercise.

|**Requirement**|**Notes**|**Percent Weight**|**Points**|
|--|--|--|--|
|Application Runs Without Errors|	The application runs without unexpected crashes or exceptions, ensuring a smooth execution from start to finish.|30%|	|
|Creation of Source Files|Both `externmain.c` and `counter.c` are correctly created.	|10%|	|
|Global Variable `(count)`	|`count` declared and initialized to 0 in `externmain.c` and also marked as static.|10%|	|
|Function Definition (`increment_count()`)| Function defintion should be correctly implemented- `increment_count()`  in counter.c.| 15%| |
|Output | Program displays initial value of `count` (0) and updated value after `increment_count()`. | 5% | |
|Additional Considerations| Correct implementation ensuring `increment_count()` modifies `count`.| 10% | |
|Readability|	The code is well-organized and easy to read, featuring clear variable naming, consistent indentation, and strategic use of whitespace and comments for better understandability.	|20%| |