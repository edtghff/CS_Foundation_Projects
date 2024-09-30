# Makefile for Bash automation

# Variables
SCRIPTS = advanced_script.sh

# Default target
all: make_executable

# Make all scripts executable
make_executable:
	@chmod +x $(SCRIPTS)
	@echo "All scripts are now executable"

# Clean target to undo changes
clean:
	@chmod -x $(SCRIPTS)
	@echo "Scripts are no longer executable"
