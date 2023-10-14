##  FT_ATOI
The ft_atoi converts a string containing numerical characters (like "289 or "-19") into an integer data
type. It's a useful function because it allows you to work with numeric values that are stored as text.

Uses of ft_atoi function:
   
-Input Conversion: You can use ft_atoi to convert user input from text into numerical values that your program can manipulate.
-String to Integer Conversion: When you have a string of digits as text, ft_atoi helps transform it into an integer for mathematical operations.
-Data Validation: It can be employed to check if a string contains a valid integer before processing, ensuring data integrity.
-Error Handling: When handling errors or exceptions, ft_atoi can be used to convert error codes or messages represented as strings into numerical values for easier handling and analysis.

### Implementation of my `ft_atoi`:
    
>ft_isspace: The function checks if the input character `c` is a whitespace character. It returns 1 if `c` is a space, 
tab, newline, carriage return, form feed, or vertical tab; otherwise, it returns 0.

    ft_atoi:
    The purpose of the function is to convert a string representation of an integer (contained in the `str` parameter) into an actual integer value. 
    In technical terms, it parses and extracts an integer from the input string, considering optional whitespace, a sign ('+' or '-'), and a sequence of digits.

    Here's a breakdown of the function's steps:

    1. Initialize three integer variables: `i` (used for iterating through the input string), `negative` (to keep track of the sign of the integer), and `num` (to store the parsed integer).

    2. The function starts by skipping any leading whitespace characters in the input string `str`.

    3. It then checks if there's a sign character ('+' or '-'). If a '-' is found, the `negative` flag is set to indicate that the integer is negative, and the function moves to the next character.

    4. The function proceeds to parse the digits in the string, converting them into an integer. It iterates through the characters in `str` while they are digits (0-9) and calculates the integer value by multiplying the current `num` by 10 and adding the numeric value of the current character (achieved by subtracting '0' ASCII value).

    5. If the `negative` flag is set, it negates the calculated integer value to make it negative.

    6. Finally, the function returns the resulting integer value.

    In summary, this function converts a string containing an integer into an integer data type, taking into account optional whitespace and a sign character. It returns the parsed integer value.
