#include<stdio.h>

struct graph{
    int s ; //source node
    int k[10]; //key words
    int color[10]; //white 0; gray 1; black 2;
    int metrix[10][10]; //metrix table
    int p[10]; //parent NILL:-1 >=0 :index in graph
    int d[10]; //deepth 100:infinite
};
struct queue{
    int data[10]; //to save index in graph
    int head ; //head of queue
    int tail ; //tail of queue
};

void bfs(struct graph g);
void show(struct graph g);
int dequeue(struct queue q);
void enqueue(struct queue q, int index);
int empty(struct queue q );

main()
{
    //create a graph and init it
    g = graph();
    //bfs it
    bfs ( g );
    show( g );
    return ;
}
void bfs(struct graph g, int s)
{
    /*to fill g.p and g.d*/
    //init g
    int i = 0;
    for ( ; i<10; i++ )
    {
	g.color[i] = 1;
	g.p[i] = -1;
	g.d[i] = 100 
    }
    //set s
    g.color[s] = 1 ;//gray
    g.p[s] = 100;//infinite
    g.d[s] = 0 ;//depth of source node is 0
    //init queue
    enqueue( s ) ;
    while ( !empty(q) )
    {
	//get u from queue  de
	int u = dequeue( q )
	//color u = black
	g.color[u] = 2;
	//each v in u's neighborhood 's color = gray and enqueue
	for( i = 0; i < 10; i++)
	{
	    if( g.metrix[u][i]==1 )
	    {
		enqueue( q, i ) ;
		g.color[i] = 1 ;
	    }
	}
	//
    }
    return ;
}
void show(struct graph g)
{
    /*to show metrix*/
    printf("   ");
    int i = 0;
    for ( ; i<10; i++ )
	printf("%3d", i);
    for ( i=0; i<10; i++ )
    {
	printf("%3d", i);
	int j = 0 ;
	for ( ; j<10; j++ )
	{
	    printf("%3d", g.metrix[i][j] ) ;
	}
    }
    return ;
}
int dequeue(struct queue q)
{
    int index = 0 ;
    return index ;
}
void enqueue(struct queue q, int index)
{
    
    return ;
}
int empyt( struct queue q )
{
    if ( q.head!=tail )
	return 1;
    return 0;
}
