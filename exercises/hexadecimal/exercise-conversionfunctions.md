# Exercise: Converting Strings to Long and Formatting Output

**Length as Designed:** 30 minutes

## Introduction
In this exercise, we will be using two important C library functions : `strtol() and sprintf()` commonly used functions for string manipulation and conversion

### Starter Files
open a blank editor

### Requirements
1. `strtol()` : 
    - Use `strtol()` to convert a string representation of an integer to a long value.
    - Handle different bases (e.g., decimal, hexadecimal, octal) for input strings.
    - Detect and handle failed conversions.
    - Understand the role of `endPtr` parameter.

2. `sprintf()` :
    - Use sprintf() to format output into a character buffer.
    - Store the formatted output instead of printing it directly.
    - Understand the syntax and usage of sprintf().

### Sample Input:
1. Using strtol() 
    ```markdown
    Input: "22" (base 10)
    Output: Converted long = 22
    Input: "CA10" (base 16)
    Output: Converted long = 51728  
    Input: "054" (base 8)
    Output: Converted long = 44
    Input: "1001" (base 2)
    Output: Converted long = 9
    Input: "error" (invalid input)
    Output: Unable to convert 'error' to base 10
    ```

 2. Using sprintf()
    ```markdown
    Input: a = 10, b = 20
    Output: Sum of 10 and 20 is 30
    ```   

**Conclusion**
- strtol() allows flexible string-to-long conversion with error handling.
- sprintf() formats output into a buffer for further use.

