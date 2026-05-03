# Mini Storage System Simulator

## Overview
This project simulates a basic storage system using file chunking, merging, and parity-based recovery.

## Features
- File splitting into chunks
- File merging from chunks
- Parity generation using XOR
- Basic data recovery simulation

## Technologies
- C++
- Linux (Termux compatible)

## Concept
Inspired by RAID-style storage systems used in distributed storage platforms.

## How to run
g++ split.cpp -o split
./split

g++ parity.cpp -o parity
./parity

g++ merge.cpp -o merge
./merge

g++ recover.cpp -o recover
./recover
