################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include bin/gcc-4.3.2/release/subdir.mk
-include bin/gcc-4.3.2/debug/subdir.mk
-include Records/subdir.mk
-include QtGUI/bin/gcc-4.3.2/release/subdir.mk
-include QtGUI/bin/gcc-4.3.2/debug/subdir.mk
-include QtGUI/TreeViewItems/bin/gcc-4.3.2/release/subdir.mk
-include QtGUI/TreeViewItems/bin/gcc-4.3.2/debug/subdir.mk
-include QtGUI/TreeViewItems/subdir.mk
-include QtGUI/TablesView/bin/gcc-4.3.2/release/subdir.mk
-include QtGUI/TablesView/bin/gcc-4.3.2/debug/subdir.mk
-include QtGUI/TablesView/subdir.mk
-include QtGUI/TableDataView/bin/gcc-4.3.2/release/subdir.mk
-include QtGUI/TableDataView/bin/gcc-4.3.2/debug/subdir.mk
-include QtGUI/TableDataView/subdir.mk
-include QtGUI/QueryRunner/bin/gcc-4.3.2/release/subdir.mk
-include QtGUI/QueryRunner/bin/gcc-4.3.2/debug/subdir.mk
-include QtGUI/QueryRunner/subdir.mk
-include QtGUI/QueriesSheet/bin/gcc-4.3.2/release/subdir.mk
-include QtGUI/QueriesSheet/bin/gcc-4.3.2/debug/subdir.mk
-include QtGUI/QueriesSheet/subdir.mk
-include QtGUI/Dialogs/bin/gcc-4.3.2/release/subdir.mk
-include QtGUI/Dialogs/bin/gcc-4.3.2/debug/subdir.mk
-include QtGUI/Dialogs/subdir.mk
-include QtGUI/Debug/TreeViewItems/subdir.mk
-include QtGUI/Debug/TablesView/subdir.mk
-include QtGUI/Debug/TableDataView/subdir.mk
-include QtGUI/Debug/QueryRunner/subdir.mk
-include QtGUI/Debug/QueriesSheet/subdir.mk
-include QtGUI/Debug/Dialogs/subdir.mk
-include QtGUI/Debug/CommonActions/subdir.mk
-include QtGUI/Debug/subdir.mk
-include QtGUI/CommonActions/bin/gcc-4.3.2/release/subdir.mk
-include QtGUI/CommonActions/bin/gcc-4.3.2/debug/subdir.mk
-include QtGUI/CommonActions/subdir.mk
-include QtGUI/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: MothDB

# Tool invocations
MothDB: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++ -L/usr/local/qt/lib -o "MothDB" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C++_DEPS)$(C_DEPS)$(CC_DEPS)$(CPP_DEPS)$(EXECUTABLES)$(CXX_DEPS)$(C_UPPER_DEPS) MothDB
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
