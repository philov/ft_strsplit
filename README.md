# ft_strsplit

Allocates storage (with malloc(3)) and returns an array of “fresh” strings (all ending with ‘\0’, 
including the array itself) obtained by splitting s using the character c as a delimiter. 
If the allocation fails the function returns NULL. 

Example:
        ft_strsplit (“*hello*fellow***students*”, ‘*’)
Returns:
          array : [“hello”, “fellow”, “students”]

Parameters:
**char const *s** - the string to split.
**char c** - the delimiter character.

Returns:
The array of “fresh” strings that are the result of the split. 
