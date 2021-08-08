/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 08:15:56 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 10:56:04 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# ifndef t_size
typedef unsigned int	t_size;
# endif

/**
 * @brief Check if character is alphabetic character and return 1(true)
 * or 0(false)
 *
 * @param character	Character to be checked
 * @return int		1 = character is alphabetic character 0 = character
 * isn't alphabetic character
 */
int		ft_isalpha(int character);

/**
 * @brief Check if character is digit character and return 1(true) or 0(false)
 *
 * @param character	Character to be checked
 * @return int		1 = character is digit character 0 = character isn't
 * digit character
 */
int		ft_isdigit(int character);

/**
 * @brief Check if character is digit or alphabetic character and
 * return 1(true) or 0(false)
 *
 * @param character	Character to be checked
 * @return int		1 = character is digit or alphabetic character
 * 0 = character isn't digit or alphabetic character
 */
int		ft_isalnum(int character);

/**
 * @brief Check if character is valid ascii and return 1(true) or 0(false)
 *
 * @param character	Character to be checked
 * @return int		1 = character is valid ascii 0 = character isn't valid
 */
int		ft_isascii(int character);

/**
 * @brief Check if character is printable and return 1(true) or 0(false)
 *
 * @param character Character to be checked
 * @return int 1 = character is printable 0 = character isn't printable
 */
int		ft_isprint(int character);

/**
 * @brief Count chars in string
 *
 * @param string	String to be counted
 * @return int	Lenght of string
 */
t_size	ft_strlen(const char *string);

/**
 * @brief Set quantity bytes in memory and return input memory
 *
 * @param memory	Memory address that will be changed
 * @param byte		Bite to be set in memory address
 * @param quantity	Number of memory addresses to change
 * @return void*	Input memory address
 */
void	*ft_memset(void *memory, int byte, t_size quantity);

/**
 * @brief Set quantity NULL bytes in memory
 *
 * @param memory	Memory address that will be changed
 * @param quantity	Number of times to change
 * @return void
 */
void	ft_bzero(void *memory, t_size quantity);

/**
 * @brief Copy quantity bytes from source to destitation and return destitation
 *
 * @param destitation	Memory address to copy bytes
 * @param source		Memory address from original bytes
 * @param quantity		Number of bytes to copy
 * @return void*		Destitation
 */
void	*ft_memcpy(void *destitation, const void *source, t_size quantity);

/**
 * @brief Copy quantity bytes from source to destitation and return
 * destitation, taking care overlap
 *
 * @param destitation	Memory address to copy bytes
 * @param source		Memory address from original bytes
 * @param quantity		Number of bytes to copy
 * @return void*		Destitation
 */
void	*ft_memmove(void *destitation, const void *source, t_size quantity);

/**
 * @brief Copy quantity chars from source to destitation and
 * return lengthsource
 *
 * @param destitation	String to copy chars
 * @param source		String from original chars
 * @param quantity		Number of chars to copy
 * @return t_size	Length *source
 */
t_size	ft_strlcpy(char *destitation, const char *source, t_size quantity);

/**
 * @brief Concatenate quantity chars from source after dest and return min
 * between (length source) + (length dest) and (length source) + (size)
 *
 * @param destitation	String to concatenate chars
 * @param source		String from original chars
 * @param quantity		Number of chars to concatenate
 * @return t_size	If size more than (length destitation) then
 * (length source) + (length dest) else (length source) + (size)
 */
t_size	ft_strlcat(char *destitation, const char *source, t_size quantity);

/**
 * @brief If input character is a letter lower case, change to upper case
 * else return the input
 *
 * @param character	Char to check and change
 * @return int		Char changed or own input
 */
int		ft_toupper(int character);

/**
 * @brief If input character is a letter upper case, change to lower case
 * else return the input
 *
 * @param character	Char to check and change
 * @return int		Char changed or own input
 */
int		ft_tolower(int character);

/**
 * @brief Find character in string and return the pointer to the
 * first occurrence or NULL if not found
 *
 * @param string		Full string
 * @param character		Char to find
 * @return char*|NULL	Pointer to first found char or NULL if not found
 */
char	*ft_strchr(const char *string, int character);

/**
 * @brief Find character in string and return the pointer to the
 * last occurrence or NULL if not found
 *
 * @param string		Full string
 * @param character		Char to find
 * @return char*|NULL	Pointer to last found char or NULL if not found
 */
char	*ft_strrchr(const char *string, int character);

/**
 * @brief Compare n chars in two strings and return 0 if they are equal
 * or the difference between the first different char
 *
 * @param s1		First string
 * @param s2		Second string
 * @param quantity	Number of chars to compare
 * @return int	Difference between the firsts differents chars
 * or 0 if they are equal
 */
int		ft_strncmp(const char *s1, const char *s2, t_size quantity);

/**
 * @brief Find byte by n addresses in memory and return the pointer to the
 * first occurrence or NULL if not found
 *
 * @param memory		Full memory address
 * @param byte			Byte to find
 * @param n				Number of chars to compare
 * @return void*|NULL	Pointer to first found byte or NULL if not found
 */
void	*ft_memchr(const void *memory, int byte, t_size quantity);

