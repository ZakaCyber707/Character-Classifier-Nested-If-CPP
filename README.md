# Character Classifier (Nested If-Else)


## 🛡️ Project Overview
This program demonstrates **Complex Decision Making** in C++. It identifies the type of character entered by the user and performs specific actions (like case conversion) based on the classification.

## ⚙️ Logic Structure
The program uses a "Nested" approach, meaning one decision happens inside another:
1. **Primary Check:** Is it an **Alphabet**, **Digit**, or **Special Character**?
2. **Nested Check:** If it is an Alphabet, is it **Uppercase** or **Lowercase**?
3. **Action:** It then converts the case (Upper to Lower or vice-versa) using `toupper()` and `tolower()`.



## 🛠️ Features
* **Built-in Functions:** Uses `<cctype>` functions like `isalpha()`, `isdigit()`, and `isupper()`.
* **Case Conversion:** Automatically generates the opposite case for any letter entered.
* **Error Handling:** Identifies special characters as a fallback option.

## 💻 How to Run
1. **Compile:** `g++ CharacterLogic_NestedIf.cpp -o CharClassifier`
2. **Run:** `./CharClassifier`
