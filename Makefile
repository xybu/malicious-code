OBJS=fork_bomb mem_killer sleeper big_file_writer

all: $(OBJS)

fork_bomb: src/fork_bomb.c
	gcc -o bin/fork_bomb src/fork_bomb.c

mem_killer: src/mem_killer.c
	gcc -o bin/mem_killer src/mem_killer.c

sleeper: src/sleeper.c
	gcc -o bin/sleeper src/sleeper.c

big_file_writer: src/big_file_writer.c
	gcc -o bin/big_file_writer src/big_file_writer.c

clean:
	rm -rfv bin
