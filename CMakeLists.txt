cmake_minimum_required(VERSION 3.15)
project(AlgorithmicProgrammingProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS -pthread)

add_executable(AlgorithmicProgrammingProject main.cpp Lexer.cpp Lexer.h Parser.cpp Parser.h Command.h ConditionCommand.cpp ConditionCommand.h IfCommand.cpp IfCommand.h LoopCommand.cpp LoopCommand.h OpenServerCommand.cpp OpenServerCommand.h ConnectCommand.cpp ConnectCommand.h DefineVarCommand.cpp DefineVarCommand.h FuncCommand.cpp FuncCommand.h Print.h Var.h Sleep.h Condition.cpp Condition.h Expression.cpp Expression.h MainThread.cpp MainThread.h SymbolTable.cpp SymbolTable.h ProgramState.h)