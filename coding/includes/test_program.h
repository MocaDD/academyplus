/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_program.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 18:07:49 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:07:52 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_PROGRAM_H
# define TEST_PROGRAM_H

# include "good_coding_practices.h"
# include "libft.h"

# define TEST_RESULT_FILE "test_result_file.txt"

void	test_count_char_in_string(int fd);
void	test_county_exists(int fd);
void	test_county_is_valid(int fd);
void	test_database_is_valid(int fd);
void	test_email_domain_is_valid(int fd);
void	test_email_format_is_valid(int fd);
void	test_email_is_valid(int fd);
void	test_email_local_part_is_valid(int fd);
void	test_email_subdomain_is_valid(int fd);
void	test_grade_characters_are_valid(int fd);
void	test_grade_format_is_valid(int fd);
void	test_grade_is_valid(int fd);
void	test_has_grades_over(int fd);
void	test_last_char_is(int fd);
void	test_line_ends_with_semicolon(int fd);
void	test_line_format_is_valid(int fd);
void	test_line_has_columns(int fd);
void	test_line_is_valid(int fd);
void	test_name_format_is_valid(int fd);
void	test_name_is_valid(int fd);
void	test_names_are_valid(int fd);
void	test_separated_grade_format_is_valid(int fd);
void	test_simple_grade_format_is_valid(int fd);
void	test_string_has_no_blanks(int fd);
void	test_string_has_one_char_of(int fd);
void	test_string_is_alphabetic(int fd);
void	test_string_is_not_empty(int fd);
void	test_string_is_not_too_big(int fd);
void	test_words_are_valid(int fd);
void	test_is_from_county(int fd);
void	test_get_word_number(int fd);

#endif
