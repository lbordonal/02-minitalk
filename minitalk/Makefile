# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbordona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 12:10:29 by lbordona          #+#    #+#              #
#    Updated: 2022/12/21 13:51:30 by lbordona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT = ./libft/libft.a

CLIENT = client
SERVER = server

SRC_C = srcs/client.c
OBJ_C = $(SRC_C:%.c=%.o)

SRC_S = srcs/server.c
OBJ_S = $(SRC_S:%.c=%.o)

CLIENT_BONUS = client_bonus
SERVER_BONUS = server_bonus

BONUS_C = srcs_bonus/client_bonus.c
BONUS_OBJ_C = $(BONUS_C:%.c=%.o)

BONUS_S = srcs_bonus/server_bonus.c
BONUS_OBJ_S = $(BONUS_S:%.c=%.o)


#Rules:
all: $(SERVER) $(CLIENT)

$(LIBFT):
	@$(MAKE) -C ./libft

$(SERVER): $(OBJ_S) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ_S) $(LIBFT) -o server

$(CLIENT): $(OBJ_C) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ_C) $(LIBFT) -o client


$(SERVER_BONUS): $(BONUS_OBJ_S) $(LIBFT)
	@$(CC) $(CFLAGS) $(BONUS_OBJ_S) $(LIBFT) -o server_bonus

$(CLIENT_BONUS): $(BONUS_OBJ_C) $(LIBFT)
	@$(CC) $(CFLAGS) $(BONUS_OBJ_C) $(LIBFT) -o client_bonus

bonus: $(SERVER_BONUS) $(CLIENT_BONUS)

clean:
	@$(MAKE) clean -C ./libft
	@$(RM) $(OBJ_S) $(OBJ_C)
	@$(RM) $(BONUS_OBJ_S) $(BONUS_OBJ_C)

fclean: clean
	@$(MAKE) fclean -C ./libft
	@$(RM) $(SERVER) $(CLIENT)
	@$(RM) $(SERVER_BONUS) $(CLIENT_BONUS)

re: fclean all
