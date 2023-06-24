#
# Make para Project Final de C
#
############################# Makefile ##########################
CC=gcc
CFLAGS=-Wall

###### Alterar Dependências e Objetos #####
DEPS = user_interface.h acounting.h #ficheiros .h - Colocar todos
OBJ = main.o user_interface.o acounting.o #objetos (.o). Um por ficheiro .c da Aplicação
##########################################

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

# Mudar o nome de app para o nome da aplicação pretendido
bike_world: $(OBJ)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o 
	rm -rf bike_world
