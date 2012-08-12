all:	bfs
bfs:	bfs.c
	gcc -o bfs bfs.c -g
clean:	all
	rm bfs
