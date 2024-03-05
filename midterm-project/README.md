## Compilation

To compile the program:

- Open a terminal or command prompt.

- Navigate to the directory midterm-project.

- Run the following command to compile the program:

    `
    g++ banking_system.cpp -o banking_system
    
    `

This command will compile the `banking_system.cpp` file and generates an executable file named `banking_system`.

## Execution

To run the program:

- Run the executable file with the command:

    `
    ./banking_system

    `

## Display

After running the program, you will see the account information displayed on the terminal.

The program Displays:

- Account Information: The program will display the account number, account holder name, balance in SZL(Swazi Lilangeni), and account type for each bank account.

- Total Combined Balance: The program will calculate and display the total combined balance of all bank accounts.

## Cleanup

The program then clean up the dynamically allocated memory by deleting the bank account objects and clearing the accounts vector.
