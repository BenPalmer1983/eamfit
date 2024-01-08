
# configs.dev.x
#######################################################

set(EXE "configs.dev.x")
add_executable(${EXE})

include_directories(${CMAKE_BINARY_DIR}/../src/lib)
target_link_libraries(
    ${EXE} 
    ${CMAKE_BINARY_DIR}/../lib/libconfigs.a
    ${CMAKE_BINARY_DIR}/../lib/libcore.a
)

target_sources(
    ${EXE} PRIVATE
    configs.dev.cpp
)



# make_crystal.dev.x
#######################################################

set(EXE "make_crystal.dev.x")
add_executable(${EXE})

include_directories(${CMAKE_BINARY_DIR}/../src/lib)
target_link_libraries(
    ${EXE} 
    ${CMAKE_BINARY_DIR}/../lib/libconfigs.a
    ${CMAKE_BINARY_DIR}/../lib/libcore.a
)

target_sources(
    ${EXE} PRIVATE
    configs.Make_Crystal.dev.cpp
)




# configs.Atom.units.x
#######################################################

set(EXE "configs.Atom.units.x")
add_executable(${EXE})

include_directories(${CMAKE_BINARY_DIR}/../src/lib)
target_link_libraries(
    ${EXE} 
    ${CMAKE_BINARY_DIR}/../lib/libtester.a
    ${CMAKE_BINARY_DIR}/../lib/libconfigs.a
    ${CMAKE_BINARY_DIR}/../lib/libcore.a
)

target_sources(
    ${EXE} PRIVATE
    configs.Atom.units.cpp
)


# configs.Make_Crystal.units.x
#######################################################

set(EXE "configs.Config.units.x")
add_executable(${EXE})

include_directories(${CMAKE_BINARY_DIR}/../src/lib)
target_link_libraries(
    ${EXE} 
    ${CMAKE_BINARY_DIR}/../lib/libconfigs.a
    ${CMAKE_BINARY_DIR}/../lib/libcore.a
    ${CMAKE_BINARY_DIR}/../lib/libtester.a
)

target_sources(
    ${EXE} PRIVATE
    configs.Config.units.cpp
)


# configs.Make_Crystal.units.x
#######################################################

set(EXE "configs.Make_Crystal.units.x")
add_executable(${EXE})

include_directories(${CMAKE_BINARY_DIR}/../src/lib)
target_link_libraries(
    ${EXE} 
    ${CMAKE_BINARY_DIR}/../lib/libconfigs.a
    ${CMAKE_BINARY_DIR}/../lib/libcore.a
    ${CMAKE_BINARY_DIR}/../lib/libtester.a
)

target_sources(
    ${EXE} PRIVATE
    configs.Make_Crystal.units.cpp
)


# configs.Make_Crystal.units.x
#######################################################

set(EXE "configs.Neighbour_List.units.x")
add_executable(${EXE})

include_directories(${CMAKE_BINARY_DIR}/../src/lib)
target_link_libraries(
    ${EXE} 
    ${CMAKE_BINARY_DIR}/../lib/libconfigs.a
    ${CMAKE_BINARY_DIR}/../lib/libcore.a
    ${CMAKE_BINARY_DIR}/../lib/libtester.a
)

target_sources(
    ${EXE} PRIVATE
    configs.Neighbour_List.units.cpp
)




