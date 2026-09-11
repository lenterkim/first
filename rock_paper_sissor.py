import random as rand

# 
x = rand.randrange(0,2)
cs = ["Rock", "Paper", "Scissors"]
ans = -1

print("Let's play rock paper scissors!")

while ans == -1:
    user_input = input("Choose Rock(R), Paper(P) or Scissors(S): ").lower()
    if user_input == "rock" or user_input == "r":
        ans = 0
    if user_input == "paper" or user_input == "p":
        ans = 1
    if user_input == "scissors" or user_input == "s":
        ans = 2
    if ans == -1: print("Invaild input!")

win = 0

print("Machine has choosed:", cs[x])
if ans == 2 and x == 1: win = 1
if ans == 1 and x == 0: win = 1
if ans == 0 and x == 2: win = 1

if ans == x: 
    print("Draw!")
elif win:
    print("You win!")
else:
    print("You lose!")


