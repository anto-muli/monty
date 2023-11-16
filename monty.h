#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct mont_st
{
	stack_t *head;
	FILE *file;
	unsigned int line_number;
	bool is_stack;
} mon_t;

extern mon_t command_struct;



void adds_element(stack_t **stack, unsigned int);
void append_queue(stack_t **queue);
int command_checker(char *cmd);
void (*cmd_identifier(char *opcode))(stack_t **stack, unsigned int line_number);
void dequeuer(stack_t **queue);
void divider_m(stack_t **stack, unsigned int line_number);
void push_enqueue(stack_t **queue, unsigned int line_number);
void stack_liberator(stack_t *stack);
int comment_checker(char *cmd);
int main(int argc, char *argv[]);
void mod_in_stack(stack_t **stack, unsigned int line_number);
void multiplies_es(stack_t **stack, unsigned int line_number);
void annuls(stack_t **stack, unsigned int line_number);
void file_opener(char *pathname);
void printer_queues(stack_t **queue);
void print_elements(stack_t **stack, unsigned int line_number);
void palls_char(stack_t **stack, unsigned int line_number);
int ascii_within_range(int element);
void print_int_at_top(stack_t **stack, unsigned int line_number);
void deletes_int_at_top(stack_t **stack, unsigned int line_number);
unsigned int args_checker(char *av[], unsigned int line_no);
void process_command(char *cmd, unsigned int line_no);
void palls_str(stack_t **stack, unsigned int line_number);
void pusher(stack_t **stack, unsigned int line_number);
void outputs_lines_in_file(void);
void rotate_at_top(stack_t **stack, unsigned int line_number);
void rotate_at_bottom(stack_t **stack, unsigned int line_number);
int _strcmp(char *str1, char *str2);
void adds_es_in_stack(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
int switch_between_modes(char *cmd);

#endif
