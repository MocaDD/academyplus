/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:26:20 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:19:24 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

int		main(void)
{
	int		fd;

	system("rm -f temporary_file.txt");
	system("rm -f test_result_file.txt");
	system("touch temporary_file.txt");
	system("touch test_result_file.txt");
	system("chmod 755 temporary_file.txt");
	system("chmod 755 test_result_file.txt");
	fd = open(TEST_RESULT_FILE, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		ft_putendl("Could not open test result file.");
		return (0);
	}
	ft_putendl("STARTING TESTS");
	test_count_char_in_string(fd);
	test_county_exists(fd);
	test_county_is_valid(fd);
	test_database_is_valid(fd);
	test_email_domain_is_valid(fd);
	test_email_format_is_valid(fd);
	test_email_is_valid(fd);
	test_email_local_part_is_valid(fd);
	test_email_subdomain_is_valid(fd);
	test_get_word_number(fd);
	test_grade_characters_are_valid(fd);
	test_grade_format_is_valid(fd);
	test_grade_is_valid(fd);
	test_has_grades_over(fd);
	test_is_from_county(fd);
	test_last_char_is(fd);
	test_line_ends_with_semicolon(fd);
	test_line_format_is_valid(fd);
	test_line_has_columns(fd);
	test_line_is_valid(fd);
	test_name_format_is_valid(fd);
	test_name_is_valid(fd);
	test_names_are_valid(fd);
	test_separated_grade_format_is_valid(fd);
	test_simple_grade_format_is_valid(fd);
	test_string_has_no_blanks(fd);
	test_string_has_one_char_of(fd);
	test_string_is_alphabetic(fd);
	test_string_is_not_empty(fd);
	test_string_is_not_too_big(fd);
	test_words_are_valid(fd);
	close(fd);
	ft_putendl("-------------------------------------");
	system("cat test_result_file.txt");
	system("rm -f temporary_file.txt");
	system("rm -f test_result_file.txt");
	ft_putendl("-------------------------------------");
	return (0);
}
