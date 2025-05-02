# 🧮 Power And Character Converter
A C++ console application that performs two separate functions:
1. Calculates the result of raising a base to an exponent using the `pow()` function.
2. Accepts a character input and displays its ASCII value, as well as the previous and next characters.

## Description
This program is split into two parts:
* Power Calculator: Prompts the user for a base and an exponent, then computes the result using the `pow()` function from the `<cmath>` library.
* Character Analysis: Takes a single character as input and displays its ASCII value, the character that comes before it, and the one that comes after it.

All output is neatly formatted using `setw()` for column alignment.

## 🧾 Example Output
```
Enter a base: 2
Enter an exponent: 4

--- Power Result ---
Base:           2
Exponent:       4
Result:        16

Enter a character: B

--- Character Result ---
Character:              B
ASCII Value:           66
Previous Character:     A
Next Character:         C
```

## 🛠️ Technologies Used
* Language: C++
* IDE Used: Visual Studio (But any IDE will work)

## 📦 How to Run
1. Clone The Repo Using CMD:
```
git clone https://github.com/UncleH25/Power-And-Character-Converter.git
cd power-and-character-converter
```

3. From a terminal (in the extracted folder), run:
```
g++ -o power_and_character_converter main.cpp
./power_and_character_converter
```

4. Or, if you're using an IDE like Code::Blocks or Visual Studio, open the file and press **Run** or **Build and Run**.

## 📌 License
This project is open source and free to use under the **MIT License**.
