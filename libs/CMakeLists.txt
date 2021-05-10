add_subdirectory(bar)
add_subdirectory(foo)


#create interface to both libraries
add_library(barfoo INTERFACE)
target_link_libraries(barfoo INTERFACE bar foo)


add_library(myinterface::meta ALIAS barfoo)

