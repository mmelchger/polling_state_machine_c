#include "my_states.h"
#include "my_entry_actions.h"
#include "my_transitions.h"
#include "my_state_machine.h"

//! README!
//! 1) This is a design for a polling state machine.
//! 2) Write non-blocking code.
//! 3) The functions are currently dummies, no real functionality
//! other than jumping to the next state. Modify accordingly

// The function for state A. Write non-blocking code only, this is a polling state machine.
void state_A(void* state_machine)
{
    entry_actions(state_machine);

    printf("state: A [%d]\n", ((STATE_MACHINE*)state_machine)->current_state);
    ((STATE_MACHINE*)state_machine)->next_state = B;

    transitions(state_machine);
}

// The function for state B. Write non-blocking code only, this is a polling state machine.
void state_B(void* state_machine)
{
    entry_actions(state_machine);

    printf("state: B [%d]\n", ((STATE_MACHINE*)state_machine)->current_state);
    ((STATE_MACHINE*)state_machine)->next_state = C;

    transitions(state_machine);
}

// The function for state C. Write non-blocking code only, this is a polling state machine.
void state_C(void* state_machine)
{
    entry_actions(state_machine);

    printf("state: C [%d]\n", ((STATE_MACHINE*)state_machine)->current_state);
    ((STATE_MACHINE*)state_machine)->next_state = D;

    transitions(state_machine);
}

// The function for state D. Write non-blocking code only, this is a polling state machine.
void state_D(void* state_machine)
{
    entry_actions(state_machine);

    printf("state: D [%d]\n", ((STATE_MACHINE*)state_machine)->current_state);
    ((STATE_MACHINE*)state_machine)->next_state = A;

    transitions(state_machine);
}

//! Modify if number of states or function names changed.
void initialize_states(void* state_machine)
{
    ((STATE_MACHINE*)state_machine)->states[A]    = &state_A;
    ((STATE_MACHINE*)state_machine)->states[B]    = &state_B;
    ((STATE_MACHINE*)state_machine)->states[C]    = &state_C;
    ((STATE_MACHINE*)state_machine)->states[D]    = &state_D;
}
