#include "my_exit_actions.h"
#include "my_state_machine.h"

//! README!
//! 1) This is a design for a polling state machine.
//! 2) Write non-blocking code.
//! 3) The functions are currently dummies, no real functionality. Modify accordingly.

#include <stdio.h>
#include <stdlib.h>

// The exit action of state A. Write non-blocking code only, this is a polling state machine.
void exit_action_state_A(void* state_machine)
{
    printf("exit: A [%d]\n", ((STATE_MACHINE*)state_machine)->current_state);
}

// The exit action of state B. Write non-blocking code only, this is a polling state machine.
void exit_action_state_B(void* state_machine)
{
    printf("exit: B [%d]\n", ((STATE_MACHINE*)state_machine)->current_state);
}

// The exit action of state C. Write non-blocking code only, this is a polling state machine.
void exit_action_state_C(void* state_machine)
{
    printf("exit: C [%d]\n", ((STATE_MACHINE*)state_machine)->current_state);
}

// The exit action of state D. Write non-blocking code only, this is a polling state machine.
void exit_action_state_D(void* state_machine)
{
    printf("exit: D [%d]\n", ((STATE_MACHINE*)state_machine)->current_state);
    exit(-1);
}

//! Modify if number of states or function names changed.
void initialize_exit_actions(void* state_machine)
{
    ((STATE_MACHINE*)state_machine)->exit_actions[A] = &exit_action_state_A;
    ((STATE_MACHINE*)state_machine)->exit_actions[B] = &exit_action_state_B;
    ((STATE_MACHINE*)state_machine)->exit_actions[C] = &exit_action_state_C;
    ((STATE_MACHINE*)state_machine)->exit_actions[D] = &exit_action_state_D;
}
