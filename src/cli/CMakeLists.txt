# This file is distributed under the MIT license.
# See the LICENSE file for details.

# This file is distributed under the MIT license.
# See the LICENSE file for details.

find_package(CUDA)
find_package(Threads)
find_package(Virvo)

vkt_use_package(CUDA)
vkt_use_package(Threads)
vkt_use_package(Virvo)
if(VIRVO_FOUND)
    set(__VKT_LINK_LIBRARIES ${__VKT_LINK_LIBRARIES} ${VIRVO_FILE_IO_LIBRARY})
endif()

include_directories(${PROJECT_SOURCE_DIR}/include/c)
include_directories(${PROJECT_SOURCE_DIR}/include/cpp)
include_directories(${PROJECT_SOURCE_DIR}/include/shared)

# also use internal headers
include_directories(${PROJECT_SOURCE_DIR}/src/vkt)
include_directories(${__VKT_CONFIG_DIR})

vkt_link_libraries(volkit)

set(VKT_MACOSX_BUNDLE_OLD ${VKT_MACOSX_BUNDLE})
set(VKT_MACOSX_BUNDLE FALSE)

vkt_add_executable(vkt main.cpp)

set(VKT_MACOSX_BUNDLE ${VKT_MACOSX_BUNDLE_OLD})
