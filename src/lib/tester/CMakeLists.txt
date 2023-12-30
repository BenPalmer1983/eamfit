


set(LIB "tester")
add_library(${LIB})

target_sources(
    ${LIB} PRIVATE
    Assert.cpp
    Unit_Test.cpp
)
