# **Libft**

##### Your very first own library.

##### _Summary: This project aims to code a C library regrouping usual functions that you’ll be use for all your next projects. Version: 15_

<br>
<br>

# Mandatory part

| **Program name**    | libft.a                                                                                         |
| ------------------- | ----------------------------------------------------------------------------------------------- |
| **Turn in files**   | `*.c, libft.h, Makefile`                                                                        |
| **Makefile**        | NAME, all, clean, fclean, re                                                                    |
| **External functs** | `Detailed below`                                                                                |
| **Description**     | `Write your own library: a collection of functions that will be a useful tool for your cursus.` |

<br>

## Part 1 - Libc functions

##### _In this first part, you must re-code a set of the `libc` functions, as defined in their `man`. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by "`ft_`". For instance, `strlen`becomes`ft_strlen`.

<br>

> ⚠️
>
> ##### Some of the functions’ prototypes you have to re-code use the "restrict" qualifier. This keyword is part of the c99 standard. It is therefore forbidden to include it in your prototypes and to compile it with the flag `-std=c99`.

<br>

##### _You must re-code the following functions. These function do not need any external functions:_

- `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`
- `strlen`, `memset`, `bzero`, `memcpy`, `memmove`, `strlcpy`, `strlcat`, `strncmp`
- `toupper`, `tolower`, `strchr`, `strrchr`
- `memchr`, `memcmp`, `strnstr`, `atoi`

##### _You must also re-code the following functions, using the function "`malloc`":_

- `calloc`, `strdup`

<br>

## Part 2 - Additional functions

##### _In this second part, you must code a set of functions that are either not included in the `libc`, or included in a different form. Some of these functions can be useful to write Part 1’s functions._

<br>

| **Function name**    | ft_substr                                                                                                                                                                                                                                                                                                                                |
| -------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `char *ft_substr(char const *s, unsigned int start, size_t len);`                                                                                                                                                                                                                                                                        |
| **Turn in files**    | -                                                                                                                                                                                                                                                                                                                                        |
| **Parameters**       | `#1. 부분 문자열 (substring) 을 생성할 원본 문자열` <br> `#2. 부분 문자열의 맨 처음 인덱스` <br> `#3. 부분 문자열의 최대 길이`                                                                                                                                                                                                           |
| **Return value**     | `부분 문자열. 할당 실패 시, NULL`                                                                                                                                                                                                                                                                                                        |
| **External functs.** | `malloc`                                                                                                                                                                                                                                                                                                                                 |
| **Description**      | _Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’._ <br> `malloc(3) 을 이용하여 메모리를 할당받은 후, 원본 문자열 's' 로부터 부분 문자열을 생성하여 반환합니다.` <br>`부분 문자열은 인덱스 'start' 부터 시작하며, 최대 길이 'len'을 갖습니다.` |

<br>

| **Function name**    | ft_strjoin                                                                                                                                                                                                                                |
| -------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `char *ft_strjoin(char const *s1, char const *s2);`                                                                                                                                                                                       |
| **Turn in files**    | -                                                                                                                                                                                                                                         |
| **Parameters**       | `#1. 접두 문자열 (prefix string)` <br> `#2. 접미 문자열 (suffix string)`                                                                                                                                                                  |
| **Return value**     | `새로운 문자열. 할당 실패 시, NULL`                                                                                                                                                                                                       |
| **External functs.** | `malloc`                                                                                                                                                                                                                                  |
| **Description**      | _Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’._ <br> `malloc(3) 을 이용하여 메모리를 할당받은 후, 문자열 's1' 과 's2' 를 이어붙인 새로운 문자열을 생성하여 반환합니다.` |

<br>

