enum state_type { new, ready, running, waiting, halted };

typedef struct PCB {
	int p_id;
	int priority;
	address pc;
	enum state_type state;
	struct pcb *next;
} pcb;

typedef struct Queue {
	struct pcb *first;
	struct pcb *last;
} queue;

typedef struct Controller {
	struct queue *arr;
	int process_count;
} controller;