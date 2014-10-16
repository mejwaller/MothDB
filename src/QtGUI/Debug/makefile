################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include bin/gcc-4.3.2/release/subdir.mk
-include bin/gcc-4.3.2/debug/subdir.mk
-include TreeViewItems/bin/gcc-4.3.2/release/subdir.mk
-include TreeViewItems/bin/gcc-4.3.2/debug/subdir.mk
-include TreeViewItems/subdir.mk
-include TablesView/bin/gcc-4.3.2/release/subdir.mk
-include TablesView/bin/gcc-4.3.2/debug/subdir.mk
-include TablesView/subdir.mk
-include TableDataView/bin/gcc-4.3.2/release/subdir.mk
-include TableDataView/bin/gcc-4.3.2/debug/subdir.mk
-include TableDataView/subdir.mk
-include QueryRunner/bin/gcc-4.3.2/release/subdir.mk
-include QueryRunner/bin/gcc-4.3.2/debug/subdir.mk
-include QueryRunner/subdir.mk
-include QueriesSheet/bin/gcc-4.3.2/release/subdir.mk
-include QueriesSheet/bin/gcc-4.3.2/debug/subdir.mk
-include QueriesSheet/subdir.mk
-include Dialogs/bin/gcc-4.3.2/release/subdir.mk
-include Dialogs/bin/gcc-4.3.2/debug/subdir.mk
-include Dialogs/subdir.mk
-include CommonActions/bin/gcc-4.3.2/release/subdir.mk
-include CommonActions/bin/gcc-4.3.2/debug/subdir.mk
-include CommonActions/subdir.mk
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
all: libMainWin.a

# Tool invocations
libMainWin.a: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC Archiver'
	ar -r  "libMainWin.a" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C++_DEPS)$(C_DEPS)$(CC_DEPS)$(ARCHIVES)$(CPP_DEPS)$(CXX_DEPS)$(C_UPPER_DEPS) libMainWin.a
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
