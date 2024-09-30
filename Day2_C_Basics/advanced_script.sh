#!/bin/bash

# Function to greet a user
greet() {
    echo "Hello, $1!"
}

# Ask for user input
read -p "Enter your name: " name
greet "$name"

# Conditional to check if the user is an adult
read -p "Enter your age: " age
if [ "$age" -ge 18 ]; then
    echo "You are an adult."
else
    echo "You are a minor."
fi

# Loop to print numbers
echo "Counting to 5:"
for i in {1..5}; do
    echo "$i"
done
