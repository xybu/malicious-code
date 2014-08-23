OBJS=fork_bomb mem_killer sleeper

all: $(OBJS)

fork_bomb: src/fork_bomb.c
	gcc -o bin/fork_bomb src/fork_bomb.c

mem_killer: src/mem_killer.c
	gcc -o bin/mem_killer src/mem_killer.c

sleeper: src/sleeper.c
	gcc -o bin/sleeper src/sleeper.c

clean:
	rm -rfv bin
