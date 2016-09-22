# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/06 11:10:19 by jfazakas          #+#    #+#              #
#    Updated: 2015/11/06 18:04:54 by jfazakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = good_coding_practices

SRC = src/main.c\
	  src/count_char_in_string.c src/county_exists.c src/county_is_valid.c\
	  src/choose_and_open_database.c src/database_is_valid.c\
	  src/email_domain_is_valid.c src/email_format_is_valid.c\
	  src/email_is_valid.c src/email_local_part_is_valid.c\
	  src/email_subdomain_is_valid.c src/grade_characters_are_valid.c\
	  src/grade_format_is_valid.c src/grade_is_valid.c src/has_grades_over.c\
	  src/is_from_county.c src/last_char_is.c src/line_ends_with_semicolon.c\
	  src/line_format_is_valid.c src/line_has_columns.c src/line_is_valid.c\
	  src/name_format_is_valid.c src/name_is_valid.c src/names_are_valid.c\
	  src/separated_grade_format_is_valid.c src/simple_grade_format_is_valid.c\
	  src/string_has_no_blanks.c src/string_is_alphabetic.c\
	  src/string_is_not_empty.c src/string_is_not_too_big.c\
	  src/words_are_valid.c src/open_file.c src/print_error_message.c\
	  src/get_word_number.c src/string_has_one_char_of.c\
	  src/print_student_name.c src/get_next_line.c src/go_to_the_file_start.c\
	  src/log_simple.c src/log_int.c src/log_string.c

OBJ = main.o\
	  count_char_in_string.o county_exists.o county_is_valid.o\
	  choose_and_open_database.o database_is_valid.o email_domain_is_valid.o\
	  email_format_is_valid.o email_is_valid.o email_local_part_is_valid.o\
	  email_subdomain_is_valid.o grade_characters_are_valid.o\
	  grade_format_is_valid.o grade_is_valid.o has_grades_over.o\
	  is_from_county.o last_char_is.o line_ends_with_semicolon.o\
	  line_format_is_valid.o line_has_columns.o line_is_valid.o\
	  name_format_is_valid.o name_is_valid.o names_are_valid.o\
	  separated_grade_format_is_valid.o simple_grade_format_is_valid.o\
	  string_has_no_blanks.o string_is_alphabetic.o\
	  string_is_not_empty.o string_is_not_too_big.o\
	  words_are_valid.o open_file.o print_error_message.o\
	  get_word_number.o string_has_one_char_of.o print_student_name.o\
	  get_next_line.o go_to_the_file_start.o log_simple.o\
	  log_int.o log_string.o

INC = includes/

LIBFT = libft/libft.a

FLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME):
	@make -C libft/
	@make -C test/
	@gcc $(FLAGS) -I $(INC) -c $(SRC)
	@gcc $(OBJ) -L libft/ -lft -o $(NAME)

clean:
	@make clean -C libft/
	@make clean -C test/
	@rm -f $(OBJ)

fclean: clean
	@make fclean -C libft/
	@make fclean -C test/
	@rm -f $(NAME)

re: fclean all
