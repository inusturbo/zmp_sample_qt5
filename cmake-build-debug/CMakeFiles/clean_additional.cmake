# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/GameControl_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/GameControl_autogen.dir/ParseCache.txt"
  "CMakeFiles/HevCnt_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/HevCnt_autogen.dir/ParseCache.txt"
  "CMakeFiles/RingBuffer_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/RingBuffer_autogen.dir/ParseCache.txt"
  "CMakeFiles/zmp_control_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/zmp_control_autogen.dir/ParseCache.txt"
  "GameControl_autogen"
  "HevCnt_autogen"
  "RingBuffer_autogen"
  "zmp_control_autogen"
  )
endif()
