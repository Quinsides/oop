# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\labs_oop_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\labs_oop_autogen.dir\\ParseCache.txt"
  "labs_oop_autogen"
  )
endif()
