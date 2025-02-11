Authors: Mack Muir-Jeffryes
Start Date: February 10th, 2025
Course: CS 3090, University of Utah, School of Computing
GitHub ID: MacM02
GitHub Repo: https://github.com/MacM02/HiringTool
Commit Date: February 10th, 2025
Copyright: CS 3500, [Mack Muir-Jeffryes] - This work may not be copied for use in Academic CourseWork.
Assignment: Block Project #2

# Overview

    This program serves as a hiring tool for managers across the board. Given a set number of candidates (10),
    the hiring tool can parse through the candidates and selects the best one based on certain criteria.

    These criteria include:
        - GPA
        - Credit Score
        - Age

    **Our main.cpp file will create 10 candidates to enter into the hiring pool. It will then print out the 
    candidate with the most 'promise.'

# Running the Program
    g++ -Wall -o main main.cpp HiringTool.cpp
    ./main
	
# Limitations

    This program is for educational use only and should not be used as a professional tool
    in any capacity. It was intended to serve as an unethical example of what NOT to do.

# Ethical Considerations + Responsible Use

    This program has many flaws. I wanted to create a program had a heavy selection bias towards those only
    had good GPA's and credit scores. I wanted to consider the college students that may have come from  
    impoverished backgrounds, and while attending college had to work full-time jobs. These kids might be
    bright, and work hard, but regardless of this, the bills just keep coming. This lack of parental support
    unfortunately can force students to suffer academically and monetarily as they try to balance the world
    around them. Implicitly, there are many minorities that fall under a lower income group than others, 
    leading to a selection of candidates within a race scope that may be repeating and lowers the chances for
    others to get their feet in the door. This tool does a poor job of taking into account someone's background.

    Although a barebones structure, this tool might be used by any corporation that aims to hire candidates
    with qualities that meet a requirement outside of any major-specific aspects. Currently, any use of the 
    program would be a misuse as the  functionality is lacking most everything that a hiring tool may want
    to have. It lacks a deeper level of personal detail, with a selection algorithm that is chooses candidates
    within the scope of only three surface-level details, and more issues than you can count. 

    There is a chance that someone could modify it for malicious purposes, but the program itself already has 
    malicious intent as the responsibility of the programmer is to understand the effect that his/her tools 
    have on the world. In this case, that responsibility has been forgone to a program with a seemingly obvious
    lack of quality and ethicality. If you looked at this tool from the eyes of someone who had never programmed
    before, only understanding this as a tool based on the name and description, this program could definitely 
    give a false sense of security. Otherwise, most programmers would give this one look over and turn the other
     way.