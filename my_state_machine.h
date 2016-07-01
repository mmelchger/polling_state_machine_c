#ifndef _my_state_machine_h_
#define _my_state_machine_h_

#include "my_states.h"
#include "my_transitions.h"
#include "my_entry_actions.h"
#include "my_exit_actions.h"

// State machine (designed for POLLING)
typedef struct STATE_MACHINE
{
    // Stores the current state
    STATE current_state;
    // Stores the next state
    STATE next_state;

    // 1 if there is new input, 0 if else
    int has_new_input;

    // Pointer to the input array (currently always 1 byte)
    char* input;

    // Function array for the state functions. The use of void* avoids compiler errors (You can't use a type in its own declaration).
    // Each array entry points to a function which represents a whole state. This can be used to automate state access and switches
    // by using the current_state and next_state variables .. the state functions are indexed in the same order as the state enum is indexed.
    // Also allows nice encapsulation.
    void (*states[MAX_STATES]) (void* this_machine);

    // Function array for the transition functions.
    void (*transitions[MAX_STATES]) (void* this_machine);

    // Function array for the entry_action functions.
    void (*entry_actions[MAX_STATES]) (void* this_machine);

    // Function array for the exit_action functions.
    void (*exit_actions[MAX_STATES]) (void* this_machine);


}STATE_MACHINE;

#endif
