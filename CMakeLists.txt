cmake_minimum_required(VERSION 3.8)
project(Acid_Tile_Investigator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_PREFIX_PATH "/home/scratch/Qt/6.5.3/gcc_64")


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Acid_Tile_Investigator
        main.cpp
        converter.cpp
        converter.h
        mainwindow.h
        mainwindow.cpp
        mainwindow.ui
        resources.qrc
)
target_link_libraries(Acid_Tile_Investigator
        Qt::Core
        Qt::Gui
        Qt::Widgets
)
