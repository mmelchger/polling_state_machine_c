#ifndef _my_exit_actions_h_
#define _my_exit_actions_h_

//! An exit action for each state. If no exit action is needed, provide an empty function.
// Exit actions of state A
void exit_action_state_A(void* state_machine);
// Exit actions of state B
void exit_action_state_B(void* state_machine);
// Exit actions of state C
void exit_action_state_C(void* state_machine);
// Exit actions of state D
void exit_action_state_D(void* state_machine);

//! Initializes the exit action array of the state machine, modify if the number of exit actions or names of exit action functions change.
void initialize_exit_actions(void* state_machine);

#endif
