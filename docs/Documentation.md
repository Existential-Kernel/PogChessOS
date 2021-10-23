<h1 align="center">Year 12 programming project documentation</h1>

## Table of contents

- [Introduction](#introduction)
- [Linux environment compatibility](#linux-environment-compatibility)
- [How the engine works](#how-the-engine-works)
- [Flowchart](#flowchart)
- [Conclusion](#conclusion)

---

# Introduction
    ## Planning
      - why I chose a chess engine as my project
        - explain some stuff about how I enjoy chess
        - add more word salad

      - GUI or CLI decision
        - creating a GUI is far more complicated
        - inexperience with GUIs
        - CLI would be far more lightweight
        - easily executable using simple C++ building tools like Makefile or CMake
        - far more simple to configure especially in linux

      - language choice
        - C++ is fast as fuck
        - C/C++ is good for CLIs since they can include the ncurses.h header file 

# Linux environment compatibility
    ## Decision of using linux
      - docker container
        - alpine linux
          - usually a serverside OS
          - lightweight OS
          - easy to configure

# How the engine works
    ## Fundamental functionality
      - explain the directories
      - explain the individual .cpp files in the engine directory
        - attack.cpp
        - bitboard.cpp
        - board.cpp
        - data.cpp
        - defs.h
        - hashkeys.cpp
        - init.cpp
        - io.cpp
        - mainframe.cpp
        - movegen.cpp
        - validate.cpp

    ## Fundamental algorithm
      - minimax algorithm
      - 

    ## Engine code (maybe remove this later, not sure)

    ## CLI code
      - main.cpp functionality
      - ncurses.h

# Flowchart
    ## Image
      - create a flowchart image in photoshop or something idk
      - explain the flowchart

# Conclusion