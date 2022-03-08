# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtTry_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtTry_autogen.dir\\ParseCache.txt"
  "QtTry_autogen"
  )
endif()
