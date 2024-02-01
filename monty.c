#include "monty.h"
#include <stdio.h>

#define MAX_LINE_LENGTH 200
/**
 * main - Main entry point of monty
 * Description - Entry point
 * @argc: Number of arguments 
 * @argv:
 * Return:
 */

int main(int argc, char *argv[])
{
    FILE *file = NULL;
    char line[MAX_LINE_LENGTH];
    char *opcode;
    stack_t *stack = NULL;
    int line_number = 1;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");

    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        opcode = strtok(line, " \t\n");
        if (opcode == NULL || *opcode == '#')
        {
            continue;
        }

        if (strcmp(opcode, "nop") == 0)
        {
            nop();
        }
        else if (strcmp(opcode, "add") == 0)
        {
            add(&stack, line_number);
        }
        else if (strcmp(opcode, "f_div") == 0)
        {
            f_div(&stack, line_number);
        }
        else if (strcmp(opcode, "mul") == 0)
        {
            mul(&stack, line_number);
        }
        else if (strcmp(opcode, "pop") == 0)
        {
            pop(&stack, line_number);
        }
        else if (strcmp(opcode, "sub") == 0)
        {
            sub(&stack, line_number);
        }
        else if (strcmp(opcode, "swap") == 0)
        {
            swap(&stack, line_number);
        }

        line_number++;
    }

    fclose(file);

    free_stack(stack);

    return (0);
}
