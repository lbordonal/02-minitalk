# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbordona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 12:10:29 by lbordona          #+#    #+#              #
#    Updated: 2022/12/08 15:54:32 by lbordona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables:
NAME = minitalk.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

CLIENT = client
SERVER = server

#Sources:
SRC_S = server.c minitalk_utils.c
SRC_C = client.c minitalk_utils.c
#BONUS_S = server_bonus.c minitalk_utils.c
#BONUS_C = client_bonus.c minitalk_utils.c

OBJ_S = $(SRC_S:%.c=%.o)
OBJ_C = $(SRC_C:%.c=%.o)
#BONUS_OBJ_S = $(BONUS_S:%.c=%.o)
#BONUS_OBJ_C = $(BONUS_C:%.c=%.o)

#Rules:
all: $(SERVER) $(CLIENT)

$(NAME): all

$(SERVER):
		@$(CC) $(SRC_S) $(CFLAGS) -o $(SERVER)

$(CLIENT):
		@$(CC) $(SRC_C) $(CFLAGS) -o $(CLIENT)

#bonus:
#		@$(CC) $(BONUS_S) $(CFLAGS) $(SERVER)
#		@$(CC) $(BONUS_C) $(CFLAGS) $(CLIENT)

clean:
		@$(RM) $(OBJ_S)
		@$(RM) $(OBJ_C)
#		@$(RM) $(BONUS_OBJ_S)
#		@$(RM) $(BONUS_OBJ_C)

fclean: clean
		@$(RM) $(SERVER)
		@$(RM) $(CLIENT)
		@$(RM) $(NAME)

re: fclean all
