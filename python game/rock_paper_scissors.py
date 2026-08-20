import random

option = ["rock","paper","scissor"]

computer = random.choice(option)

you = input("Enter your choice :")

if(computer == you):
    print("Its a draw !")
else:
    if(computer == "rock" and you == "paper"):
        print("You win !")
    elif(computer == "rock" and you == "scissor"):
        print("Computer win !")
    if(computer == "paper" and you == "rock"):
        print("Computer win !")
    if(computer == "paper" and you == "scissor"):
        print("You win !")
    if(computer == "scissor" and you == "paper"):
        print("computer win !")
    if(computer == "scissor" and you == "rock"):
        print("You win !")
