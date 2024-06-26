# Libft Tester

This is a **libft tester** created by **Bruna**, **Eduardo**, and **Natalia**. It's our first tester! Our goal is to learn how to create our own testers, how to create Makefiles, how compilation works, and how to collaborate on git.

## Overview
This tester checks each function individually. We are not checking the compilation requirements of the exercise.

**Note**: Don't rely on us to check if your functions work! Expect all types of compilation errors, logic errors, and inaccurate results. We accept constructive feedback. This is our baby; it's ugly, but we love it anyway.

## How to Use

1. From inside your libft folder, clone this repository:
`git clone https://github.com/tardineduardo/libft_tester.git`

3. Open the test folder:
`cd libft_tester`

4. Run the tests:
`make`

5. To update the existing /libft_tester folder, from inside it run:
`git pull origin main`

## Important Notes
We are still learning how to create more complex and dynamic Makefiles, so for this version, you need to follow stricter rules:
- Your main libft folder can't have any `.c` files other than the ones expected by the exercise.
- All `.c` files to be tested need to be on the same root folder.
- All `.c` files to be tested must include this header:
 ```c
 #include "libft.h"
 ```
## Tests available
- ft_atoi
- ft_isalpha
- ft_isascii
- ft_isdigit
- ft_memset
- ft_memcpy
- ft_strlen
- ft_toupper
- ft_tolower  
