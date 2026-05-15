<div align="center">

<img src="artworks-000128521170-ibelur-t500x500.jpg" alt="Real Estate System" width="300"/>


<br/>

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![OOP](https://img.shields.io/badge/OOP-Design-00B4D8?style=for-the-badge)
![Console](https://img.shields.io/badge/Console-Application-0077B6?style=for-the-badge)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)

<br/>

> **A fully object-oriented real estate management console application built in C++**  
> Manage villas, apartments, lands, employees, and sold properties — all in one colourful terminal UI.

<br/>

```
________________________________
|     REAL ESTATE SYSTEM       |
|                              |
|   [1] Employees Info         |
|   [2] Sold Property          |
|   [3] Available Property     |
|   [4] Exit                   |
|                              |
|______________________________|
|   Enter the num of menu :    |
|______________________________|
```

</div>

---

## 📌 Table of Contents

- [About the Project](#-about-the-project)
- [Features](#-features)
- [Class Structure](#-class-structure)
- [OOP Concepts Used](#-oop-concepts-used)
- [How to Run](#-how-to-run)
- [Screenshots](#-screenshots)
- [Project Structure](#-project-structure)
- [Team](#-team)

---

## 🏡 About the Project

The **Real Estate Management System** is a C++ console application that simulates a real estate company's internal management tool. It allows users to browse available properties (villas, apartments, lands), view sold property records, and check employee information — all through a colour-coded, interactive menu interface.

This project was built as part of an **Object-Oriented Programming** course and demonstrates real-world application of core OOP principles including inheritance, encapsulation, operator overloading, friend functions, and exception handling.

---

## ✨ Features

| Feature | Description |
|---|---|
| 🏘️ **Property Listings** | Browse Villas, Apartments, and Land plots with full details |
| 💰 **Price Aggregation** | Automatically calculates combined total price per category |
| 📋 **Sold Property Records** | View completed transaction history |
| 👔 **Employee Info** | Display full staff profiles with department and salary |
| 🎨 **Colourful UI** | Console colours via Windows API for a polished terminal experience |
| 🛡️ **Error Handling** | Exception thrown and caught for invalid property prices |
| 🔁 **Looping Menu** | Navigate freely between all sections without restarting |

---

## 🗂️ Class Structure

```
Available  ◄──────────────────────────── Base Class
   │                                     (address, price, area)
   │                                     (operator+ overloaded)
   ├── Apartment                          + floor
   ├── Villa                              + floors, rooms, garden, garage
   └── Land                              + landType, infrastructure status

Soldproperty  ─── Independent            (type, date, price, agent)
Employee      ─── Independent            (name, dept, position, salary, bonus)
```

### Class Details

<details>
<summary><b>📦 Available (Base Class)</b></summary>

```
Attributes  │  address (string) · price (double) · area (double)
────────────┼──────────────────────────────────────────────────────
Methods     │  display()         → prints address, area, price
            │  get_address()     → returns address
            │  get_totalArea()   → returns area
            │  get_totalPrice()  → returns price
────────────┼──────────────────────────────────────────────────────
Special     │  operator+ (friend function) → sums prices of two objects
            │  Constructor throws int(1) if price ≤ 0
```
</details>

<details>
<summary><b>🏢 Apartment : public Available</b></summary>

```
Extra Attributes  │  floor (int)
──────────────────┼────────────────────────────────────
Extra Methods     │  getFloor()   → returns floor number
                  │  display()    → extends Available::display()
```
</details>

<details>
<summary><b>🏰 Villa : public Available</b></summary>

```
Extra Attributes  │  floors (int) · rooms (int) · hasGarden (bool) · hasGarage (bool)
──────────────────┼──────────────────────────────────────────────────────────────────
Extra Methods     │  get_floors() · get_rooms() · get_hasGarden() · get_hasGarage()
                  │  display()  → extends Available::display()
```
</details>

<details>
<summary><b>🌿 Land : public Available</b></summary>

```
Extra Attributes  │  landType (string) · hasWaterAndElectricity (bool)
──────────────────┼────────────────────────────────────────────────────
Extra Methods     │  get_landType() · get_hasWaterAndElectricity()
                  │  display()  → extends Available::display()
```
</details>

<details>
<summary><b>🤝 Soldproperty (Independent)</b></summary>

```
Attributes  │  type · date · price · soldby
────────────┼──────────────────────────────────────────
Methods     │  getters for all attributes · display()
```
</details>

<details>
<summary><b>👔 Employee (Independent)</b></summary>

```
Attributes  │  name · department · position · address · id · salary · bonus
────────────┼──────────────────────────────────────────────────────────────
Methods     │  setEmployee() · display()
```
</details>

---

## 🧠 OOP Concepts Used

| Concept | Where Applied |
|---|---|
| **Encapsulation** | All data members are `private` across every class; accessed via public getters |
| **Inheritance** | `Apartment`, `Villa`, `Land` all inherit publicly from `Available` |
| **Method Overriding** | `display()` overridden in all three derived classes; calls `Available::display()` first |
| **Constructor Chaining** | Derived constructors use initialiser lists to delegate to `Available(...)` |
| **Operator Overloading** | `operator+` overloaded to sum prices of two `Available` objects |
| **Friend Functions** | `operator+` declared as a `friend` of `Available` to access private `price` |
| **Exception Handling** | `Available` constructor `throw`s `int(1)` for invalid price; caught in `main()` |
| **Arrays of Objects** | `Apartment A1[2]`, `Villa V1[2]`, `Land L1[2]` demonstrate object arrays |

---

## ▶️ How to Run

### Requirements
- Windows OS (uses `windows.h` for console colours)
- Any C++ compiler: **g++**, **MSVC**, or **MinGW**

### Compile & Run (g++)
```bash
g++ main.cpp -o RealEstate.exe
./RealEstate.exe
```

### Compile & Run (MSVC)
```bash
cl main.cpp /Fe:RealEstate.exe
RealEstate.exe
```

> ⚠️ **Note:** The application uses `windows.h` for colour output. It must be compiled and run on **Windows**.

---

## 📸 Screenshots

### Main Menu
```
________________________________
|     REAL ESTATE SYSTEM       |
|                              |
|   [1] Employees Info         |   ← green
|   [2] Sold Property          |   ← cyan
|   [3] Available Property     |   ← magenta
|   [4] Exit                   |   ← red
|                              |
|______________________________|
```

### Villa Listing Output
```
Address: Beverly Hills - Sheikh Zayed
Area: 205m
Price: 10M EGP
Number of floors: 2
Number of rooms: 5
Has garden: Yes
Has garage: No
------------------------------------
Address: Marassi - North Coast
Area: 400m
Price: 25M EGP
Number of floors: 3
Number of rooms: 7
Has garden: Yes
Has garage: Yes
------------------------------------
Total price for Villas: 35M EGP
```

### Employee Info Output
```
Employee Information
Name: Ahmed
Department: HR
Position: Manager
Address: Cairo
ID: 101
Salary: $5000
Bonus: 500
------------------------------------
```

---

## 📁 Project Structure

```
📦 RealEstateSystem
 ┣ 📄 main.cpp           ← Entry point + menu logic
 ┣ 📄 Available.h/.cpp   ← Base property class
 ┣ 📄 Apartment.h/.cpp   ← Apartment (derived)
 ┣ 📄 Villa.h/.cpp       ← Villa (derived)
 ┣ 📄 Land.h/.cpp        ← Land (derived)
 ┣ 📄 Employee.h/.cpp    ← Employee management
 ┣ 📄 Soldproperty.h/.cpp← Sold property records
 ┗ 📄 README.md
```

---

## 👥 Team

<div align="center">

Built with ❤️ by a group of 6 

Instructor: Eng.Yara
Team:
Amen Saeed,Lamia Kamal,Jana Mohamed,Mohamed Adel,Ashrakat galal,Hala Salama

</div>

---

<div align="center">

**⭐ If you found this project useful, consider giving it a star!**

![Made with C++](https://img.shields.io/badge/Made%20with-C%2B%2B-00599C?style=flat-square&logo=c%2B%2B)
![OOP Project](https://img.shields.io/badge/Course-OOP%20Project-00B4D8?style=flat-square)

</div>
