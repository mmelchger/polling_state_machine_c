#ifndef _my_entry_actions_h_
#define _my_entry_actions_h_


//! An entry action for each state. If no entry action is needed, provide an empty function.
// Entry actions of state A
void entry_action_state_A(void* state_machine);
// Entry actions of state B
void entry_action_state_B(void* state_machine);
// Entry actions of state C
void entry_action_state_C(void* state_machine);
// Entry actions of state D
void entry_action_state_D(void* state_machine);

//! Initializes the entry action array of the state machine, modify if the number of entry actions or names of entry action functions change.
void initialize_entry_actions(void* state_machine);

//! This handles all the entries of the state machine autonomously, DO NOT MODIFY!
void entry_actions(void* state_machine);

#endif
