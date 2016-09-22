/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   good_coding_practices.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 18:07:30 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:07:44 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GOOD_CODING_PRACTICES_H
# define GOOD_CODING_PRACTICES_H

# include "libft.h"
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>

# define BUFF_SIZE 1
# define STANDARD_CSV "csv/students.csv"
# define COUNTY_LIST "includes/county_list.txt"
# define LOG_FILE "log.txt"
# define NAME_MAX_LENGTH 32
# define EMAIL_MAX_LENGTH 32
# define GRADE_MAX_LENGTH 8
# define COUNTY_MAX_LENGTH 16

int		count_char_in_string(char *string, char character);
int		county_exists(char *county, int line_number, char *error_message);
int		county_is_valid(char *county, int line_number);
int		database_is_valid(int fd);
int		email_domain_is_valid(char *domain, int line_number);
int		email_format_is_valid(char *email, int line_number);
int		email_is_valid(char *email, int line_number);
int		email_local_part_is_valid(char *local_part, int line_number);
int		email_subdomain_is_valid(char *subdomain, int line_number);
int		grade_characters_are_valid(char *grade, int line_numbers);
int		grade_format_is_valid(char *grade, int line_number);
int		grade_is_valid(char *grade, int line_number);
int		has_grades_over(char *line, int grade);
int		is_from_county(char *line, char *county);
int		last_char_is(char *string, char character);
int		line_ends_with_semicolon(char *line, int line_number);
int		line_format_is_valid(char *line, int line_number);
int		line_has_columns(char *line, int columns, int line_number);
int		line_is_valid(char *line, int line_number);
int		name_format_is_valid(char *name, int line_number);
int		name_is_valid(char *name, int line_number);
int		names_are_valid(char *line, int line_number);
int		separated_grade_format_is_valid(char *grade, int line_number);
int		simple_grade_format_is_valid(char *grade, int line_number);
int		string_has_no_blanks(char *string, int line_number,
				char *error_message);
char	*string_has_one_char_of(char *string, char character);
int		string_is_alphabetic(char *string, int line_number,
				char *error_message);
int		string_is_not_empty(char *string, int line_number, char *error_message);
int		string_is_not_too_big(char *string, int max_length, int line_number,
				char *error_message);
int		words_are_valid(char *line, int line_number);

int		get_next_line(int fd, char **line);
void	print_error_message(char *message, int line_number);
int		choose_and_open_database(int *fd, int ac, char **av);
int		open_file(int *fd, char *filename);
char	*get_word_number(char *line, int column);
void	print_student_name(char *line);
void	log_simple(char *message);
void	log_int(char *message, int number);
void	log_string(char *message, char *string);
void	go_to_the_file_start(int fd);

#endif
