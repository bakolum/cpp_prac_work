cmake_minimum_required(VERSION 3.29)    # требуемая минимальная версия cmake
project(    
    fibonacci_seq                       # название проекта
    VERSION 1.0                         # номер версии проекта
    DESCRIPTION "Practical work"        # описание проекта
    LANGUAGES CXX                       # язык программирования
)
set(CMAKE_CXX_STANDARD 17)              # устанавливаем требуемый стандарт языка
set(CMAKE_CXX_STANDARD_REQUIRED ON)     # при сборке платформа будет проверять поддержку стандарта C++17 компиллятором

set(CMAKE_BUILD_TYPE Debug)             # конфигурация сборки - Debug

add_executable(fibonacci_seq)           # код будет компилироваться в исполняемый файл с названием fibonacci_seq.exe

set(sources                             # создаем cmake-переменную sources, которая содержит файл исходного кода main.cpp 
    main.cpp
)

target_sources(fibonacci_seq PRIVATE ${sources})    # исполняемый файл будет компилироваться из исходников, указанных в sources