| **Function name**    | ft_strtrim                                                                                                                                                                                                                                                                           |
| -------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Prototype**        | `char *ft_strtrim(char const *s1, char const *set);`                                                                                                                                                                                                                                 |
| **Turn in files**    | -                                                                                                                                                                                                                                                                                    |
| **Parameters**       | `#1. 양 쪽을 잘라낼 원본 문자열` <br> `#2. 제거될 문자들의 집합`                                                                                                                                                                                                                     |
| **Return value**     | `문자가 제거된 문자열. 할당 실패 시, NULL`                                                                                                                                                                                                                                           |
| **External functs.** | `malloc`                                                                                                                                                                                                                                                                             |
| **Description**      | _Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string._ <br> `malloc(3) 을 이용하여 메모리를 할당받은 후, 's1'의 양 쪽 끝에서 'set'에 지정된 문자들이 제거된 문자열 사본을 반환합니다.` |

<br>

| **Function name**    | ft_split                                                                                                                                                                                                                                                                                                                                                                  |
| -------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `char **ft_split(char const *s, char c);`                                                                                                                                                                                                                                                                                                                                 |
| **Turn in files**    | -                                                                                                                                                                                                                                                                                                                                                                         |
| **Parameters**       | `#1. 분할할 문자열` <br> `#2. 구분자 (delimiter)`                                                                                                                                                                                                                                                                                                                         |
| **Return value**     | `split을 통해 분할된 문자열의 배열. 할당 실패 시, NULL`                                                                                                                                                                                                                                                                                                                   |
| **External functs.** | `malloc, free`                                                                                                                                                                                                                                                                                                                                                            |
| **Description**      | _Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer._ <br> `malloc(3) 을 이용하여 메모리를 할당받은 후, 구분자 'c' 를 기준으로 문자열 's'를 분할하여 그 결과를 담은 새로운 문자열 배열을 반환합니다. 문자열 배열의 끝은 NULL 포인터로 끝나야 합니다.` |

<br>

| **Function name**    | ft_itoa                                                                                                                                                                                                                                                                       |
| -------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `char *ft_itoa(int n);`                                                                                                                                                                                                                                                       |
| **Turn in files**    | -                                                                                                                                                                                                                                                                             |
| **Parameters**       | `#1. 변환할 정수`                                                                                                                                                                                                                                                             |
| **Return value**     | `정수를 표현하는 문자열. 할당 실패 시, NULL`                                                                                                                                                                                                                                  |
| **External functs.** | `malloc`                                                                                                                                                                                                                                                                      |
| **Description**      | _Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled._ <br> `malloc(3) 을 이용하여 메모리를 할당받은 후, 인자로 받은 정수를 나타내는 문자열을 반환합니다. 음수 또한 무조건 처리되어야 합니다.` |

<br>

| **Function name**    | ft_strmapi                                                                                                                                                                                                                                                                                                                                                                                                       |
| -------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`                                                                                                                                                                                                                                                                                                                                                |
| **Turn in files**    | -                                                                                                                                                                                                                                                                                                                                                                                                                |
| **Parameters**       | `#1. 함수를 적용할 문자열` <br> `#2. 문자열의 각 문자에 적용할 함수`                                                                                                                                                                                                                                                                                                                                             |
| **Return value**     | `원본 문자열에서 함수 'f'를 성공적으로 적용하여 생성된 결과 문자열. 할당 실패 시, NULL`                                                                                                                                                                                                                                                                                                                          |
| **External functs.** | `malloc`                                                                                                                                                                                                                                                                                                                                                                                                         |
| **Description**      | _Applies the function ’f’ to each character of the string ’s’ , and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’._ <br> `문자열 's' 의 각 문자를 순회하며 함수 'f'를 적용하고, 해당 문자의 인덱스를 함수 'f'의 첫 번째 인자로 사용합니다. 각 문자에 함수가 적용된 새로운 문자열을 생성합니다 (malloc(3) 을 이용하여 메모리를 할당)` |

<br>

