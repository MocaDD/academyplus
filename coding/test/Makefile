# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/06 11:10:19 by jfazakas          #+#    #+#              #
#    Updated: 2015/11/06 18:08:51 by jfazakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../test_program

SRC = src/test_main.c\
	  src/test_count_char_in_string.c src/test_county_exists.c\
	  src/test_county_is_valid.c src/test_database_is_valid.c\
	  src/test_email_domain_is_valid.c src/test_email_format_is_valid.c\
	  src/test_email_is_valid.c src/test_email_local_part_is_valid.c\
	  src/test_email_subdomain_is_valid.c src/test_get_word_number.c\
	  src/test_grade_characters_are_valid.c src/test_grade_format_is_valid.c\
	  src/test_grade_is_valid.c src/test_has_grades_over.c\
	  src/test_is_from_county.c src/test_last_char_is.c\
	  src/test_line_ends_with_semicolon.c src/test_line_format_is_valid.c\
	  src/test_line_has_columns.c src/test_line_is_valid.c\
	  src/test_name_format_is_valid.c src/test_name_is_valid.c\
	  src/test_names_are_valid.c src/test_separated_grade_format_is_valid.c\
	  src/test_simple_grade_format_is_valid.c src/test_string_has_no_blanks.c\
	  src/test_string_has_one_char_of.c src/test_string_is_alphabetic.c\
	  src/test_string_is_not_empty.c src/test_string_is_not_too_big.c\
	  src/test_words_are_valid.c ../src/count_char_in_string.c\
	  ../src/county_exists.c ../src/county_is_valid.c\
	  ../src/database_is_valid.c ../src/email_domain_is_valid.c\
	  ../src/email_format_is_valid.c ../src/email_is_valid.c\
	  ../src/email_local_part_is_valid.c ../src/email_subdomain_is_valid.c\
	  ../src/grade_characters_are_valid.c ../src/grade_format_is_valid.c\
	  ../src/grade_is_valid.c ../src/has_grades_over.c ../src/is_from_county.c\
	  ../src/last_char_is.c ../src/line_ends_with_semicolon.c\
	  ../src/line_format_is_valid.c ../src/line_has_columns.c\
	  ../src/line_is_valid.c ../src/name_format_is_valid.c\
	  ../src/name_is_valid.c ../src/names_are_valid.c\
	  ../src/separated_grade_format_is_valid.c\
	  ../src/simple_grade_format_is_valid.c ../src/string_has_no_blanks.c\
	  ../src/string_is_alphabetic.c ../src/string_is_not_empty.c\
	  ../src/string_is_not_too_big.c ../src/words_are_valid.c\
	  ../src/string_has_one_char_of.c ../src/get_next_line.c\
	  ../src/get_word_number.c ../src/open_file.c ../src/print_error_message.c\
	  ../src/log_simple.c ../src/log_int.c ../src/log_string.c\

OBJ = test_main.o\
	  test_count_char_in_string.o test_county_exists.o test_county_is_valid.o\
	  test_database_is_valid.o test_email_domain_is_valid.o\
	  test_email_format_is_valid.o test_email_is_valid.o\
	  test_email_local_part_is_valid.o test_email_subdomain_is_valid.o\
	  test_get_word_number.o test_grade_characters_are_valid.o\
	  test_grade_format_is_valid.o test_grade_is_valid.o\
	  test_has_grades_over.o test_is_from_county.o\
	  test_last_char_is.o test_line_ends_with_semicolon.o\
	  test_line_format_is_valid.o test_line_has_columns.o\
	  test_line_is_valid.o test_name_format_is_valid.o\
	  test_name_is_valid.o test_names_are_valid.o\
	  test_separated_grade_format_is_valid.o\
	  test_simple_grade_format_is_valid.o test_string_has_no_blanks.o\
	  test_string_has_one_char_of.o test_string_is_alphabetic.o\
	  test_string_is_not_empty.o test_string_is_not_too_big.o\
	  test_words_are_valid.o count_char_in_string.o county_exists.o\
	  county_is_valid.o database_is_valid.o email_domain_is_valid.o\
	  email_format_is_valid.o email_is_valid.o email_local_part_is_valid.o\
	  email_subdomain_is_valid.o grade_characters_are_valid.o\
	  grade_format_is_valid.o grade_is_valid.o has_grades_over.o\
	  is_from_county.o last_char_is.o line_ends_with_semicolon.o\
	  line_format_is_valid.o line_has_columns.o line_is_valid.o\
	  name_format_is_valid.o name_is_valid.o names_are_valid.o\
	  separated_grade_format_is_valid.o simple_grade_format_is_valid.o\
	  string_has_no_blanks.o string_is_alphabetic.o string_is_not_empty.o\
	  string_is_not_too_big.o words_are_valid.o string_has_one_char_of.o\
	  get_next_line.o get_word_number.o open_file.o print_error_message.o\
	  log_simple.o log_int.o log_string.o\

INC = ../includes/

FLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -I $(INC) -c $(SRC)
	@gcc $(OBJ) -L ../libft/ -lft -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
