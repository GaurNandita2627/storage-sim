# Storage System Simulator (C++)

A mini storage system simulator that demonstrates how data is split, stored, and recovered using simple concepts inspired by distributed storage systems.

---

## 🚀 Features
- File splitting into multiple chunks
- File merging from chunks
- Parity-based recovery simulation
- Basic storage system workflow simulation

---

## 🛠 Tech Stack
- C++
- Linux / Termux
- Git & GitHub

---

## 📁 Project Structure
- split.cpp → Splits file into chunks
- merge.cpp → Merges chunks back into original file
- parity.cpp → Generates parity for recovery
- recover.cpp → Simulates data recovery
- sample.txt → Input test file

---

## ▶️ How to Run

### 1. Compile programs
```bash
g++ split.cpp -o split
g++ merge.cpp -o merge
g++ parity.cpp -o parity
g++ recover.cpp -o recover
