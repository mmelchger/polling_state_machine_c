/** This is an example for the use of enums and structs
 * alongside function pointers as state machines.
**/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "my_state_machine.h"


int main(void)
{
    STATE_MACHINE machine;

    // Define the functions for each state
    initialize_states(&machine);
    initialize_transitions(&machine);
    initialize_exit_actions(&machine);
    initialize_entry_actions(&machine);


    //! We're currently in 'A' and remain there until something happens.
    // Define the current state
    machine.current_state = A;
    // Define the next state
    machine.next_state    = A;


    // The input ... can be replaced with a register / port.
    char input = 'a';
    // Set the pointer to the input
    machine.input = &input;

    //! Main polling loop
    while(1)
    {
        //! THIS PART HERE CAN BE REPLACED WITH ACTUAL DATA. Since it is pointing to the data, this part is not needed later on.
        //! It would also be possible to put this inside the struct.
        //! CURRENTLY:
        //! the input is incremented until 'd' is reached, then set back to 'a'.
        //!
        //! The current state machine starts in "A", then goes to "B" after it received a 'b', from there to "C" if it receives a 'c' etc.
        //! It exits after state "D".
        {
            input = input != 'd'? input + 1:'a';
            machine.has_new_input = 1;
        }

        // This handles all the inputs and acts as the complete state machine. The self-reference makes it possible.
        //! Note: There is an exit() in my_exit_actions.h / exit_action_state_D.
        machine.states[machine.current_state]((void*)&machine);
    }

    return 0;
}
