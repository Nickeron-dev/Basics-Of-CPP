cmake_minimum_required(VERSION 3.5)

project(Example3 VERSION 1.2.3)

configure_file(
	config.h.in
	${CMAKE_CURRENT_BINARY_DIR}/config.h
)

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

target_include_directories(
	example
	PRIVATE
	${CMAKE_CURRENT_BINARY_DIR}
)
