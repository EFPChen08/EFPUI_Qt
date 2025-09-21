# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\EFPUI_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\EFPUI_autogen.dir\\ParseCache.txt"
  "EFPUI_autogen"
  )
endif()
