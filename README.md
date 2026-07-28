# libft

This lib is a set a basics functions that I use in most of my 42 Common Core projects.
This lib was made by me and [Pastico](https://github.com/Pastico136).

## Modules

Each module lives in its own folder with its own header. Include `libft.h` to
get everything, or a single module header (e.g. `str/ft_str.h`) if you only
need that part.

### `array/` — `ft_array.h`

Generic `void **` array helpers.

- `ft_arraylen` — length of a NULL-terminated pointer array
- `ft_free_array` — frees every element and the array itself
- `ft_arraydel` — removes one element in place, shifting the rest left
- `ft_arrayndel` — removes n consecutive elements in place

### `get_next_line/` — `get_next_line.h`

- `get_next_line` — reads the next line from a file descriptor, one call at a time

### `is/` — `ft_is.h`

Character classification, `ctype.h`-style.

- `ft_isalpha`, `ft_isalnum`, `ft_isascii`, `ft_isdigit`, `ft_isprint`, `ft_isspace`

### `lst/` — `ft_lst.h`

Singly linked list (`t_list`).

- `ft_lstnew` — creates a new node
- `ft_lstadd_back` / `ft_lstadd_front` — appends / prepends a node
- `ft_lstlast` — returns the last node
- `ft_lstsize` — counts the nodes
- `ft_lstiter` — applies a function to every node's content
- `ft_lstmap` — builds a new list by transforming every node's content
- `ft_lstdelone` — deletes a single node
- `ft_lstclear` — deletes and frees the whole list

### `math/` — `ft_math.h`

- `ft_min` — minimum of two `size_t` values

### `mem/` — `ft_mem.h`

- `ft_bzero`, `ft_calloc`, `ft_memchr`, `ft_memcmp`, `ft_memcpy`, `ft_memmove`, `ft_memset`

### `pointer/` — `pointer.h`

- `ft_swap_free` — frees a pointer and replaces it with a new one

### `ft_printf/` — `ft_printf.h`

- `ft_printf` — reimplementation of `printf` (`%s %c %p %d %i %u %x %X %%`)

### `put/` — `ft_put.h`

Writes to a given file descriptor.

- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### `reader/` — `reader.h`

- `ft_get_raw_file` — reads an entire file into a newly allocated string

### `str/` — `ft_str.h`

String helpers.

- `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`
- `ft_strdup`, `ft_strndup`, `ft_substr`, `ft_strjoin`, `ft_strfajoin`
- `ft_strlcpy`, `ft_strlcat`
- `ft_split`, `ft_strsplit`, `ft_strtrim`, `ft_strsspace`
- `ft_strtok` — repeated-call tokenizer taking the string by address
- `ft_strinsert` / `ft_strninsert` / `ft_strlinsert` — inserts a string at a given position
- `ft_remchr` / `ft_strreplace` — removes / replaces a set of characters in place
- `ft_striteri`, `ft_strmapi` — applies a function to each character
- `ft_atoi`, `ft_itoa`, `ft_tolower`, `ft_toupper`

### `strarray/` — `ft_strarray.h`

Helpers for NULL-terminated `char **` arrays.

- `ft_strarraydup` / `ft_strarrayndup` — duplicates an array of strings
- `ft_newstrarrayinsert` / `ft_newstrarrayninsert` — returns a new array with a string inserted
- `ft_strarrayinsert` / `ft_strarrayninsert` — inserts in place, freeing the original array
- `ft_strarrayprint` — prints each string on its own line
- `ft_strarraystr` — finds the first string containing a given substring
