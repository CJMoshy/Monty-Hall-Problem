# Monty Hall Problem Simulator

This C++ program simulates the famous Monty Hall problem. The Monty Hall problem is a probability puzzle based on a game show scenario. In the game, a contestant is presented with three doors. Behind one door is a valuable prize, while the other two doors conceal worthless items. The contestant selects one door, and then the game show host, who knows what is behind each door, opens one of the other two doors to reveal a worthless item. The contestant is then given the option to stick with their initial choice or switch to the other unopened door. The puzzle revolves around whether it is statistically advantageous to switch doors or stick with the initial choice.

## How to Run

1. **Compilation**: Ensure you have a C++ compiler installed on your machine.
   
## Program Output

The program will output the following result:

- The winning percentage for the strategy of chooseing the door that was not first chosen

## How it Works

1. The program simulates the game show scenario for 100 iterations.
2. For each iteration:
   - The program randomly selects which door contains the valuable prize.
   - The 'contestant' randomly selects one of the three doors.
   - The 'game show host', who knows the location of the prize, opens one of the other two doors to reveal a worthless item.
   - The contestant then switches to the other unopened door.
3. After all iterations, the program calculates and outputs the results based on the strategy.

## Assumptions

- The simulation assumes that the game show host always opens a door with a worthless item after the contestant makes their initial selection.
- The contestant's choice of switching doors is always chosen.

## Compatibility

This program is written in C++ and does not rely on any external libraries besides the standard library. It should be compatible with most C++ compilers.

## Disclaimer

This program is intended for educational purposes and to illustrate the principles behind the Monty Hall problem. While the simulation provides statistical insights, individual outcomes may vary.