/**
 * @brief Compare n bytes in two memory addresses and return 0 if they are
 * equal or the difference between the first different byte
 *
 * @param m1	First memory address
 * @param m2	Second memory address
 * @param n		Number of bytes to compare
 * @return int	Difference between the firsts differents bytes
 * or 0 if they are equal
 */
int		ft_memcmp(const void *m1, const void *m2, t_size quantity);

/**
 * @brief Find substr in string by quantity chars and return the pointer to
 * the first occurrence or NULL if not found
 *
 * @param string			Full string
 * @param substr			Sub string
 * @param quantity			Number of chars to compare
 * @return char*|NULL	Pointer to first found substr or NULL if not found
 */
char	*ft_strnstr(const char *string, const char *substr, t_size quantity);

/**
 * @brief Convert a numeric string to int and return the int
 *
 * @param char*	Numeric string
 * @return int	Number that represents the string
 */
int		ft_atoi(const char *string);

/**
 * @brief Allocates count times size bytes, set NULL in all bytes and return
 * pointer to the allocated memory address
 *
 * @param count		Quantity indexes in array
 * @param size		Quantity by index
 * @return void*	Pointer to the allocated memory address
 */
void	*ft_calloc(t_size count, t_size size);

/**
 * @brief Duplicate string and return the pointer to duplicate string
 *
 * @param string	Original string
 * @return void*	Pointer to duplicate string
 */
char	*ft_strdup(const char *string);

/**
 * @brief Duplicate a portion of string and return the pointer this portion
 *
 * @param string	Original string
 * @param start		Position to start copy
 * @param len		Quantity of chars to copy
 * @return char*	Pointer to portion of the original string
 */
char	*ft_substr(char const *string, unsigned int start, t_size len);

/**
 * @brief Join two strings in a third string and return the pointer to the
 * third string
 *
 * @param s1		First string
 * @param s2		Second string
 * @return char*	Tird string, union of the two original strings
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Remove all chars in set of the begin and end of string and
 * return the pointer to this trimmed string
 *
 * @param string	Full string
 * @param set		Chars to remove
 * @return char*	The trimmed string
 */
char	*ft_strtrim(char const *string, char const *set);

/**
 * @brief Split string by char in array of strings and return the pointer
 * to this array of strings
 *
 * @param string	Full string
 * @param delimiter	Chars to split
 * @return char**	The array of strings
 */
char	**ft_split(char const *string, char delimiter);

/**
 * @brief Convert number to a string and return the pointer to the string
 *
 * @param number	Integer to be converted
 * @return char*	Pointer to the converted string
 */
char	*ft_itoa(int number);

/**
 * @brief Apply func to each char in string and return the pointer
 * to the new string
 *
 * @param string	Original string
 * @param func		Function that change each character
 * @return char*	Pointer to the converted string
 */
char	*ft_strmapi(char const *string, char (*func)(unsigned int, char));

/**
 * @brief Apply func to each char in string
 *
 * @param string	Original string
 * @param func		Function that change each character
 * @return void
 */
void	ft_striteri(char *string, void (*func)(unsigned int, char*));

/**
 * @brief Write character in file_descriptor
 *
 * @param character			Character to write
 * @param file_descriptor	File descriptor to write
 * @return void
 */
void	ft_putchar_fd(char character, int file_descriptor);

/**
 * @brief Write string in file_descriptor
 *
 * @param string			String to write
 * @param file_descriptor	File descriptor to write
 * @return void
 */
void	ft_putstr_fd(char *string, int file_descriptor);

/**
 * @brief Write string in file_descriptor with "\n"
 *
 * @param string			String to write
 * @param file_descriptor	File descriptor to write
 * @return void
 */
void	ft_putendl_fd(char *string, int file_descriptor);

/**
 * @brief Write number in file_descriptor
 *
 * @param number			Character to write
 * @param file_descriptor	File descriptor to write
 * @return void
 */
void	ft_putnbr_fd(int number, int file_descriptor);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/**
 * @brief Create and return new t_list with content
 *
 * @param content	Content of t_list
 * @return t_list	New t_list
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Allocate new as first item in list
 *
 * @param lst	Actual list of t_lists
 * @param new	New first t_list
 * @return void
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Count t_lists in lst
 *
 * @param lst	List of t_list
 * @return int	Quantity items in lst
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Allocate new as last item in list
 *
 * @param lst	Actual list of t_lists
 * @param new	New last t_list
 * @return void
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Return last t_list in lst
 *
 * @param lst		List of t_list
 * @return t_list	Last t_list in lst
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Clear content in lst with del and free memory
 *
 * @param lst	t_lists to be free memory
 * @param del	Function to clear content
 * @return void
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * @brief Clear all contents in lst with del and free memories.
 *
 * @param lst	Actual list of t_lists
 * @param del	Function to clear contents
 * @return void
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Apply func to each content in lst
 *
 * @param lst	Actual list of t_lists
 * @param func	Function to change contents
 * @return void
 */
void	ft_lstiter(t_list *lst, void (*func)(void *));

/**
 * @brief Create new lst changing each contents with func
 *
 * @param lst	Content of t_list
 * @param func	Function to change contents
 * @param del	(not used)Function to clear contents
 * @return t_list	New t_list
 */
t_list	*ft_lstmap(t_list *lst, void *(*func)(void *), void (*del)(void *));

#endif
