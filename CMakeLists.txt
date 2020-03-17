cmake_minimum_required(VERSION 3.1)
project("One Hour")

find_package(SFML 2.5 COMPONENTS system window graphics audio REQUIRED)

include_directories(inc)

add_executable(Game src/main.cpp inc/circlecollider.hpp inc/collider.hpp inc/mainmenu.hpp 
inc/physics.hpp inc/rectcollider.hpp inc/scene.hpp inc/scenemanager.hpp src/physics.cpp 
src/scenemanager.cpp src/scene.cpp inc/rigidbody.hpp)

target_link_libraries(Game sfml-system sfml-window sfml-graphics sfml-audio)