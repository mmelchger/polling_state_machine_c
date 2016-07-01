#ifndef _my_transitions_h_
#define _my_transitions_h_


//! A transition function for each state. If no functionality is needed, provide an empty function.
// Transition function of state A (all transitions FROM A TO ? )
void transitions_A(void* state_machine);
// Transition function of state B (all transitions FROM B TO ? )
void transitions_B(void* state_machine);
// Transition function of state C (all transitions FROM C TO ? )
void transitions_C(void* state_machine);
// Transition function of state D (all transitions FROM D TO ? )
void transitions_D(void* state_machine);

//! Initializes the transition array of the state machine, modify if the number of transitions, states or names of functions change.
void initialize_transitions(void* state_machine);

//! This handles all the transitions of the state machine autonomously, DO NOT MODIFY!
void transitions(void* state_machine);

#endif