| **Function name**    | ft_striteri                                                                                                                                                                                                                                                                                                                                                                                                    |
| -------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `void ft_striteri(char *s, void (*f)(unsigned int, char*));`                                                                                                                                                                                                                                                                                                                                                   |
| **Turn in files**    | -                                                                                                                                                                                                                                                                                                                                                                                                              |
| **Parameters**       | `#1. 함수를 적용할 문자열` <br> `#2. 문자열의 각 문자에 적용할 함수`                                                                                                                                                                                                                                                                                                                                           |
| **Return value**     | `없음`                                                                                                                                                                                                                                                                                                                                                                                                         |
| **External functs.** | `없음`                                                                                                                                                                                                                                                                                                                                                                                                         |
| **Description**      | _Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary_ <br> `문자열 's' 의 각 문자를 순회하며 함수 'f'를 적용하고, 해당 문자의 인덱스를 함수 'f'의 첫 번째 인자로 사용합니다. 또한 각 문자의 주소값이 'f' 함수의 두 번째 인자로 사용되며, 경우에 따라 수정될 수 있습니다.` |

<br>

| **Function name**    | ft_putchar_fd                                                                                                  |
| -------------------- | -------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `void ft_putchar_fd(char c, int fd);`                                                                          |
| **Turn in files**    | -                                                                                                              |
| **Parameters**       | `#1. 출력할 문자` <br> `#2. 값이 쓰여질 파일 식별자 (file descriptor)`                                         |
| **Return value**     | `없음`                                                                                                         |
| **External functs.** | `write`                                                                                                        |
| **Description**      | _Outputs the character ’c’ to the given file descriptor._ <br> `제공받은 파일 식별자에 문자 'c'를 출력합니다.` |

<br>

| **Function name**    | ft_putstr_fd                                                                                                  |
| -------------------- | ------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `void ft_putstr_fd(char *s, int fd);`                                                                         |
| **Turn in files**    | -                                                                                                             |
| **Parameters**       | `#1. 출력할 문자열` <br> `#2. 값이 쓰여질 파일 식별자 (file descriptor)`                                      |
| **Return value**     | `없음`                                                                                                        |
| **External functs.** | `write`                                                                                                       |
| **Description**      | _Outputs the string ’s’ to the given file descriptor._ <br> `제공받은 파일 식별자에 문자열 's'를 출력합니다.` |

<br>

| **Function name**    | ft_putendl_fd                                                                                                                                         |
| -------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `void ft_putendl_fd(char *s, int fd);`                                                                                                                |
| **Turn in files**    | -                                                                                                                                                     |
| **Parameters**       | `#1. 출력할 문자열` <br> `#2. 값이 쓰여질 파일 식별자 (file descriptor)`                                                                              |
| **Return value**     | `없음`                                                                                                                                                |
| **External functs.** | `write`                                                                                                                                               |
| **Description**      | _Outputs the string ’s’ to the given file descriptor, followed by a newline._ <br> `제공받은 파일 식별자에 문자열 's'를 출력하고, 개행을 출력합니다.` |

<br>

| **Function name**    | ft_putnbr_fd                                                                                                 |
| -------------------- | ------------------------------------------------------------------------------------------------------------ |
| **Prototype**        | `void ft_putnbr_fd(int n, int fd);`                                                                          |
| **Turn in files**    | -                                                                                                            |
| **Parameters**       | `#1. 출력할 정수` <br> `#2. 값이 쓰여질 파일 식별자 (file descriptor)`                                       |
| **Return value**     | `없음`                                                                                                       |
| **External functs.** | `write`                                                                                                      |
| **Description**      | _Outputs the integer ’n’ to the given file descriptor._ <br> `제공받은 파일 식별자에 정수 'n'를 출력합니다.` |

<br>

# Bonus part

##### _Having functions to manipulate memory and strings is very useful, but you’ll soon discover that having functions to manipulate lists is even more useful._

##### _`make bonus` will add the bonus functions to the `libft.a` library._

