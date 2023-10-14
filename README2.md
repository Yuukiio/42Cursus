##  *FT_ATOI*

The ft_atoi converts a string containing numerical characters (like "289 or "-19") into an integer data
type. It's a useful function because it allows you to work with numeric values that are stored as text.

Uses of ft_atoi function:
   
-Input Conversion: You can use ft_atoi to convert user input from text into numerical values that your program can manipulate.
-String to Integer Conversion: When you have a string of digits as text, ft_atoi helps transform it into an integer for mathematical operations.
-Data Validation: It can be employed to check if a string contains a valid integer before processing, ensuring data integrity.
-Error Handling: When handling errors or exceptions, ft_atoi can be used to convert error codes or messages represented as strings into numerical values for easier handling and analysis.

### *Implementation of my ft_atoi*:
    

`Ft_isspace:` 
The function checks if the input character `c` is a whitespace character. It returns 1 if `c` is a space, 
tab, newline, carriage return, form feed, or vertical tab; otherwise, it returns 0.

Here's a breakdown of the character constants being compared in the function:<br>
' ' (space): The space character<br>
'\f' (form feed): A control character for page breaks in text<br>
'\n' (newline): Represents a line break in text<br>
'\r' (carriage return): Often used to move the cursor to the beginning of a line<br>
'\t' (tab): Represents a horizontal tab character<br>
'\v' (vertical tab): Represents a vertical tabulation character<br>
<br><br>
`Ft_atoi:`
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

---

## *FT_BZERO*

The purpose of the `ft_bzero` function is to set all the bytes in a specific memory block to zero, effectively erasing the content of that memory. It takes two arguments: a pointer `s` pointing to the memory block and a value `n` representing the number of bytes in that block. The function iterates through the memory block and sets each byte to zero. Essentially, this function is used to initialize or clear data in memory, ensuring it does not contain any prior information. However, in modern C programming, it is typically recommended to use the standard `memset` function for this purpose, as it is more versatile and widely supported.

### *Implementation of my ft_bzero*:

- `void ft_bzero(void *s, size_t n)`: This line defines the function `ft_bzero`, which takes two arguments: `s` is a pointer to the memory block to be zeroed out, and `n` is the number of bytes in that block.

- `size_t i;`: This declares a variable `i` of type `size_t`, typically used for counting.

- `unsigned char *str;`: This declares a pointer variable `str` of type `unsigned char`. It's used to treat the input pointer `s` as an array of bytes (unsigned characters).

- `i = 0;`: It initializes the counter `i` to zero.

- `str = (unsigned char *)s;`: This line casts the `void` pointer `s` into an `unsigned char` pointer `str`. This is done to ensure that we can access individual bytes in memory.

- `while (i < n)`: This is a `while` loop that runs as long as `i` is less than the specified number of bytes `n`.

- `str[i++] = 0;`: Within the loop, this line sets the byte at the `i`-th offset from the start of the memory block pointed to by `str` to zero (0). It increments `i` afterward, moving to the next byte.

In essence, the `ft_bzero` function iterates through the memory block pointed to by `s` and sets each byte to zero using pointer arithmetic.

---

## *FT_CALLOC*

`ft_calloc` is a standard library function in C that is used for dynamic memory allocation. It stands for "contiguous allocation" and is often used to allocate memory for an array of elements. `ft_calloc` is similar to the `malloc` function, but it has an additional feature: it initializes the allocated memory to zero.

