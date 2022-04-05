cmake_minimum_required(VERSION 3.5)

project(Example2)

# option 1: (version.h will not be present in project tree)
#add_executable(example main.cpp version.cpp)


# option 2:
#add_executable(example main.cpp version.cpp version.h)


# option 3:
set(SOURCES
	main.cpp
	version.cpp
)

set(HEADERS
	version.cpp
)

add_executable(example ${SOURCES} ${HEADERS})

set_target_properties(
	example PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED ON
)

