#!/bin/bash

# Function to greet the user
function greet {
    echo "Hello, $1!"
}

# Check if a name was passed as an argument
if [ -z "$1" ]; then
    echo "Usage: $0 <name>"
else
    greet "$1"
fi
