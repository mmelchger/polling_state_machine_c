# polling_state_machine_c
This shows how to use enums, structs and function pointers in C to create a clean design for a very modular state machine. 

Tested under Linux only, compiles with:

gcc main.c my_exit_actions.h my_entry_actions.h my_states.h my_transitions.h my_exit_actions.c my_entry_actions.c my_states.c my_transitions.c state_machine.o
