#!/bin/bash

# Function to display the menu
function show_menu {
    echo "Select operation:"
    echo "1. Add"
    echo "2. Subtract"
    echo "3. Multiply"
    echo "4. Divide"
    echo "5. Exit"
}

# Loop until user decides to exit
while true; do
    show_menu
    read -p "Enter your choice: " choice

    if [[ "$choice" -eq 5 ]]; then
        echo "Exiting..."
        break
    fi

    read -p "Enter first number: " num1
    read -p "Enter second number: " num2

    case $choice in
        1)
            result=$((num1 + num2))
            echo "Result: $result"
            ;;
        2)
            result=$((num1 - num2))
            echo "Result: $result"
            ;;
        3)
            result=$((num1 * num2))
            echo "Result: $result"
            ;;
        4)
            if [ "$num2" -ne 0 ]; then
                result=$((num1 / num2))
                echo "Result: $result"
            else
                echo "Error: Division by zero is not allowed."
            fi
            ;;
        *)
            echo "Invalid choice. Please try again."
            ;;
    esac
done
