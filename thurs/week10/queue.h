
typedef struct queue *Queue;

Queue new_queue(void);

void enqueue(Queue q, int data);
int dequeue(Queue q);

void destroy_queue(Queue q);
