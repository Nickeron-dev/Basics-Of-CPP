cmake_minimum_required(VERSION 3.5)

project(Tutorial)

add_executable(TutorialExec tutorial.cpp)
	
set_target_properties(
	TutorialExec PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED ON
)
