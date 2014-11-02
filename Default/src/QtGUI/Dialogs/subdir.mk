################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/QtGUI/Dialogs/ConnectDlg.cpp \
../src/QtGUI/Dialogs/DeleteRecEventDlg.cpp \
../src/QtGUI/Dialogs/DeleteRecordDlg.cpp \
../src/QtGUI/Dialogs/NewRecEventDlg.cpp \
../src/QtGUI/Dialogs/NewRecordDlg.cpp \
../src/QtGUI/Dialogs/RecEventNotesDlg.cpp \
../src/QtGUI/Dialogs/moc_ConnectDlg.cpp \
../src/QtGUI/Dialogs/moc_DeleteRecEventDlg.cpp \
../src/QtGUI/Dialogs/moc_DeleteRecordDlg.cpp \
../src/QtGUI/Dialogs/moc_NewRecEventDlg.cpp \
../src/QtGUI/Dialogs/moc_NewRecordDlg.cpp \
../src/QtGUI/Dialogs/moc_RecEventNotesDlg.cpp 

OBJS += \
./src/QtGUI/Dialogs/ConnectDlg.o \
./src/QtGUI/Dialogs/DeleteRecEventDlg.o \
./src/QtGUI/Dialogs/DeleteRecordDlg.o \
./src/QtGUI/Dialogs/NewRecEventDlg.o \
./src/QtGUI/Dialogs/NewRecordDlg.o \
./src/QtGUI/Dialogs/RecEventNotesDlg.o \
./src/QtGUI/Dialogs/moc_ConnectDlg.o \
./src/QtGUI/Dialogs/moc_DeleteRecEventDlg.o \
./src/QtGUI/Dialogs/moc_DeleteRecordDlg.o \
./src/QtGUI/Dialogs/moc_NewRecEventDlg.o \
./src/QtGUI/Dialogs/moc_NewRecordDlg.o \
./src/QtGUI/Dialogs/moc_RecEventNotesDlg.o 

CPP_DEPS += \
./src/QtGUI/Dialogs/ConnectDlg.d \
./src/QtGUI/Dialogs/DeleteRecEventDlg.d \
./src/QtGUI/Dialogs/DeleteRecordDlg.d \
./src/QtGUI/Dialogs/NewRecEventDlg.d \
./src/QtGUI/Dialogs/NewRecordDlg.d \
./src/QtGUI/Dialogs/RecEventNotesDlg.d \
./src/QtGUI/Dialogs/moc_ConnectDlg.d \
./src/QtGUI/Dialogs/moc_DeleteRecEventDlg.d \
./src/QtGUI/Dialogs/moc_DeleteRecordDlg.d \
./src/QtGUI/Dialogs/moc_NewRecEventDlg.d \
./src/QtGUI/Dialogs/moc_NewRecordDlg.d \
./src/QtGUI/Dialogs/moc_RecEventNotesDlg.d 


# Each subdirectory must supply rules for building sources it contributes
src/QtGUI/Dialogs/%.o: ../src/QtGUI/Dialogs/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/martin/mygit/MothDB/src -I/home/martin/mygit/MothDB/src/QtGUI/CommonActions -I/home/martin/mygit/MothDB/src/QtGUI/Dialogs -I/home/martin/mygit/MothDB/src/QtGUI/QueriesSheet -I/home/martin/mygit/MothDB/src/QtGUI/QueryRunner -I/home/martin/mygit/MothDB/src/QtGUI/TableDataView -I/home/martin/mygit/MothDB/src/QtGUI/TablesView -I/home/martin/mygit/MothDB/src/QtGUI/TreeViewItems -I/home/martin/mygit/MothDB/src/QtGUI -I/home/martin/mygit/MothDB/src/Records -I/usr/local/qt/include -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


