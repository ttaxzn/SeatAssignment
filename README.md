# SeatAssignment
## **Hello! Glad you made it!**

## **I am providing a walkthrough of my code below.**


**MY EXAMPLE INPUT FILE**

This was the input file I used based off the example on the document.
<img width="751" alt="Screen Shot 2022-03-28 at 3 02 13 AM" src="https://user-images.githubusercontent.com/71516184/160353442-fd165406-e8c3-426d-83e2-d025659ca2f2.png">



**DECLARING AND INITIALIZING VECTORS**

In the beginning of my code, I used vectors to be able to have the rows mapped out. Within the for loop, I added values 1-20 to each vector to account for the amount of seats in each row.

<img width="779" alt="Screen Shot 2022-03-28 at 2 38 34 AM" src="https://user-images.githubusercontent.com/71516184/160349401-8facaaf5-754b-4007-813a-c74512b8acec.png">


**USER INPUT, FILE I/O, ITERATORS**

In this part of my code, the user inputs the name of the file they are trying to use and it is then opened. There are also some declarations present. See below for clarification.

string res = reservation number
int people = number of people
string ticket = row letter
int seatnum = seat number

The iterator initializations come in handy later on in my code. I used different iterators for each row.

<img width="691" alt="Screen Shot 2022-03-28 at 2 46 52 AM" src="https://user-images.githubusercontent.com/71516184/160350810-8b81adf5-165f-4e14-9f61-d13efa00d2d2.png">


**READING AND WRITING FILES, ASSIGNING SEATS**

Within this part, I checked to see if the file is open first of all. I put an error message if the file cannot be read (this is not shown in the screenshot). The program iterates through each line of the input file and assigns the reservation number and amount of people to res and people. Within the second if statement, the reservation number gets output to the CSV file. Then in the for loop, the seat number is assigned and output to the file as well. Under that is where the iterators come in. The amount of seats that were assigned get removed from the vector, along with 3 seats to leave space for safety purposes. The iterator gets reassigned the new ending place for the resized vector. The first if statement comes into play when there are no more viable seats in the row (the vector is empty or there are more people than seats available) and it jumps to the next row. The code is the exact same for each row after.

<img width="704" alt="Screen Shot 2022-03-28 at 2 51 27 AM" src="https://user-images.githubusercontent.com/71516184/160351631-d8489c0d-f223-4757-bd54-76624fb1d4b8.png">


**CLOSING FILES, ERROR MESSAGE**

This is the end of my code. As stated above, I added an error message if the file could not be opened. I did not add a custom output display for where the data was exported to for efficiency in testing on my part. The files are closed at the end. 

<img width="616" alt="Screen Shot 2022-03-28 at 2 57 35 AM" src="https://user-images.githubusercontent.com/71516184/160352634-4e91b788-8cf3-47f5-a26d-e15646ed91ab.png">


**Output file**

Below is the output of my program to a CSV file. I used my own input file as shown at the beginning for example. 

<img width="1010" alt="Screen Shot 2022-03-28 at 2 31 40 AM" src="https://user-images.githubusercontent.com/71516184/160348285-2cb292dd-0930-423a-9f58-e6e3692ee388.png">
