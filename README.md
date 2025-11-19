
# 42 ft_printf

A personnal creation of the 42 ft_printf project. The goal of this project is to recreate the printf function with the following flags : cspdiuxX%.

Here, we have to handle the number of printed charaters in order to return the length after printing the text.

Also, this function should not have memory leaks, and should not crash in any case
## How to use ft_printf

To use it, you first need to clone the repo.

```bash
  git clone https://github.com/sousampere/42_printf
```

You can then compile the ft_printf library using make :

```bash
  make
```

You now have a compiled library called "libftprintf.a" that makes you able to use ft_printf. Here is a compilation example :

```bash
  cc (my_program_using_ft_printf).c libftprintf.a
```

This is an example of how it is used :

```c
#include "ft_printf.h"

int main()
{
    int i;

    i = 5;
    i = ft_printf("Value of i : %d\n", i);
    ft_printf("... and the previous ft_printf wrote %d characters." i);
    return (0);
}
```
## Authors

- [@sousampere](https://github.com/sousampere)


## 🚀 About Me
I am a student at the 42 Mulhouse school. Most of my public projects will be from this school, while I will keep private most of my other projects.
## Contact me !

 - [LinkedIn](https://fr.linkedin.com/in/gaspardtourdiat)
 - [My website](https://gaspardtourdiat.fr/)
 - [For 42 students (my intra profile)](https://profile.intra.42.fr/users/gtourdia)


![Logo](https://assets.km0.omerloclients.com/community/cfbe5a0b-7637-43a0-94f9-7df2fc288c1d.jpg)

