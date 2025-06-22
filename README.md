
# 🎲 Lottery Number Matching (C++)

This C++ program simulates a simple lottery game where the computer generates five random numbers and the user selects five of their own. The program compares both sets to determine how many numbers match — emulating a basic lottery draw.

---

## 🧠 Program Features

- 🎰 **Random Number Generation**: Picks 5 unique numbers between 1 and 19.
- 🎟️ **User Ticket Input**: Prompts user to enter 5 numbers in the same range.
- ❌ **Duplicate Detection**: Ensures both the system-generated and user-entered numbers are unique.
- ✅ **Match Comparison**: Compares both sets of numbers and counts the number of matches.
- 📊 **Result Display**: Prints both sets of numbers and how many matched.

---

## 🛠️ Requirements

- C++ compiler (e.g., `g++`)
- C++11 or later
- Standard libraries: `iostream`, `cstdlib`, `ctime`

---

## 🧪 How to Compile and Run

1. Clone the repository:
   ```bash
   git clone https://github.com/anvpeace/lottery_c.git
   cd lottery_c
````

2. Compile the program:

   ```bash
   g++ -o lottery main.cpp
   ```

3. Run it:

   ```bash
   ./lottery
   ```

---

## 📄 Function Overview

| Function         | Description                                                    |
| ---------------- | -------------------------------------------------------------- |
| `winningDigits`  | Generates 5 random integers between 1–19                       |
| `userTicket`     | Prompts the user to enter 5 numbers within the same range      |
| `checkDuplicate` | Ensures all numbers in both arrays are unique                  |
| `checkWinner`    | Compares arrays and counts how many numbers match              |
| `printResult`    | Displays the random numbers, user input, and number of matches |

---

## ⚠️ Notes

* The game currently assumes input is valid integers between 1 and 19. Input validation could be improved.
* Duplicate handling may be re-triggered during runtime if collisions are detected.

---


## 👤 Author

**anvpeace**

```

```