##### _You’ll use the following structure to represent the elements of your list. This structure must be added to your `libft.h` file._

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
}              t_list;
```

##### _Here is a description of the fields of the t_list struct:_

- ##### _`content` : The data contained in the element. The `void *` allows to store any kind of data._

  `content`: 요소에 포함된 데이터. `void *` 를 통해 어떠한 자료형의 값도 담을 수 있습니다.

- ##### _`next` : The next element’s address or `NULL` if it’s the last element._
  `next`: 다음 요소의 주소값. 만약 해당 요소가 마지막 요소라면, `NULL`을 가리킵니다.

##### _The following functions will allow you to easily use your lists._

<br>

| **Function name**     | ft_lstnew                                                                                                                                                                                                                                                                                                                                                                                 |
| --------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**         | `t_list *ft_lstnew(void *content);`                                                                                                                                                                                                                                                                                                                                                       |
| \*Turn in files일\*\* | -                                                                                                                                                                                                                                                                                                                                                                                         |
| **Parameters**        | `#1. 새로운 요소에 들어갈 content`                                                                                                                                                                                                                                                                                                                                                        |
| **Return value**      | `새로운 요소 (element)`                                                                                                                                                                                                                                                                                                                                                                   |
| **External functs.**  | `malloc`                                                                                                                                                                                                                                                                                                                                                                                  |
| **Description**       | _Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL._ <br> `malloc(3) 을 통해 메모리를 할당하고 새로운 요소를 반환합니다. 요소 내의 변수 'content' 는 인자로 받아온 'content' 로 초기화되어야 합니다. 요소 내의 변수 'next'는 NULL로 초기화되어야 합니다.` |

<br>

| **Function name**    | ft_lstadd_front                                                                                         |
| -------------------- | ------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `void ft_lstadd_front(t_list **lst, t_list *new);`                                                      |
| **Turn in files**    | -                                                                                                       |
| **Parameters**       | `#1. 리스트의 맨 앞에 위치한 요소`<br>`#2. 리스트에 추가할 요소`                                        |
| **Return value**     | `없음`                                                                                                  |
| **External functs.** | `없음`                                                                                                  |
| **Description**      | _Adds the element ’new’ at the beginning of the list._ <br> `요소 'new'를 리스트의 맨 앞에 추가합니다.` |

<br>

| **Function name**    | ft_lstsize                                                                              |
| -------------------- | --------------------------------------------------------------------------------------- |
| **Prototype**        | `int ft_lstsize(t_list *lst);`                                                          |
| **Turn in files**    | -                                                                                       |
| **Parameters**       | `#1. 리스트의 맨 앞에 위치한 요소`                                                      |
| **Return value**     | `리스트의 길이`                                                                         |
| **External functs.** | `없음`                                                                                  |
| **Description**      | _Counts the number of elements in a list._ <br> `리스트에 포함된 요소의 개수를 셉니다.` |

<br>

| **Function name**    | ft_lstlast                                                                                    |
| -------------------- | --------------------------------------------------------------------------------------------- |
| **Prototype**        | `t_list *ft_lstlast(t_list *lst);`                                                            |
| **Turn in files**    | -                                                                                             |
| **Parameters**       | `#1. 리스트의 맨 앞에 위치한 요소`                                                            |
| **Return value**     | `리스트의 맨 마지막 요소`                                                                     |
| **External functs.** | `없음`                                                                                        |
| **Description**      | _Returns the last element of the list._ <br> `리스트의 맨 마지막에 위치한 요소를 반환합니다.` |

<br>

| **Function name**    | ft_lstadd_back                                                                                    |
| -------------------- | ------------------------------------------------------------------------------------------------- |
| **Prototype**        | `void ft_lstadd_back(t_list **lst, t_list *new);`                                                 |
| **Turn in files**    | -                                                                                                 |
| **Parameters**       | `#1. 리스트의 맨 앞에 위치한 요소의 포인터`<br>`#2. 리스트의 맨 끝에 추가할 요소`                 |
| **Return value**     | `없음`                                                                                            |
| **External functs.** | `없음`                                                                                            |
| **Description**      | _Adds the element ’new’ at the end of the list._ <br> `요소 'new'를 리스트의 맨 뒤에 추가합니다.` |

<br>

| **Function name**    | ft_lstdelone                                                                                                                                                                                                                                                                                                                                                      |
| -------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `void ft_lstdelone(t_list *lst, void (*del)(void *));`                                                                                                                                                                                                                                                                                                            |
| **Turn in files**    | -                                                                                                                                                                                                                                                                                                                                                                 |
| **Parameters**       | `#1. 삭제할 요소`<br>`#2. 요소의 content 삭제에 사용되는 함수 포인터`                                                                                                                                                                                                                                                                                             |
| **Return value**     | `없음`                                                                                                                                                                                                                                                                                                                                                            |
| **External functs.** | `free`                                                                                                                                                                                                                                                                                                                                                            |
| **Description**      | _Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed._ <br> `첫 번째 인자값으로 받은 요소의 content를 두 번째 인자로 받은 함수 포인터를 이용해 해제하고, 요소 자체의 메모리를 해제합니다. next 포인터는 해제하면 안 됩니다.` |

<br>

| **Function name**    | ft_lstclear                                                                                                                                                                                                                                                                                                                                                 |
| -------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `void ft_lstclear(t_list **lst, void (*del)(void *));`                                                                                                                                                                                                                                                                                                      |
| **Turn in files**    | -                                                                                                                                                                                                                                                                                                                                                           |
| **Parameters**       | `#1. 삭제할 요소의 포인터`<br>`#2. 요소의 content 삭제에 사용되는 함수 포인터`                                                                                                                                                                                                                                                                              |
| **Return value**     | `없음`                                                                                                                                                                                                                                                                                                                                                      |
| **External functs.** | `free`                                                                                                                                                                                                                                                                                                                                                      |
| **Description**      | _Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL._ <br> `함수 'del' 과 free(3) 을 이용하여 인자값으로 받은 요소와 그 뒤에 따라오는 리스트의 모든 요소들을 삭제하고 해제합니다. 마지막으로, 리스트의 포인터는 NULL로 설정되어야 합니다.` |

<br>

| **Function name**    | ft_lstiter                                                                                                                                                                                          |
| -------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `void ft_lstiter(t_list *lst, void (*f)(void *));`                                                                                                                                                  |
| **Turn in files**    | -                                                                                                                                                                                                   |
| **Parameters**       | `#1. 리스트상의 요소`<br>`#2. 리스트 내에서 반복 적용될 함수 포인터`                                                                                                                                |
| **Return value**     | `없음`                                                                                                                                                                                              |
| **External functs.** | `없음`                                                                                                                                                                                              |
| **Description**      | _Iterates the list ’lst’ and applies the function ’f’ to the content of each element._ <br> `리스트 'lst' 를 순회하며, 리스트에 포함된 모든 요소들의 content에 함수 'f'를 반복적으로 적용시킵니다.` |

<br>

| **Function name**    | ft_lstmap                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| -------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Prototype**        | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`                                                                                                                                                                                                                                                                                                                                                                                                                          |
| **Turn in files**    | -                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| **Parameters**       | `#1. 리스트상의 요소`<br>`#2. 리스트 내에서 반복 적용될 함수 포인터`<br>`#3. 필요할 경우, 요소의 content를 삭제하는 데에 사용되는 함수`                                                                                                                                                                                                                                                                                                                                                             |
| **Return value**     | `새로운 리스트. 할당 실패 시, NULL`                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| **External functs.** | `malloc, free`                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| **Description**      | _Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed._ <br> `리스트 'lst'의 요소들을 순회하며 각 요소의 content에 함수 'f'를 연속적으로 적용시킵니다. 또한 함수 'f'를 적용시킨 결과물들을 content로 담은 새로운 리스트를 생성합니다. 'del' 함수들은 필요 시 각 요소의 content를 삭제하는 데 사용됩니다.` |
